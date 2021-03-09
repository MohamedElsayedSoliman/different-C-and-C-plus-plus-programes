#include <stdio.h>
#include <stdlib.h>
/*
struct Array
{
int A[10];

int size;

int length;
};
void Display (struct Array arr)
{

int i;
printf("\n Element are \n");
for(i=0;i<arr.length;i++)
printf("%d ",arr.A[i]);
}
void Append(struct Array *arr,int x)
 {
 if(arr->length<arr->size)
 arr->A[arr->length++]=x;
 }

// An Arrow operator in C/C++ allows to access elements in Structures and Unions. It is used with a pointer variable pointing to a structure or union.
// The arrow operator is formed by using a minus sign, followed by the geater than symbol as shown below ->.

//thats mean size of array is bigger than the length of array
// The Dot(.) operator is used to normally access members of a structure or union.
//The Arrow(->) operator exists to access the members of the structure or the unions using pointers
int main()
{
    struct Array arr={{2,3,4,5,6},20,5};  // this 2,3,4 ... this numbers inside array, 20 is the size of array and 5 is the length of array
     Display(arr);
     Append(&arr,10);
    return 0;
} */

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
 void Append(struct Array *arr,int x)
 {
 if(arr->length<arr->size)
 arr->A[arr->length++]=x;
 }
 void Insert(struct Array *arr,int index,int x) // * because we are going to modify array
 {
 int i;

 if(index>=0 && index <=arr->length)
 {
 for(i=arr->length;i>index;i--)
 arr->A[i]=arr->A[i-1];
 arr->A[index]=x;
 arr->length++;
 }
 }
int main()
{
struct Array arr1={{2,3,4,5,6},10,5};
Append(&arr1,10);
Insert(&arr1,0,12);
Display(arr1);
 return 0;
}
