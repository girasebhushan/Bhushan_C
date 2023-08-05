#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[], int iLength,int iNo)
{

}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iValue = 0;
    bool bRet = false;

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

    bRet = Search(ptr, iSize, iValue);
    if(bRet == true)
    {
        printf("%d is present in the arrey\n",iValue);
    }
    if(bRet == false)
    {
        printf("%d is not present in the arrey\n",iValue);
    }
   
    free(ptr);

    return 0;
}
