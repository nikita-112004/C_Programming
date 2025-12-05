////////////////////////////////////////
//
// Function Name : CountWhite
// Description : write  a program which accept string from user & toggle the case
// Input : string
// Output : string
// Author : Nikita Shivaji Wadghule
// Date : 28/11/2025
//
////////////////////////////////////////

#include<stdio.h>
  
int CountWhite(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if(*str == ' ')        
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}