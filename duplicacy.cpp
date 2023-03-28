#include<iostream>
using namespace std;
int main()
{

    int i,j=0,cnt=1;

    int arr[4]={1,1,2,2};
    for(i=1;i<4;i++)
    {
        if(arr[i]!=arr[j])
        {
            arr[++j]=arr[i];
            cnt++;
        }
    }

    for(int j=0;j<cnt;j++)
    {
        cout<<arr[j]<<" ";
    }
}