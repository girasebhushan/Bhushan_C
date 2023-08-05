#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iLength)
{
    int iSum = 0;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
    
        iSum = iSum + Arr[iCnt];
    }
    return iSum;  
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Addition(ptr,iSize);

    free(ptr);

    return 0;
}