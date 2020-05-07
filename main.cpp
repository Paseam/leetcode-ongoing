#include<iostream>
#include<vector>
#include "counting_sort.h"

int main()
{
    std::vector<int> data={1,3,8,5,4,9,2,7,6};
    counting_sort(data);
    for(int i=0;i<data.size();i++)
    {
        std::cout<<data[i]<<" ";
    }
    return 0;
}