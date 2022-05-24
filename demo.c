#include<stdio.h>

// int fact(int n) {
//     if(n>0){
//         return n*fact(n-1);
//     } else {
//         return 1;
//     }
    
// }

// int main(){
//     int result=fact(4);
//     printf("factorial of 4 is %d",result);
//     return 0;
// }
int main(){
    char ch;
    printf("enter charecter :");
    scanf("%c" , &ch );
     
     if(ch >= 'A' && ch <= 'Z'){
     printf("upper case");}

     else if(ch >= 'a' && ch <= 'z') {
         printf("lower case");
     }
     else {
         printf("not english");
     }

    }
  

