#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse (char* str) {
    int len = strlen (str);
    if (len < 1) return 0;
    int tmp = *(str);
    *str = *(str + (len-1) * sizeof(char));
    *(str + (len-1) * sizeof(char)) = '\0';
    reverse (str + 1 * sizeof(char));
    *(str + (len-1) * sizeof(char)) = tmp;
    return str;
}   

int main () {
  char s[] = "apple";
  reverse (reverse(reverse(s)));
  printf ("%s\n", s);
  return 0;
}
