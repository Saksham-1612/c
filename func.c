#include <stdio.h>
int input();
void display();
int main()
{
    int a = input();          // CALLING FUNCTION
    display(a);               // CALLING FUNCTION
    return 0;
}
int input()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    return a;
}
// INPUT FUNCTION THAT TAKES INPUT NUMBER FROM USER
void display(int a)
{
    int count = 10;
    int sum;
    int num = a;
    for (int i = 1; i <= count; i++)
    {
        sum = num * i;
        printf("%d\n", sum);
    }
}
// VOID FUNCTION THAT TAKES PRINTS TABLE