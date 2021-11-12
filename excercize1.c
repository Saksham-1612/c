#include<stdio.h>
/* 
Print the multiplication of a number entered by a user in pretty form.

Example 
input 
Enter the number you want multiplication of:
Output:
6 X 1 = 6
.....

*/

int main()
{
    int num,mul;
    printf("Enter the number for multiplication\n");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        mul=num*i;
        printf("%d \n",mul);
    }
    return 0;
}