#include<stdio.h>

int fact(int n) {
    if(n>0){
        return n*fact(n-1);
    } else {
        return 1;
    }
    
}

int main(){
    int result=fact(4);
    printf("factorial of 4 is %d",result);
    return 0;
}