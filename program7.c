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

bool CheckDivisible(int iNo)
{
    
    if(((iNo % 3) == 0) && ((iNo % 5) ==0))
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

        printf("Please enter number to check wheather it is divisible by 3 And 5 : \n");
        scanf("%d",&iValue);

        bRet = CheckDivisible(iValue);    //Function call

        if(bRet == true)
        {
            printf("%d is completely divisible by 3 and 5\n",iValue);
        }
        else
        {
            printf("%d is not completely divisible by 3 and 5\n",iValue);
        }
        return 0;

    }

