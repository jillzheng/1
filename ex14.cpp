#include <iostream>

using namespace std;

int main()
{
    int i,a[5];
    int* p;
    
    printf("please input %d numbers \n",5);
    for(i=0;i<5;i++){
        //printf("please input %d nubers \n");
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<5;i++){
       //printf("a[%d] = %d ",i,a[i]);
       printf("a[%d] = %d",i, *(p+i));
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("a[%d] = %x \n",i,(p+i));
    }
    printf("\n");
 
    cout<<"Hello World";
    
    return 0;
    
}
