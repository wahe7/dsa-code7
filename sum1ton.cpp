#include<iostream>
using namespace std;
int main()
// {
//     int n,i;
//     int sum=0;
//     cin>>n;
//     for(i=0;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     cout<<sum;
// }
{
    int i,sum=0,n;
    cin>>n;
    i=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum;
}