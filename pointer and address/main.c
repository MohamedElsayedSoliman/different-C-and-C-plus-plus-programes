#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x= 5;
    int*p= &x;
x+=1;
p+=1;
    printf("%d\n",p); // p is pointer to the addres of x
    printf("%d\n",&x);// address of x
    printf("%d\n",*p); // *p =6
    return 0;
}
