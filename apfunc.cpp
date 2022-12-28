// #include<iostream>
// using namespace std;


// int ap(int n)
// {

//     int ans=(3*n+7);

//     return ans;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int answer=ap(n);
//     cout<<"nth term is : "<<answer;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,i,ans;
//     cin>>x;
//     for(i=0;i<x;i++)
//     {
//         ans=(4*i+2);
//         if(ans%4!=0)
//         {
//             cout<<ans<<" ";
//         }
//     }

// }

#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    int check=0;
    cin>>n;
 
    for(i=1;i<n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                check++;
                break;
            }

        }
        
        if(check==0 && i!=1)
        {
            cout<<i<<" ";
            
        }
        check=0;
    }
}