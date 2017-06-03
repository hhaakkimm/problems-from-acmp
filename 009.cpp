#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
          
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    unsigned int n = 0;
    int mul = 1, sum = 0;
    int min = 0;
    int max = 0;
    scanf( "%d", &n);
    int * vector = new int [n];
    for (int i = 0; i<n ;i++)
    {
        scanf( "%d", &vector[i]);
        if (vector[i] > 0) sum += vector[i];
        if (vector[i] < vector[min]) min = i;
        if (vector[i] > vector[max]) max = i;
    }
      
      
    if (min > max)
    {
       n = min;
       min = max;
       max = n;
    }
      
    for (int i = min+1; i<max; i++)
        mul *= vector [i];
      
    cout<< sum<<" "<<mul;
    return 0;
}
