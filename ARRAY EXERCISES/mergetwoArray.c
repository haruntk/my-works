#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE],arr2[MAX_SIZE],mergeArr[MAX_SIZE*2];
    int size1,size2,mergesize;
    int index1,index2,mergeindex;
    int i;

    printf("Please enter size of first array: ");
    scanf("%d",&size1);

    for(i=0;i<size1;i++)
    {
        printf("Please enter elements of first array: ");
        scanf("%d", &arr[i]);
    }
    printf("Please enter size of second array: ");
    scanf("%d",&size2);

    for(i=0;i<size2;i++)
    {
        printf("Please enter elements of second array: ");
        scanf("%d", &arr2[i]);
    }
    mergesize=size1+size2;
    index1=0;
    index2=0;
    for(mergeindex=0;mergeindex<mergesize;mergeindex++)
    {
        if(index1>=size1 || index2>=size2)
        {
            break;
        }
        if (arr[index1]<arr2[index2])
        {
            mergeArr[mergeindex] = arr[index1];
            index1++;
        }
        else
        {
            mergeArr[mergeindex] = arr2[index2];
            index2++;
        }
    }

    while (index1<size1)
    {
        mergeArr[mergeindex]=arr[index1];
        mergeindex++;
        index1++;
    }
    while (index2<size2)
    {
        mergeArr[mergeindex]=arr2[index2];
        mergeindex++;
        index2++;
    }

    printf("\nMerged array: ");
    for (i=0;i<mergesize;i++)
    {
        printf("%d ",mergeArr[i]);
    }

    return 0;
}