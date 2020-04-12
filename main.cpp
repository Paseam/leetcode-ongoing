#include<iostream>
#include<vector>
#include "bubble_sort.h"

int main()
{
    std::vector<int> data={4,1,5,3,2,6,8,9};
    bubble_sort(data);
    for(int i=0;i<data.size();i++)
    {
        std::cout<<data[i]<<" ";
    }
    return 0;
}