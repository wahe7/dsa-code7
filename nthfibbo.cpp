#include<iostream>
using namespace std;
 int fibo(int n)
 {
    int a=0;
    int b=1,i,c;
   
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
    

 }

 int main()
 {
    int n;
    cin>>n;
    int as=fibo(n);
    cout<<as;
 }