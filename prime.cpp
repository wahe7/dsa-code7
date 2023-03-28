#include<iostream>
using namespace std;
int main()
{
 int n,sum=0,i;
 cin>>n;
 for(i=2;i<n;i++)
 {
     if(n%i==0)
     {
         sum=sum+1;
     }

 }
  if(sum==0)
 {
     cout<<"It is prime no. ";
 }
  else{
     cout<<"It is not prime";
 }
}

