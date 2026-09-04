#include <stdio.h>
int main()
{
    int size=8;
    int arr[8]={1,4,7,12,15,20,3,10};
    int even=0;
    int odd=0;
    int i;
    printf("Array:1,4,7,12,15,20,3,10\n");
    for(i=0;i<size;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The total even numbers :%d\n",even);
    printf("The odd nummbers  is :%d\n",odd);
    return 0;
}