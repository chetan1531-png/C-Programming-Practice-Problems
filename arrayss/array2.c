#include <stdio.h>
int mian()
{
    int size=5;
    int arr[5]={10,20,30,40,50};
    int sum=0
    int i;
    float avg;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    avg=(float)sum/size;
    printf("Sum of array is :%d\n",sum);
    printf("Average of array is : %f\n",avg);
    return 0;

}