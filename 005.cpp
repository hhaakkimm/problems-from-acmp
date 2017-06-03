#include<iostream>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,r=0,k=0;
    cin>>n;
    int a[105];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            k++;
            cout<<a[i]<<" ";
        }
         
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
         
        if(a[i]%2==0)
        {
            r++;
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    if(r>=k)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
