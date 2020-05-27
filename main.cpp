#include<iostream>
#include<vector>
#include "bucket_sort.h"


int main()
{
    std::vector<int> data={1,3,8,5,4,9,2,7,6};
    bucket_sort(data);
    for(int i=0;i<data.size();i++)
    {
        std::cout<<data[i]<<" ";
    }
    std::cout<<std::endl;
    bucket_sort(data);

    return 0;
}