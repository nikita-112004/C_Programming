////////////////////////////////////////
//
// Function Name : strtogglex
// Description : write  a program which accept string from user & toggle the case
// Input : string
// Output : string
// Author : Nikita Shivaji Wadghule
// Date : 28/11/2025
//
////////////////////////////////////////

#include<stdio.h>
  
int strtogglex(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))        
        {
            *str = *str - 32;
        }
        else if((*str >= 'A')&&(*str <= 'Z'))        
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Modified string is %s",arr);

    return 0;
}