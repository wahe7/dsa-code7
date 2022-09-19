// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     a=4;
//     b=6;
//     int c=a&b; //AND
//     int d=a|b;  //OR
//     cout<<d<<endl;
//     cout<<c<<endl;
//     int e=~a; //NOT
//     cout<<e<<endl;
//     int f=a^b; // XOR
//     cout<<f;

// }


//LEFT SHIFT operator

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5,c;
//     c=a<<1;

//     cout<<c<<endl;
//     int d=a<<3;
//     cout<<d;

// }

//RIGHT SHIFT


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5,b;
//     b=a>>2;
//     cout<<b;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10,b=1;
//        if(++a)
//         cout<<b<<endl;
//        else
//         cout<<++b;

//      cout<<a<<" "<<b;   

// }

#include<iostream>
using namespace std;
int main()
{
    int a=1,b=2;
    if(a-->0 || ++b>2)
    {
        cout<<"Stage1 - Inside If";

    }
    else
    {
        cout<<"Stage2 - Inside else";
    }
    cout<<a<<" "<<b<<endl;
}


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=1,b=2;
//     if(a-->0 && ++b>2)
//     {
//         cout<<"Stage1 - Inside If";

//     }
//     else
//     {
//         cout<<"Stage2 - Inside else";
//     }
//     cout<<a<<" "<<b<<endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {

//     int a=1;
//     int b=a++;
//     int c= ++a;
//     cout<<b<<endl;
//     cout<<c;
// }