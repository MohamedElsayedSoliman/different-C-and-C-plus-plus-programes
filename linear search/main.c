#include <stdio.h>
#include <stdlib.h>

// The main difference between call by value and call by address is that,
//in call by value, the values of the actual parameters copy to the formal parameters of the function
//while the call by address, the addresses of the actual parameters copy to the formal parameter of the function.
//In brief, call by value does not change the original value while call by address changes the original values



struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }
int LinearSearch(struct Array *arr,int key)
{
 int i;
 for(i=0;i<arr->length;i++)
 {
 if(key==arr->A[i])
 {
 swap(&arr->A[i],&arr->A[0]);
 return i;
 }
 }
 return -1;
}
int main()
{
 struct Array arr1={{2,23,14,5,6,9,8,12},10,8};
 printf("%d",LinearSearch(&arr1,14));
 Display(arr1);
 return 0;
}
