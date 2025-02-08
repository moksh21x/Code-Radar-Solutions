#include <stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);

    if(marks>=90){
        printf('A');
    }
    else if(90>marks>=80){
        printf('B');
    }
    else if(80>makrs>=70){
        printf('C');
    }
    else if(marks<60){
        printf('D');
    }
    return 0;
}
