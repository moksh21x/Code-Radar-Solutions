#include<stdio.h>
int main(){
    int i,N,product;
    scanf("%d",&N);
    for (i=1;i<=10;i++){
        product=N*i;
        printf("%d x %d = %d",N,i,product); 
       
    }

    return 0;
}