#include<iostream>
using namespace std;
int main(void)
{

    int i,j;
    int arr[7]={3,1,4,9,7,12,98};
    int n=7 ;
    for(i=0;i<n;i++)
    {
        int minindex=i;
        for(j=i;j<n-1;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
            swap(arr[minindex],arr[i]);
        }
    }

    for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }


}

// n=sizeof(arr)/sizeof(int);

// sort in descending order

// #include<iostream>
// using namespace std;
// int main()
// {

//     int i,j,n;
//     int arr[6]={20,90,69,76,19,14};
//     n=6;
//     for(i=0;i<n-1;i++)
//     {
//         int maxindex=i;
//         for(j=i;j<n;j++)
//         {
//             if(arr[j]>arr[maxindex])
//             {
//                 maxindex=j;
//             }
//             swap(arr[maxindex],arr[i]);
//         }

//     }
//     for(i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }