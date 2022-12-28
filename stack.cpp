// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main()
// {



//     double a=23.9676;
//     cout<<fixed;
//     cout<<setprecision(9)<<a;
//     // stack<int>s;
//     // s.push(2);
//     // s.push(34);
//     //to check stack is empty or not 
//     // if(s.empty())
//     // {
//     //     cout<<"yes";
//     // }
//     // else{
//     //     cout<<"no";
//     // }


// //to remove element
//     // s.pop(2);


//     //to print to element
//     // cout<<s.top();

//     //size of stack
//     // cout<<s.size();

// }

//reverse string
#include<iostream>
#include<stack>
using namespace std;
void reverse(string s)
{
    string result;
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }

    while(!st.empty())
    {
        result+=st.top();
        st.pop();
    }

    cout<<result;
}

int main()
{
    string s;
    cout<<"enter string : ";
    cin>>s;
    reverse(s);
}