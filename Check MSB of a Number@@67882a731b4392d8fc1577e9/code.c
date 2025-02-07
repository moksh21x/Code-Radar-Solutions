#include <stdio.h>
int main(){
    int bit;
    scanf("%d",&bit);
    if (bit & (1<<31)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}