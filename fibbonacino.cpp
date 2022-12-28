#include<iostream>
using namespace std;
int main()
{
    int a,b,nxtno,n,i;
    a=0;
    b=1;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(i=1;i<=n;i++)
    {
        nxtno=a+b;
        a=b;
        b=nxtno;
        cout<<nxtno<<" ";
    }
}