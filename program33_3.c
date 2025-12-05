////////////////////////////////////////
//
// Function Name : ChkDigit
// Description : Accept character from user check whether it is digit or not
// Input : anything
// Output : boolean
// Author : Nikita Shivaji Wadghule
// Date : 28/11/2025
//
////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }
    return 0;
}