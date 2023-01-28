#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size,pos,i;

    printf("Please enter size of the array: ");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        printf("Please enter the elements of array: ");
        scanf("%d",&arr[i]);
    }

    printf("Please enter the position to delete: ");
    scanf("%d",&pos);

    if(pos>size || pos<=0)
    {
        printf("Invalid position!");
    }

    for (i=pos-1;i<size-1;++i)
    {
        arr[i]=arr[i+1];
    }
    size--;

    printf("Elements of array are: ");

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}