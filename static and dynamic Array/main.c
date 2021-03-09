#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5]= {2,4,5,6,7};
    int *p; // when we want to store value in heap we should  use pointer (*) and malloc
    int i;
    p= (int*)malloc(5*sizeof(int));
    p[0]= 2;
     p[1]= 3;
      p[2]= 4;
       p[3]= 5;
        p[4]= 6;
        for (i=0; i<5; i++)

           printf("%d  ",A[i]);  // thats inside stack memory

         printf("\n");

        for (i=0; i<5; i++)

           printf("%d  ",p[i]); // thats inside heap memory

    return 0;
}
