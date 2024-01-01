#include<stdio.h>
int printTable(int num){
    int mul;
    for (int i = 0; i <= 10; i++)
    {
        mul = num*i;

        printf("%d * %d = %d",num,i,mul);
        printf("\n");
    }
    
}
void main(){
    int num = 5;
    printTable(5);
}