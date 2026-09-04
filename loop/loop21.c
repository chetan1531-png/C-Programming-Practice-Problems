#include  <stdio.h>
int main()
{
    int num,i,N;
    int largest ,smallest;
    printf("How many numbers will you enter (N)?\n");
    scanf("%d",&N);
    printf("Enter the numbers:\n");
    for(i=1;i<=N;i++)
    {
        if(i==1)
        {
            printf("smallest number");
        }
        if(num<smallest)
        {
            smallest=num;
        }
        if(num>largest)
        {
            largest=num;
        }
    }
    printf("Largest number is :%d\n",largest);
    printf("Smallest number entered :%d\n",smallest);
    return 0;
}