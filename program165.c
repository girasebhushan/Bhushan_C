#include<stdio.h>

int CountVowelslX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E')|| (*str == 'I')|| (*str == 'O')|| (*str == 'U')|| (*str == 'a')|| (*str == 'e')||(*str == 'i')|| (*str == 'o')|| (*str =='u'))
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

    iRet = CountVowelsX(Arr);

    printf("Number of Vowels are : %d\n",iRet);

    return 0;
}