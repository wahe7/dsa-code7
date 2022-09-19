#include<iostream>
using namespace std;
int main()
{
    int p,n,s,d;
    s=0;
    p=1;
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        p=p*d;
        s=s+d;
        n=n/10;

    }
    cout<<"product = "<<p<<endl;
    cout<<"sum = "<<s;
}