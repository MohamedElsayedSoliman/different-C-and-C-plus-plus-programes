#include <stdio.h>
#include <stdlib.h>

struct Array{
int A[10];
int length; int size;

};

 /*int singlemissing(struct Array arr ) {
int n=arr.length;
 int sum=0; int i,s,k;

 for(i=0;i<arr.length-1;i++)
 {
     sum=sum+arr.A[i];
 }
 s=n*(n+1)/2;
 k=s-sum;
return printf("the missing is %d",k);
 }*/

 int singlemissing(struct Array arr) {
int diff,i,k,l,h;
l=arr.A[0];
h=arr.A[9];
diff=l-0;
 for(i=0;i<arr.length;i++)
{


   if(arr.A[i]-i !=diff)
    {
   k=i+diff;
   printf("the missing is %d",k);
break;
   }

}
return 0;
 }
int main()
{
struct Array arr={{1,2,4,5,6,7,8,9,10},10,9};
    //singlemissing(arr);
    singlemissing(arr);

return 0;
}

