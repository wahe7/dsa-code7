//power function

// #include<iostream>
// using namespace std;

// int pow(int a, int b)
// {
//     int ans=1,i;

// for(i=1;i<=b;i++)
// {
    
//     ans=ans*a;
// }
// return ans;
// }




// int main()
// {
// int answer  =  pow(2,5);
// cout<<answer;

// }


//odd even

// #include<iostream>
// using namespace std;

// int no(int a)
// {
//     int n=a%2;
    
//     if(n==0)
//     {
//        return 0;
//     }
//     return 1;
   
 
// }

// int main()
// {
//     int n;

//     cin>>n;
//    int ans=no(n);
//    if(ans==1)
//    {
//     cout<<"odd";
//    }
//    else{
//     cout<<"even";
//    }
// }




//ncr  function

// #include<iostream>
// using namespace std;

// int fact(int n)
// {
//     int i,f=1;
//     for(i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//   return f;
// }

// int ncr(int a,int b)
// {
//     int nume=fact(a);
//     int demo=fact(b)*fact(a-b);
//     int ans=nume/demo;
//     return ans;


// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     int answer=ncr(a,b);
//     cout<<answer;
// }

//counting

// #include<iostream>
// using namespace std;



// void printnumber(int n)
// {
//     int i;
//     for(i=1;i<=n;i++)
//     {
//         cout<<i<<endl;
//     }

// }

// int main()
// {
//     int n;
//     cin>>n;
//    printnumber(n);
    
// }

//check prime no.

#include<iostream>
using namespace std;


bool isprime(int n)
{
    int i;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    int n;
    int ans=isprime(n);
    if(ans==0)
    {
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}
