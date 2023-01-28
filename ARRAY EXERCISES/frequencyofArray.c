#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int j,i,size,count=1;

    printf("Please enter size of the array: ");
    scanf("%d",&size);

    int freq[size];

    for(i=0;i<size;i++)
    {
        printf("Please enter the elements of array: ");
        scanf("%d",&arr[i]);
    }
    for (i=0;i<size;i++)
    {
        count=1;
        for (j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i]=count;
        }
    }

    printf("\nFrequency of all elements of array: \n");
    for(i=0;i<size;i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n",arr[i],freq[i]);
        }
    }
    
    return 0;
}