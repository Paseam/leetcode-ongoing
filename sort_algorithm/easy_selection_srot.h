#include <iostream>
#include <vector>
#include <memory>

int easy_selection_srot(int *data,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int nMaximumIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(data[j]>data[nMaximumIndex])
            {
                nMaximumIndex=j;
            }
        }
        //swap i nMaximumIndex
        if(i!=nMaximumIndex)
        {
            int temp=data[i];
            data[i]=data[nMaximumIndex];
            data[nMaximumIndex]=temp;
        }
    }
    return 0;
}
