#ifndef _HEAP_SORT_
#define _HEAP_SORT_

#include <vector>
#include <memory>


static int swap(std::vector<int>& data, int i,int j)
{
    int temp=data[i];
    data[i]=data[j];
    data[j]=temp;
    return 0;
}
static int heapify(std::vector<int>& data, int index, int n)
{
    //int n=data.size();
    int left=2*index+1;
    int right=2*index+2;

    if(left>=n && right>=n)
        return 0;
    
    int largest=index;
    if(left<n)
    {
        if(data[left]>data[largest])
            largest=left;
    }

    if(right<n)
    {
        if(data[right]>data[largest])
            largest=right;
    }

    if(largest!=index)
    {
        //swap 
        swap(data,largest,index);
        heapify(data,largest,n);
    }
    return 0;
}



static int build_heap(std::vector<int>& data)
{
    for(int i=data.size()/2;i>=0;i--)
    {
        heapify(data,i,data.size());
    }
    return 0;
}


int heap_sort(std::vector<int>& data)
{
    if(data.size()==0)
        return 0;
    //build heap
    build_heap(data);
    //sort data 
    int nLen=data.size();
    for(int i=0;i<data.size()-1;i++)
    {
        swap(data,0,data.size()-1-i);
        heapify(data,0,--nLen);
        //nLen--;
    }
}
#endif //_HEAP_SORT_
