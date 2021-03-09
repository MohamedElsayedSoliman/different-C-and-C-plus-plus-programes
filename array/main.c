#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5];
    int i;

    for (i=0;i<5;i++)
    {
        printf("%u \n",&A[i]); // %u to print the address of the program
    }
    //int B[5]={2,4,5,6,8};
    //int c[10]={1,2,3};
    //int D[10]={0};
    //int E[]={2,5,6};
    return 0;
}
