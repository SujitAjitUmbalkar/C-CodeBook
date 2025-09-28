// Accepting input in C 

#include<stdio.h>

int main()
{
    int number = 0;
    float floats = 0;
    double D = 0;
    char str[10] = {0}; 
    char ch = '\0';
    
    // Accepting int 
    printf("Enter Integer : \n");
    scanf("%d",&number);

    // Accepting float 
    printf("Enter Float : \n");
    scanf("%f",&floats);

    // Accepting character : 
    printf("Enter Char : \n");
    scanf("%s",&ch);

    // Accepting double 
    printf("Enter double : \n");
    scanf("%lf",&D);

    printf("You Have entered : %d\t",number);
    printf("\n");
    
    printf("You Have entered : %f\t ",floats);
    printf("\n");

    printf("You Have entered : %c\t ",ch);
    printf("\n");
    printf("You Have entered : %lf\t ",D);



    return 0;
}    
