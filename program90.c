#include<stdio.h>
#include<stdlib.h>

int SearchFirstOccurance(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iValue = 0;
    int iRet = 0;

    printf("Enter number of element : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to search : \n");
    scanf("&d",&iValue);

    printf("Elements of  the arrey are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("&d\n",ptr[iCnt]);
    }

    iRet = SearchFirstOccurance(ptr, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such elements\n");
    }
   else
    {
        printf("%d ocured at index %d\n",iValue,iRet);
    }
   
    free(ptr);

    return 0;
}
