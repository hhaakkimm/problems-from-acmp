#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
 
 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,ans=0;
    cin>>n;
    int a[102][102];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                ans++;
            }
        }
    }
    cout<<ans/2;
    return 0;
}
