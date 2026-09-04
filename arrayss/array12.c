#include <stdio.h>
int  main()
{
    int size=8;
    int arr[8]={1,5,2,8,5,1,5,9};
    int search_element=5;
    int freq;
    int  count_frequency;
    freq=count_freequency(arr,size,search_element);
    printf("Element %d appears %d times in the array .\n",search_element);
    return 0;
}