#include<iostream>
using namespace std;
int main()
{
    int mask=0,n,m,ans;
    cin>>n;
    m=n;
    // if(n==0)
    // {
    //     cout<<0;
    // }
    while(m!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;
    }
    ans=(~n)&mask;
    cout<<ans;
}
