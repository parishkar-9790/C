#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
void output(int arr[], int n)
{
    printf("\nThe Merged and Sorted Array is -> \n");
    for (int i = 0; i < n; i++)
    {

        printf(" %d ", arr[i]);
    }
    printf("\n");
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubblesort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}
int *merge(int *arr1, int *arr2, int n1, int n2)
{
    static int arr3[MAX];
    for (int i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr3[n1 + i] = arr2[i];
    }
    return arr3;
}
void run()
{
    int n1, n2;
    printf("\nEnter the size of Array 1 -> ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d Elemets for Array 1-> ", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the size of Array 2 -> ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d Elemets for Array 2-> ", n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int *arr = merge(arr1, arr2, n1, n2);
    int n = n1 + n2;
    bubblesort(arr, n);
    // bubblesort(arr1, n1);
    output(arr, n);
    // output(arr2, n2);
}

int main()
{
    run();

    return 0;
}