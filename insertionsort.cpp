#include<iostream>
using namespace std;
int main()
{
    int i,j,temp;
    int arr[6]={1,54,23,67,43,21};
    for(i=0;i<6;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
    
arr[j+1]=temp;
    }
    
    for(i=0;i<6;i++)
    {
        
        cout<<arr[i]<<" ";
    }
}