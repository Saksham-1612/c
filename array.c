#include <stdio.h>

int main()
{
    int size=0;
    int sum=0;
    float avg,avg1;
    int count,count1,sum1;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    // GETTING SIZE FROM USER
    int list[size];
    // ARRAY INTILALISED
    for (int i = 0; i < size; i++)
    {
        printf("Please enter the element\n");
        scanf("%d",&list[i]);
    }

    // GETTING ELEMENTS FOR ARRAY FROM USER THRIUGH A LOOP

    for (int j= 0; j < size; j++)
    {
        printf("%d\n",list[j]);
    }
    // TRAVERSING IN AN ARRAY AND PRINTING
    for (int k = 0; k < size; k+=2)
    {
        sum+=list[k];
        count++;
    }
    avg=sum/count;
    printf("The average of even position elements is %f\n",avg);
    // AVERAGE OF EVEN POSITION ELEMENTS
    for (int l = 0; l < size; l++)
    {
        if (list[l]%2==0)
        {
            /* code */
            sum1+=list[l];
            count1++;
        } 
    }
    avg1=sum1/count1;
    printf("The average of even elemrnts in array is%f\n",avg1);
    return 0;
}