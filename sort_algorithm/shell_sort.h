#ifndef _SHELL_SORT_H_
#define _SHELL_SORT_H_

#include <vector>
#include <memory>
#include <iostream>

int shell_sort(std::vector<int>& data)
{   
    if(data.size()==0)
        return 0;
    for(int gap=data.size()/2;gap>0;gap=gap/2)
    {
        for(int i=gap;i<data.size();i++)
        {
            int temp=data[i];
            int j;
            for(j=i-gap;j>=0;j=j-gap)
            {
                if(data[j]>temp)
                {
                    data[j+gap]=data[j];
                }
                else
                {
                    break;
                }
            }
            data[j+gap]=temp;
        }
    }
    return 0;
}

#endif //_SHELL_SORT_H_