#include<iostream>
using namespace std;
 int setbits(int a)
 {
    int count=0;
    while(a!=0)
    {
        if(a&1)
        {
            count++;
        }
        a=a>>1;
    }
    return count;
 }

  int setbits1(int b)
 {
    int count1=0;
    while(b!=0)
    {
        if(b&1)
        {
            count1++;
        }
        b=b>>1;
    }
    return count1;
 }

 int main()
 {
    int n,q;
    cin>>n;
    cin>>q;
    int ans=setbits(n)+setbits1(q);
    cout<<"No. of set bits : "<<ans;
 }