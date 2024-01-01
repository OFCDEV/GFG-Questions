#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the two numbers: \n");
    scanf("%d %d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping A is %d and b is %d \n",a,b);
}