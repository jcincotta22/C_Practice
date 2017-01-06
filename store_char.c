#include <stdio.h>

int main()
{
  char chr;
  printf("Enter a Character: ");
  scanf("%c",&chr );
  printf("You entered %c\n",chr );
  // When %d text format is used, integer is displayed in case of character types
  printf("ASCII value of %c is %d.", chr, chr);
  return 0;
}
