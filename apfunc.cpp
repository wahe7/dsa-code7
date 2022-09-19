#include<iostream>
using namespace std;


int ap(int n)
{

    int ans=(3*n+7);

    return ans;
}

int main()
{
    int n;
    cin>>n;
    int answer=ap(n);
    cout<<"nth term is : "<<answer;
}