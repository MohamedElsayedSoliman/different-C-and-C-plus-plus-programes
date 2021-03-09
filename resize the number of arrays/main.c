#include <stdio.h>
#include <stdlib.h>

int main()
{
    // this if i want to extend the size of array into bigger array form 5 to 10 i do this function

int *p ,*q;
 p=(int*)malloc(5*sizeof(int));
 p[0]= 1;
 p[1]= 5;
p[2]= 6;
p[3]= 7;
p[4]= 8;
 q=(int*)malloc(10*sizeof(int));
  int i;
 for(i=0;i<5;i++)
 q[i]=p[i]; // here we copy all the element from q to p
 free(p);
 p=q;
 q=NULL;

 p[5]= 10;

 for(i=0; i<10; i++)
    printf("%d\n",p[i]);


 return 0;
}
