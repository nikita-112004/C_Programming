////////////////////////////////////////
//
// Function Name : ChkCapital
// Description : write a program which accepts string from user & display it in reverse order
// Input : character
// Output : character
// Author : Nikita Shivaji Wadghule
// Date : 28/11/2025
//
////////////////////////////////////////

#include<stdio.h>
  
void Reverse(char *str)
{
    char *temp = str;

    while(*str != '\0')
    {
        str++;
    }

    while(str >= temp)
    {
        printf("%c",*str);
        str--;
    }
    printf("\n");
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}