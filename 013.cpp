#include <stdio.h>
#include <memory.h>
 
int main()
{
char a[4], b[4];
char l1 = 0, l2 = 0;
int cb[10];
memset(&cb, 0, sizeof(int)*10);
 
FILE * f = fopen("input.txt", "r");
for (int i = 0; i<4; i++)
fscanf(f,"%c", &a[i]);
fscanf(f, "%c", &b[0]);
for (i = 0; i<4; i++)
fscanf(f,"%c", &b[i]);
fclose(f);
 
for (i = 0; i<4; i++)
{
if (a[i]==b[i])
l1++;
cb[a[i]-48] = 1;
}                                  
for (i = 0; i<4; i++)
if ((cb[b[i]-48]) && (a[i]!=b[i])) l2++;
 
f = fopen("output.txt","wt");
fprintf(f, "%d %d",l1,l2);
fclose(f);
 
return 0;
}
