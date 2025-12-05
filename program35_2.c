////////////////////////////////////////
//
// Function Name : CountCapital
// Description : write a program which accept string from user & count number of small characters.
// Input : character
// Output : integer
// Author : Nikita Shivaji Wadghule
// Date : 28/11/2025
//
////////////////////////////////////////

#include<stdio.h>
  
int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the character : ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}