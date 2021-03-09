#include <stdio.h>
#include <stdlib.h>
// that's dynamic Array the user insert the size and length by himself and it is  stored in the heap memory
/*
struct Array
{

int*A;
//& symbol is used to get the address of the variable.
//* symbol is used to get the value of the variable that the pointer is pointing to.

int size;

int length;


};
void Display (struct Array arr)
{

int i;
printf("\nElement are \n");
for(i=0;i<arr.length;i++)
printf("%d ",arr.A[i]);
}
int main()
{
    struct Array arr; // arr is the name of the array
    int n,i;
    printf(" \n Enter the size of an Array \n");
    scanf("%d",&arr.size);
   arr.A=(int*)malloc(arr.size*sizeof(int));
    arr.length=0;

        // this array is created in heap , this type of struct array is preferable because size are dynamics what ever the required sizes you can take  the size if you want to fill the elements
        // then you can take the elements from the keyboard or anywhere else you can bring the elements and fill them

        printf(" \n Enter the number of numbers \n");
        scanf("%d",&n);

        printf(" \n Enter all Elements \n");
        for(i=0;i<n;i++)

            scanf("%d",&arr.A[i]);
            arr.length=n;
            Display(arr);

    return 0;
} */

// this static Array i insert the size and length by myself and it is stored in the stack

struct Array
{

int A[20];

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







int main()
{
    struct Array arr={{2,3,4,5,6},20,5};  // this 2,3,4 ... this numbers inside array, 20 is the size of array and 5 is the length of array
     Display(arr);
    return 0;
}
