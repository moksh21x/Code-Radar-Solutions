#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a,&b);
    if ((a>0 && b<0)||(a<0 && b>0)){
        print("True");
    }
    else{
        print("False");
    }
    return 0;
}