#include<iostream>
#include<vector>


int bubble_sort(std::vector<int>& data)
{
    int nLenData=data.size();
    for(int epoch=0;epoch<nLenData-1;epoch++)
    {
        bool bFlag=false;
        for(int index=nLenData-1;index>epoch;index--)
        {
            if(data[index]<data[index-1])//stable sort
            {
                bFlag=true;
                //swap data
                int temp=data[index];
                data[index]=data[index-1];
                data[index-1]=temp;
            }

        }
        if(!bFlag)//best situation o(1)
            break;
    }

    return 0;
}
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