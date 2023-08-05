// Write a program which checks wheather number is even or odd.

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////
//
// Function name : CheckEvenOdd
// Input :          Integer
// Output :         Boolean
// Description :    Checks wheather input is even or odd
// Author :         Bhushan Jagatsing Girase
// Date :           25/04/2023
// Update Date :    26/04/2023
//
////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    
    if((iNo % 2) == 0)
    {
       return true;
    }
    else
    {
       return false;
    }
}



/////////////////////////////////////////////////////////////
// Entry Point function
////////////////////////////////////////////////////////////

int main()
    {
        int iValue = 0;         // Variable to accept input
        bool bRet = false;      //Variable to accept return value

        printf("Please enter number to check wheather it is even or odd : \n");
        scanf("%d",&iValue);

        bRet = CheckEvenOdd(iValue);    //Function call

        if(bRet == true)
        {
            printf("%d is Even number\n",iValue);
        }
        else{
            printf("%d is Odd number\n",iValue);
        }
        return 0;

    }

