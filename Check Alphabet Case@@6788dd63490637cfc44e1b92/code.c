#include <stdio.h>

int main(){
    int ch;
    scanf("%d",&ch);

    if(ch>='A'&&ch<='Z'){
        printf("Lowercase");
    }
    else if(ch>='a'&&ch<='z');{
        printf("Uppercase");

    }
    return 0;
}