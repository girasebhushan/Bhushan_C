//Display "Jay Ganesh"5 times on screen

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
      printf("Jay Ganesh...\n");  //4
   }

    return 0;
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency of Jay Ganesh statement : \n");
    scanf("%d",&iValue);

    Display(iValue);
  
    return 0; 
}