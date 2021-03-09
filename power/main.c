#include <stdio.h>
#include <stdlib.h>

int pow(int n,int m)
{
 int s=1; int i;
 for(i=1;i<=m;i++)
 {

 s=s*n;
}
 return s;
}
int main()
{
 int r=pow(2,0);
 printf("%d ",r);
 return 0;
}
