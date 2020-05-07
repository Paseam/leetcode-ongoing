#include<iostream>
#include<vector>
#include "merge_sort.h"

int main()
{
    std::vector<int> data={1,3,8,5,4,9,2,7,6};
    merge_sort(data,0,data.size()-1);
    for(int i=0;i<data.size();i++)
    {
        std::cout<<data[i]<<" ";
    }
    return 0;
}