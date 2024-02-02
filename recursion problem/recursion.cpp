#include<bits/stdc++.h>
using namespace std;
void f(int a,int b)
{
    if(a==b||a>b)
    {
        return ;
    }
    if(a%2==0)
    {
        f(a+1,b);
    }
    else
    {
        cout<<a<<endl;
        f(a+2,b);
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    f(a,b);
}