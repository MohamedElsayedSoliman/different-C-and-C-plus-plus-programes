#include <stdio.h>
#include <stdlib.h>

int main()
{

int A[3][4];

int B[3][4]={{1,2,3,4},{5,6,7,8},{9,10,12,13}};
int i,j;
for(i=0;i<3;i++)
{
  for(j=0;j<4;j++)
    {
    printf("%d \n",B[i][j]);

  }
}
printf("  \n");
int *c[3];
c[0]= (int*)malloc(4*sizeof(int));
c[1]= (int*)malloc(4*sizeof(int));
c[2]= (int*)malloc(4*sizeof(int));
for(i=0;i<3;i++)
{
  for(j=0;j<4;j++)
    {
    printf("%d \n",c[i][j]);

 }
}
printf("  \n");
int **D;
D=(int**)malloc(3*sizeof(int*));
D[0]=(int*)malloc(4*sizeof(int));
D[1]=(int*)malloc(4*sizeof(int));
D[2]=(int*)malloc(4*sizeof(int));

for(i=0;i<3;i++)
{
  for(j=0;j<4;j++)
    {
    printf("%d \n",D[i][j]);

  }
}
    return 0;
}
