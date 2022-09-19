// #include<iostream>
// using namespace std;
// int main()
// {

//     int i,j;
//     int arr[6]={20,90,78,45,84,69};
//     int n=6;
//     for(i=0;i<n;i++)
//     {
//         int minindex=i;
//         for(j=i;j<n;j++)
//         {
//             if(arr[j]<arr[minindex])
//             {
//                 minindex=j;
//             }
//             swap(arr[minindex],arr[i]);
//         }
//     }

//     for(i=0;i<n;i++)
//         {
//             cout<<arr[i]<<" ";
//         }


// }

// sort in descending order

#include<iostream>
using namespace std;
int main()
{

    int i,j,n;
    int arr[6]={20,90,69,76,19,14};
    n=6;
    for(i=0;i<n-1;i++)
    {
        int maxindex=i;
        for(j=i;j<n;j++)
        {
            if(arr[j]>arr[maxindex])
            {
                maxindex=j;
            }
            swap(arr[maxindex],arr[i]);
        }

    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}