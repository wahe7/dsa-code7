#include<iostream>
using namespace std;
int main()
{

    int i,j=0,cnt=1;

    int arr[3]={1,1,2};
    for(i=1;i<3;i++)
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