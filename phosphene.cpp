// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,d,i,c;
//     int sum=0;
//     cin>>n;
//     int arr[n];
//     c=n;
//     for(i=0;i<n;i++)
//     {
//         cin>>d;
//         arr[i]=d;
//     }
//     for(int j=0;j<n;j++)
//     {
        
//         if(arr[j]>arr[n-j-1])
//         {
//             c--;
//         }
//     }

//     for(int k=0;k<c;k++)
//     {
//         cout<<arr[k]<<" ";
//     }
// }

#include<iostream>
using namespace std;
int main()
{

    int n,d,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>d;
        arr[i]=d;
    }

    int max=-1;

    for(int j=0;j<n;j++)
    {
        for(int k=j+2;k<n;)
        {
            m=arr[k]+arr[j];
            if(m>max)
            {
                max=m;
            }
            k=k+2;
        }
    }

    cout<<max;
}