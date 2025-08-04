#include<stdio.h>

int main() 
{
    double number;
    char alphabet;

    printf("Enter double inputs:");
    scanf("%lf", & number);

    printf("Enter character inputs:");
    scanf("\n%c", & alphabet);

    printf("Number: %f", number);
    printf("\ncharacter: %c", alphabet);
    return 0;
}