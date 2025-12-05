////////////////////////////////////////
//
// Function Name : ChkCapital
// Description : Accept character from user aaaaaaaaaaa7 check whether it is alphabet or not (A-Z a-z)
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

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not a capital character");
    }
    return 0;
}