// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[100];
//     int n,i;
//     int sum=0;
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(i=0;i<n;i++)
//     {
//         sum=arr[i]+sum;
//     }
//     cout<<"Sum of an array = "<<sum;
// }

//reverse the array

#include<iostream>
using namespace std;

int reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int i;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[100]={1,7,9,45};
    reverse(arr,4);
    printarray(arr,4);
}