#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[6]={1,90,65,43,90,9};
    int n=6;
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j+1],arr[j]);
                sum++;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<sum;
}

//time complexity o(N^2)