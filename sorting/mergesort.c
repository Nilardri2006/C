#include <stdio.h>
void merge(int A[],int mid, int low, int high){
    int B[100],i,j,k;
    i = low;
    j = mid +1;
    k = low;

    while(i<=mid && j<= high)
    {
        if(A[i]<A[j])
        {
            B[k]=A[i];
            i++;
            k++;
        }
        else
        {
            B[k]=A[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    for(int i=low;i<=high;i++)
    {
        A[i] = B[i];
    }
}
void mergeSort(int A[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergeSort(A, l, mid);
        mergeSort(A, mid + 1, h);
        merge(A, mid, l, h);
    }
}
void printArray(int *A,int n)
{
    for( int i = 0; i<n ; i++){
        printf("%d,",A[i]);
    }
    printf("\n");
}
int main()
{
    int A[] = {9, 5, 8, 2, 4, 8, 3, 4, 1};
    int n = 9;
    mergeSort(A , 0 , 9);
    printArray(A, n);
    return 0;
}