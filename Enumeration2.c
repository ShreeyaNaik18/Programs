#include<stdio.h>

enum Days {Monday = 2, Tuesday = 6, Wednesday, Thursday, Friday, Saturday, Sunday};
//size of enumeration is always 4 byte
int main()
{

 enum Days obj;

 printf("Size of enum : %d\n",sizeof(obj));
 printf("Monday : %d\n ",Monday);
 printf("Tuesday : %d\n ",Tuesday);
 printf("Wednesday : %d\n ",Wednesday);
 printf("Thursday : %d\n ",Thursday);

 return 0;

}