#include <stdio.h>

int main(){
    char a,b;
    scanf("%c",&a,&b);
    if ((a>0 && b<0)||(a<0 && b>0)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}