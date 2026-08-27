#include <stdio.h>
int main()
{
    int age;
    char name[50];
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your name :");
    scanf("%s",name);
    printf("Your age is %d and youre name is %s",age,name);
    return 0;
}