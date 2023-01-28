#include <stdio.h>
#define MAX_SIZE 100

int main(){
    int arr[MAX_SIZE];
    int i,size,num,pos;

    printf("Please enter size of the array: ");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        printf("Please enter the elements of array: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d",&num);

    printf("Enter the element's position: ");
    scanf("%d",&pos);
    if (pos>size+1 || pos<=0)
    {
        printf("Invalid position! Please enter position between 1 to %d",size);
    }

    else
    {
        for (i=size;i>=pos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos-1]=num;
        size++;

        printf("Elements of array are: ");
        for(i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }

    }


    return 0;
}