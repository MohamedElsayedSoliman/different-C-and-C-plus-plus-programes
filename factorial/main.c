#include <stdio.h>
#include <stdlib.h>


int fact(int n)
{
 if(n==0)
 return 1;
return fact(n-1)*n;
}
int Ifact(int n)
{
int f=1;int i;
   for(i=1;i<=n;i++)
   f=f*i;
return f;
}
int main()
{
int d= Ifact(5);
printf("%d ",d);
return 0;
}





/*int fact(int n)
{
 if(n==0)
 return 1;
 return fact(n-1)*n;
}
int Ifact(int n)
{
 int f=1,i;
 for(i=1;i<=n;i++)
 f=f*i;

 return f;
}
int main()
{
 int r=Ifact(5);
 printf("%d ",r);
 return 0;
}*/


