#include <iostream>
using namespace std;
int add_fun(int a,int b){
    return a+b;
           a-b;
           a*b;
           a/b;
}

int main()
{
    
    int a,b;
    printf("please input a: \n");
    scanf("%d" ,a);
    printf("please input b: \n");
    scanf("%d",b);
    printf(" a + b=",add_fun(a,b));
    printf(" a - b=",add_fun(a,b));
    printf(" a * b=",add_fun(a,b));
    printf(" a / b=",add_fun(a,b));
   
    cout<<"Hello World";
    return 0;
}
