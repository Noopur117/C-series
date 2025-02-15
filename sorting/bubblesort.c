#include<stdio.h>
#include<conio.h>

//Function to print the array

void PrintArray(int a[],const int size)
{
    int i;
    for(i=0;i<size; i++)
     {
        printf("%d",a[i]);
     }
        printf("\n");
}

//Function for Bubble Sort Logic
void BubbleSort(int a[],const int size)
{
    int i,j,tmp;
    for(i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
            if(a[j] > a[j+1]) //ascending order

            //if(a[j] < a[j+1])   //decending order
            {

                //swap 
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main()
{
    int size = 5;

    int a[] = {4,1,5,2,3};

    printf("before sorting");
    PrintArray(a,size);

    BubbleSort(a,size);
    
    printf("after sorting");
    PrintArray(a,size);


    return 0;
}
