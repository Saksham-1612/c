#include <stdio.h>

int main()
{
    char choice;
    printf("Enter your choice");
    scanf("%d",choice);
    switch (choice)
    {
    case 'A':
        printf("I LOVE YOU");
        break;
    case 'B':
        printf("NIKAL CHUTIYE");
        break;
    
    default:printf("BHAAG JAO");
        break;
    }


}