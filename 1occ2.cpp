#include<iostream>
using namespace std;

int firstocc(int arr[],int size ,int key)
{
    int start=0;
    int end=size;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
        
    }
    return ans;


}

int lastocc(int arr[],int size ,int key)
{
    int start=0;
    int end=size;
    int answ=-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            answ=mid;
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
        
    }
    return answ;


}

int main()
{

    int arr[6]={1,2,3,3,3,4};
    cout<<"index of 3 is "<<firstocc(arr,6,3)<<endl;
    cout<<"index of 3 is last "<<lastocc(arr,6,3);
}


