#include<stdio.h>
#include<stdlib.h>
void ManimumMaximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {

        if(Arr[iCnt] > iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
     printf("largest element is : %d\n",iMax);
     printf("smallest element is : %d\n",iMin);


}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    

    printf("Enter number of element : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements of  the arrey are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("&d\n",ptr[iCnt]);
    }

    MinimumMaximum(ptr, iSize);
   
    free(ptr);

    return 0;
}