#include <stdio.h>
#include<iostream>
using namespace std;
 
unsigned int n;
int * list;
 
bool Check(int step)
{
unsigned int i = 0;
while ((list[i%step] == list [i]) && (i<n))
i++;
if (i==n) return true; else return false;
}
 
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>n;
list = new int [n];
for (int i = 0; i<n; i++)
cin>>list[i];
 
n--;
int r = n;
 
for (int i = 1; i<n; i++)
{
if (!(n%i))
{
if (Check(i))
{
r = i;
break;
}
}
}
cout<<r;
return 0;
}
