//Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not.
#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cVowel)
{
    if(cVowel == 'a'||cVowel == 'e'||cVowel == 'i'||cVowel == 'o'||cVowel == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
  char cValue ='\0';
  BOOL bRet = FALSE;

  printf("Enter Character\n");
  scanf("%c",&cValue);

  bRet = ChkVowel(cValue);

  if (bRet == 1)
  {
    printf("It is Vowel");
  }
  else
  {
    printf("It is not Vowel");
  }
   return 0;
}
