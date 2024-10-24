#include<stdio.h>
int main()
{
int  a[10],i;
int x,b,n=10;
for (i=0; i<10 ;i++)
     a[i]=i+1 ;
for (i = 0; i < n; i++)
     printf("%d ", a[i]);
     printf("\n");
 x=50;
 b=5;
 n++;
 for  (i=n-1;i>=b; i--)
     a[i]=i-1;
 a[b-1]=x;

for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}




