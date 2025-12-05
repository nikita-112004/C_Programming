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
#include<stdbool.h>
  
bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return true;
        }
        str++;
    }    
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    
    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}