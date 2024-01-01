#include<stdio.h>
#include<stdbool.h>
bool isLeap(int year){
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {   
       return true;
    }
    return false;
    
}
void main(){
    int year;
    printf("Enter the year you want to check:\n");
    scanf("%d",&year);
    if (isLeap)
    {
        printf("Leap Year");
    }else{
        printf("Not a leap year");
    }
    
}