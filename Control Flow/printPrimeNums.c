//It can print all the prime numbers within a given range.
#include<stdio.h>
#include<stdbool.h>
bool isPrime(int N){
    if(N ==1 || N == 0){
        return false;
    }
    for (int i = 2; i <= N/2; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    return true;
        
    }
    
}
void main(){
    int n;
    printf("Enter the range:\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n",i);
        }
        
    }
    
}