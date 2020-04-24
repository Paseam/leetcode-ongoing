#include <iostream>
#include <vector>
#include <memory>

int sort(int *data,int n)
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
int main()
{
    std::vector<int> data={4,1,5,3,2,6,8,9};
    sort(data.data(),data.size());
    for(int i=0;i<data.size();i++)
    {
        std::cout<<data[i]<<" ";
    }
    return 0;
}