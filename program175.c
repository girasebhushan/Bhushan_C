#include<stdio.h>

Frequency(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if((*str >= 'A')&&(*str <= 'Z'))
        {
            iCapCnt++;
        }
    }
    printf("Small case character count : %d\n",iSmallCnt);
    printf("Capital case character count : %d\n",iCapCnt);
}    

int main()
{

    char Arr[20];
   
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Frequency (Arr);
   
    return 0;
}