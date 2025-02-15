#include<stdio.h>
#include<conio.h>

void PrintArray(int a[],int size){
    for(int i=0; i<size; i++){
        printf("%d",a[i]);
    }
}

void InsertionSort(int a[],int size){
    int i,curr,prev;
    for(i=1; i<size; i++){ 
        curr = a[i];
        prev = i - 1;

        while (prev >= 0 && a[prev] > curr){
            a[prev + 1] = a[prev];
            prev --;
        }
        a[prev + 1] = curr;
    }
}
int main()
{
    int size = 5;
    int a[] = {4,1,5,2,3};

    printf("elements before sorting\n");
    PrintArray(a,size);

    InsertionSort(a,size);

    printf("\nelements after sorting\n");
    PrintArray(a,size);

    return 0;
}