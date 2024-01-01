#include<stdio.h>
#include<stdlib.h>
void main(){
    char ch;
    double a,b;
    while (1)
    {
        printf("Enter an operator(+,-*,/),"
        "if you want to exit press x:");
        scanf("%c",&ch);
        if (ch == 'x')
            exit(0);
        printf("Enter the first and second operand:\n");
        scanf("%lf %lf",&a,&b);

        switch (ch)
        {
        case '+':
            printf("%.1lf + %.1lf = %.1lf \n",a,b,a+b);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf \n",a,b,a-b);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf \n",a,b,a*b);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf \n",a,b,a/b);
            break;
        default:
            printf("Please enter a valid operator.");
        }
        printf("\n");
    }
    
}