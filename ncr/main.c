#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int nCr(int n,int r)
{
 int num ,dem;
    num=fact(n);
    dem=fact(r)*fact(n-r);
    return num/dem;
}
int main()
{
    printf("%d\n",nCr(5,2));
    return 0;
}
