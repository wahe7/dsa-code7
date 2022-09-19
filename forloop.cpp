#include<iostream>
using namespace std;
int main()
{
   
   int i,j;
   for(i=0;i<=5;i++)
   {
       for(j=i;j<=10;j++)
       {
           if(i+j ==10)
           {
               break;
           }
           cout<<i<<" "<<j<<endl;
       }
   }
}