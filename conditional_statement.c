#include<stdio.h>

int main(){

    int day;
    printf("enter the day (m to s) :"); //m -mon; t - tues; w-wed ; t-thurs; f-fri; s-sat s sun
    scanf("%d" , &day);

    switch(day){
                case 'm' : printf("monday");
                break;
                case 'T' : printf("tuesday");
                break;
                case 'w' : printf("wednesday");
                break;
                case 't' : printf("thursday");
                break;
                case 'f' : printf("friday");
                break;
                case 's' : printf("saturday");
                break;
                case 'S' : printf("sunday");
                break;
                default : printf("not a valid day");
    }

    }

