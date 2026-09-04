#include <stdio.h>
int main()
{
    int size=9;
    int arr[9]={15,-5,20,0,-10,30,-25,5,0};
    int positive_sum=0;
    int negative_sum=0;
    int i;
    printf("Array elements :15,-5,20,0,-10,30,-25,5,0");
    for(i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            positive_sum=positive_sum+arr[i];
        }
        else if (arr[i]<0)
        {
            negative_sum=negative_sum+arr[i];
        }
    }
    printf("Sum of positive numbers : %d\n",positive_sum);
    printf("SUm of negative nnumbers : %d\n",negative_sum);
    return  0;
}