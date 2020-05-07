#ifndef _COUNTING_SORT_H_
#define _COUNTING_SORT_H_

#include <vector>
#include <memory>
#include <algorithm>
int counting_sort(std::vector<int>& data)
{
    int data_max=-100000;
    int data_min=100000;
    std::vector<int> outputs(data.size(),0);
    for(int i=0;i<data.size();i++)
    {
        data_max=data_max>data[i]?data_max:data[i];
        data_min=data_min>data[i]?data[i]:data_min;
    }

    std::vector<int> counts(data_max-data_min+2,0);
    for(int i=0;i<data.size();i++)//counting 
    {
        counts[data[i]-data_min+1]+=1;
    }
    for(int i=1;i<counts.size();i++)//accumulate num
    {
        counts[i]+=counts[i-1];
    }
    //push data in reasonable index
    for(int i=data.size()-1;i>=0;i--)
    {
        int index=counts[data[i]-data_min+1];
        outputs[index-1]=data[i];
    }
    //back data
    for(int i=0;i<data.size();i++)
    {
        data[i]=outputs[i];
    }
    return 0;
}

#endif//_COUNTING_SORT_H_