#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i=0,ans;
    cin>>n;
    while(i<=30)
    {
        ans=pow(2,i);
         if(ans==n)
        {
            cout<<"yes";
        }
      
        i++;
    }
     
       
}