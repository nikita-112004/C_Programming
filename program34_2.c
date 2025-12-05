////////////////////////////////////////
//
// Function Name : 
// Description : Accept character from user. If character is small displades corresponding capital character and
//               if it is small than displayeds corresponding capital in other cases display as it is
// Input :
// Output : boolean
// Author : Nikita Shivaji Wadghule
// Date : 28/11/2025
//
////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <='z')
    {
        printf("%c",ch-32);         //lower
    }
    else if(ch >= 'A' && ch <='Z')
    {
        printf("%c",ch+32);         //upper
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