#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b;
    cin>>a>>b;
    cout<<a*b/gcd(a,b);
    return 0;
}
