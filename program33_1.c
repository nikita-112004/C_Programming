////////////////////////////////////////
//
// Function Name : ChkAlpha
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

BOOL ChkAlpha(char ch)
{
    if(((ch >= 'a')&&(ch <= 'z')))
    {
        return TRUE;
    }
    else if ((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not a character");
    }
    return 0;
}