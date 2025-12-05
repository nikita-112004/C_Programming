////////////////////////////////////////
//
// Function Name : struprx
// Description : write  a program which accept string from user &convert it into uper case
// Input : string
// Output : string
// Author : Nikita Shivaji Wadghule
// Date : 28/11/2025
//
////////////////////////////////////////

#include<stdio.h>
  
int struprx(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))        
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is %s",arr);

    return 0;
}