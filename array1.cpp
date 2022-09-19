#include<iostream>
using namespace std;



int max(int num[],int n)
{
    int max= INT16_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
    }
    return max;
}

int main()
{
    int num[100];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }

    cout<<"Max no. in an array = "<< max(num,n);
 
}