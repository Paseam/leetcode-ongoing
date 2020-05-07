#ifndef _MERGE_SORT_H_
#define _MERGE_SORT_H_
#include <vector>
#include <memory>

int merge(std::vector<int>& data, int beg,int mid,int end)
{
    std::vector<int> left(mid-beg+1,0);
    std::vector<int> right(end-mid,0);
    for(int i=beg;i<mid+1;i++)
    {
        left[i-beg]=data[i];
    }
    for(int i=mid+1;i<end+1;i++)
    {
        right[i-mid-1]=data[i];
    }

    int index_left=0;
    int index_right=0;
    int index=beg;
    while(index_left<left.size() && index_right<right.size())
    {
        if(left[index_left]<=right[index_right])
        {
            data[index++]=left[index_left++];
        }
        else
        {
            data[index++]=right[index_right++];
        }
    }

    while(index_left<left.size())
    {
        data[index++]=left[index_left++];
    }
    while(index_right<right.size())
    {
        data[index++]=right[index_right++];
    }

    return 0;
}

int merge_sort(std::vector<int>& data,int beg,int end)
{
    if(end-beg<=0)
        return 0;
    
    int nLen=end-beg+1;
    int mid=(end+beg)/2;
    //sort data beg mid
    merge_sort(data,beg,mid);
    merge_sort(data,mid+1,end);

    //merge data
    merge(data,beg,mid,end);
    return 0;
}

#endif//_MERGE_SORT_H_

