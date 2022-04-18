#include <iostream>
using namespace std;
#define N 3
#define N1 9
int main()
{
    int i,j, a[N]={3,4,1};
   
   for(i=1;i<(N1+1);i++){
        for(j=1;j<(N1+1);j++){
     printf("%2d * %2d = %2d ",i,j,i*j);
   }
   printf ("\n");
   }
    
    /*
    for(i=0;i<N;i++){
        cin >> a[i];
        printf(" a[%d]= %d \n",i,a[i]);
    }
    */
    cout<<"Hello world";

    return 0;
}
