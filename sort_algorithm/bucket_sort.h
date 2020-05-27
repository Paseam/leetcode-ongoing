#ifndef _BUCKET_SORT_H_
#define _BUCKET_SORT_H_

#include <vector>
#include <iostream>

typedef struct Node 
{
    int data;
    struct Node *next;
} Node;


void insertion_sort(Node* node)
{
    if(node==NULL)
        return ;

    if(node->next==NULL)
        return ;

    Node *temp=node;
    node =node->next;
    while(node!=NULL)
    {
        Node * head=temp;
        Node * prev=NULL;
        while(head!=node)
        {
            if(head->data>node->data)
            {
                Node* a=node->next;
                if(prev==NULL)
                { 
                    node->next=head;
                }
                else
                {
                    prev->next=node;
                    node->next=head;
                }
                while(head->next!=node)
                {
                    head=head->next;
                }
                head->next=a;
            }
            prev=head;
            head=head->next;
        }
    }
}

int bucket_sort(std::vector<int>& data)
{
    int nBucketNum;
    int nDataMax=-1;
    int nDataMin=1000000;
    for (int i=0;i<data.size();i++)
    {
        nDataMax=std::max(nDataMax,data[i]);
        nDataMin=std::min(nDataMin,data[i]);
    }
    nBucketNum=((nDataMax-nDataMin+1)+9)/10;

    Node ** bucket_list=(Node**)calloc(nBucketNum,sizeof(Node*));
    for(int i=0;i<nBucketNum;i++)
    {
        bucket_list[i]=NULL;
    }

    for(int i=0;i<data.size();i++)
    {
        int index=(data[i]-nDataMin)/10;
        
        Node* node=bucket_list[index];
        Node* item=(Node*)calloc(1,sizeof(Node));
        item->data=data[i];
        item->next=NULL;
        if(bucket_list[index]==NULL)
            bucket_list[index]=item;
        else
        {
            while(node->next!=NULL)
            {
                node=node->next;
            }
            node->next=item;
        }

    }
    int nTotal=0;
    for(int  i=0;i<nBucketNum;i++)
    {
        insertioin_sort(bucket_list[i]);
        Node* node=bucket_list[i];
        while(node!=NULL)
        {
            data[nTotal++]=node->data;
            node=node->next;
        }
    }

    return 0;
}



#endif //_BUCKET_SORT_H_