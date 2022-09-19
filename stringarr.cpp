
//print string 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,count=0;
//     char name[20]="wahe";
//     for(i=0;name[i]!='\0';i++)
//     {
//         count++;
//     }
//     cout<<count;
// }


// reverse a string
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=6;
//     int i;
//     int s=0;
//     int e=n-1;
//     char name[n]="wahe";
//     while(s<e)
//     {
//         swap(name[s++],name[e--]);
//     }
//     for(i=0;i<n;i++)
//     {
//         cout<<name[i];
//     }

// } 

// check palindrome

#include<iostream>
using namespace std;
int main()
{
    int n=20,count=0,i;
    int s=0,e=n-1;
    char name[n]="noon";

    for(i=0;i<name[].size();i++)
    {
        if(name[i]==name[n-i])
        {
            count++;
        }
    }

}