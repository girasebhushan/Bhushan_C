#include<stdio.h>

int CountCharX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str =='z')
        {
          iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCharX(Arr);

    printf("Number of z are : %d\n",iRet);

    return 0;
}