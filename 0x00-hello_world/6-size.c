#include<stdio.h>
/**
 *sizeof - prints size of types
 *
 *Description: ouputs the types on the computer it is compiled and run on
 */
int main()
{
  char charType;
  int intType;
  double doubleType;
  float floatType;
    
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
  return '0';
}
