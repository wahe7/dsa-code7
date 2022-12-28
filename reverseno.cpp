#include<iostream>
using namespace std;
int main()
{
    int i,ans=0,digit;
    cin>>i;

    if((ans> INT16_MAX/10) || (ans<INT16_MIN/10))
    {
        cout<<0;
    }
    while(i>0)
    {
        digit=i%10;
        ans=ans*10+digit;
        i=i/10;
    }
    cout<<ans;
}