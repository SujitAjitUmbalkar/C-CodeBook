#include<stdio.h>
// Accepting inputs with spaces 
int main()
{
    char FullName[20];

    printf("enter you r full name : \n");
    fgets(FullName,sizeof(FullName),stdin);

    printf("Hii ! %s", FullName);

    return 0;
}
