////////////////////////////////////////
//
// Function Name : DisplayDigit
// Description : write  a program which accept string from user & toggle the case
// Input : string
// Output : string
// Author : Nikita Shivaji Wadghule
// Date : 28/11/2025
//
////////////////////////////////////////

#include<stdio.h>
  
void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z')&&(*str >= 'A')&&(*str <= 'Z'))        
        {
            printf(" ",*str);
        }
        else if((*str >= '0')&&(*str <= '9'))        
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}