////////////////////////////////////////
//
// Function Name : CountCapital
// Description : write a program which accept string from user & return difference between
//               frequency of small characters & frequency of captial character
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
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'z'))
        {
            iCount++;
        }   
        str++;
    }
    return (iCnt - iCount);
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