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
int min(int num[],int n)
{
    int min= INT16_MAX;
    int i;
    for(i=0;i<n;i++)
    {
        if(min>num[i])
        {
            min=num[i];
        }
    }
    return min;
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
    cout<<min(num,n);
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<< max(num,n);
     

}


//frequency of  digit in a number
// #include <iostream>
// using namespace std;

// void freq(int arr[8], int n)
// {
//     int i, j;

//     for (i = 0; i < 9; i++)
//     {
//         int count = 0;
//         for (j = 0; j < n; j++)
//         {
//             if (i == arr[j])
//             {
//                 count = count + 1;
//             }
//         }
//         if (count != 0)
//         {
//             cout << i << " : " << count << " ";
//             cout << endl;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter any no. : ";
//     cin >> n;

//     int x = 0, i, j;
//     int y = 0;
//     int arr[8];
//     while (n > 0)
//     {
//         y = n % 10;
//         arr[x] = y;
//         n = n / 10;
//         x++;
//     }
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for (i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     freq(arr, size);
// }