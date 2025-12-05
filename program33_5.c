////////////////////////////////////////
//
// Function Name : DisplaySchedule
// Description : Accept character from user aaaaaaaaaaa7 check whether it is alphabet or not (A-Z a-z)
// Input : character
// Output : boolean
// Author : Nikita Shivaji Wadghule
// Date : 28/11/2025
//
////////////////////////////////////////
#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your Exam at 7 Am");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your Exam at 8.30 Am");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your Exam at 9.20 Am");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your Exam at 10.30 Am");
    }
    else
    {
        printf("Enter correct Division");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}