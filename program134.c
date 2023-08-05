#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1, ch = 'a'; i<= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
          if(i == j)
           {
            printf("*\t");
           }
           else if(i < j)
           {
            printf("@\t");
           }
           else
           {
             printf("$\t");
           }
        }
        printf("\n");
        printf("\n");
    }
   
}

int main()
{
   int iValue1 = 0, iValue2 =0;

   printf("Enter number of rows : \n");
   scanf("%d",&iValue1);

   printf("Enter number of column : \n");
   scanf("%d",&iValue2);

   Display(iValue1, iValue2);



   return 0;
}