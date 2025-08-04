#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[] = {10,20,30,40};
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", second_largest);
    return 0;
}