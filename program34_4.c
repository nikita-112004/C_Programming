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

BOOL ChkSpecial(char ch)
{
    if(ch == '!') 
    {
        return TRUE;
    }
    else if(ch == '@') 
    {
        return TRUE;
    }
    else if(ch == '#') 
    {
        return TRUE;
    }
    else if(ch == '$') 
    {
        return TRUE;
    }
    else if(ch == '%') 
    {
        return TRUE;
    }
    else if(ch == '^') 
    {
        return TRUE;
    }
    else if(ch == '&') 
    {
        return TRUE;
    }
    else if(ch == '*') 
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special character");
    }
    else
    {
        printf("It is not a special character");
    }
    return 0;
}