#include <stdio.h>
#include <stdlib.h>
int sum(int n)
{
 int s=0,i;
 for(i=1;i<=n;i++) // this is iterative function
 s=s+i;

 return s;
}



/*{
 if(n==0)
 return 0;                 // this is recursive function
 return sum(n-1)+n;
}*/
int main()
{
 int r=sum(5);
 printf("%d ",r);
 return 0;
}
