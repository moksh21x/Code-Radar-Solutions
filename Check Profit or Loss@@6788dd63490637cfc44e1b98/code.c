#include<stdio.h>
int main(){
    int c,s;
    scanf("%d%d",&a,&b);
    if (b-a>0){
        printf("Profit");
    }
    else if(b-a<0){
        printf("Loss");

    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}