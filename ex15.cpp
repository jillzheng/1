#include <stdio.h>
using namespace std;
void print_array(int* a){
int main()
    printf("*a = %d \n",*a);
    printf(" a = %x \n",a);
}
int main()
{
    int b,a[6] = {7,4,12,9,65,8};
    int* p;
    int  i;

 b=a[0];
 p=&b;
 
 printf("please input a num:\n");
 scanf("%d ",&b);
 printf("b = %x \n",&b);

 printf("b = %d \n",*p);
 printf("b = %x \n",p);

 printf("use print_array a num")
 print_array(P);
 
 p=a;
    return 0;
}
