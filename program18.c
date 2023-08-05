#include<stdio.h>

void Display()
 {
    int iCnt = 0;
    int iNo = 0; 
    
    if(iNo < 0)

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
     printf("%d\n",iCnt);
   }
    
 } 

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);
  
    return 0; 
   
}