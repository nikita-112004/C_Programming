////////////////////////////////////////
//
// Function Name : 
// Description : Accept character from user if it is capital then display all the characters from the input characters till z. If input 
//               character is small then print all the characters in reverse order till a in other cases return direct
// Input :
// Output : boolean
// Author : Nikita Shivaji Wadghule
// Date : 28/11/2025
//
////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    char iCnt = '\0';

    if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c", iCnt);
        }
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c", iCnt);
        }
    }
    else
    {
        printf(" ");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}