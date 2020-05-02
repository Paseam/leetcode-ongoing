#include<iostream>
#include<vector>
#include "heap_sort.h"

int main()
{
    std::vector<int> data={};
    heap_sort(data);
    for(int i=0;i<data.size();i++)
    {
        std::cout<<data[i]<<" ";
    }
    return 0;
}