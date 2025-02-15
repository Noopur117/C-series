#include<stdio.h>
#include<conio.h>

void PrintArray(int a[],int size){
    for(int i=0; i<size; i++){
        printf("%d",a[i]);
    }
}

void SelectionSort(int a[],int size)
{
    int i,j,minIndex,tmp;
    for(i=0; i<size-1; i++){
        minIndex = i;
        for(j=i+1; j<size; j++){
            if(a[j]< a[minIndex]){
                minIndex = j;
            }
        }

        //swap
        tmp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = tmp;
    }
}


int main()
{
    int size = 5;
    int a[] = {4,1,5,2,3};

    printf("elements before sorting\n");
    PrintArray(a,size);

    SelectionSort(a,size);

    printf("\nelements after sorting\n");
    PrintArray(a,size);

    return 0;
}