#include <iostream>
#include <cstdio>
#include <string>
 
using namespace std;
 
string s;
 
int main()
{
       freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>s;
    if(s.length()!=5 || s[0]>'H' || s[0]<'A' || s[1]>'8' || s[1]<'1' || s[3]>'H' || s[3]<'A' || s[4]>'8' || s[4]<'1' || s[2]!='-')
    {
            cout<<"ERROR";
            return 0;
    }
    int ba=s[0]-'A'+1;
    int bs=s[1]-'0';
    int ea=s[3]-'A'+1;
    int es=s[4]-'0';
    if(ba+1==ea && bs+2==es || ba-1==ea && bs+2==es || ba+1==ea && bs-2==es || ba-1==ea && bs-2==es || ba+2==ea && bs+1==es || ba-2==ea && bs+1==es || ba+2==ea && bs-1==es || ba-2==ea && bs-1==es)
            cout<<"YES";
    else
            cout<<"NO";        
    return 0;
}
