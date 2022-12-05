//Accept one number from user and check weather the number is even or odd
#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
  if((iNo % 2 ) == 0)        // % mod gives reminder  // ==  Equality
  {
    return true;
  }
 else
  {
    return false;
  }
}
int main()
{
  int iValue = 0;
  bool bReturn = false;  //false = 0 in binary , true = 1  for default initializing value

  printf("Enter one number : \n");
  scanf("%d",&iValue);

   bReturn = CheckEven(iValue);

   if( bReturn == true)
   {
      printf("It is an Even Number.");
   }
   else
   {
      printf("It is an Odd Number.");
   }

  return 0;
}