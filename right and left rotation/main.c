#include <stdio.h>
#include <stdlib.h>
struct Array
{
int *A;
int size;
int length;
};
void Input(struct Array *arr)
{
int n,i;
printf("Enter the size of array");
scanf("%d",&arr->size);
arr->A=(int *)malloc(arr->size*sizeof(int)); // this was missing
printf("Enter how many no.");
scanf("%d",&n);
printf("Enter all Elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr->A[i]);
}
arr->length=n;
}
void Display(struct Array arr)
{
int i;
printf("Elements are\n");
for(i=0;i<arr.length;i++)
{
printf("%d ",arr.A[i]);
}
}
void leftRotate(struct Array *arr,int index)
{
int i,j,temp;
temp=arr->A[0];
for(i=0;i<index-1;i++)
{
arr->A[i]=arr->A[i+1];
}
arr->A[arr->length-1]=temp;
}






int main()
{
struct Array arr;
Input(&arr);

leftRotate(&arr,5);
Display(arr);
return 0;
}
