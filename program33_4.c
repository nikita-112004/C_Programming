////////////////////////////////////////
//
// Function Name : ChkSmall
// Description : Accept character from user check whether it is small case or not(a-z)
// Input : character
// Output : boolean
// Author : Nikita Shivaji Wadghule
// Date : 28/11/2025
//
////////////////////////////////////////
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small Case character");
    }
    else
    {
        printf("It is not a Small case character");
    }
    return 0;
}