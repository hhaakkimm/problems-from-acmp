#include<iostream> 
 
using namespace std; 
int main() 
{ 
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout); 
    long int n, s=0; 
    cin>>n; 
    if(n>0) 
    {    
        for(int i=1; i<=n; i++) 
        { 
            s=s+i; 
        } 
    } 
    else
    {        
        for(int i=n; i<=1; i++) 
        {        
            s=s+i; 
        } 
    } 
    cout<<s; 
    return 0; 
}
