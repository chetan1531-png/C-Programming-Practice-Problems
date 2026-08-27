#include <stdio.h>
int main()
{
    char ch1,ch2;
    printf("Enter two characte :",ch1,ch2);
    scanf("%c %c",&ch1,&ch2);
    int sum=ch1+ch2;
    printf("The ASCII value of %c is = %d\n",ch1,ch2);
    printf("The ASCII value of %c is = %d\n",ch2,ch1);
    printf("Sum of ASCII value :%d\n",sum);
    return 0;
}