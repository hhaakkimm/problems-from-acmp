#include <bits/stdc++.h>
 
using namespace std;
 
//constants
const int MAXN=(int)(1e2+1e1);
 
//defines
#define ll long long
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define mp make_pair
#define pb push_back
#define eof (-1)
#define forr(xx,yy,zz) for(int zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()
//=
 
int n,ans,d[MAXN][MAXN];
 
int main ()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    scanf("%d",&n);
    d[0][0]=1;
    forr(1,n,sum)
    {
        forl(sum,0,i)
        {
            forl(i-1,0,k)
            {
                d[sum][i]+=d[sum-i][k];
            }
        }
    }
    forr(1,n,i)
    {
        ans+=d[n][i];
    }
    printf("%d",ans);
    return 0;
}
