#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse (char* str) {
    //*** Method 1: 0.005 ~ 0.013 sec ***//
    unsigned int len = strlen (str);
    //*** Method 2: 0.013 sec ***//
    //unsigned int len;
    //for (len = 0; *(str + len) != '\0'; ++len);
    if (len > 0) {              
        int tmp = *(str);       
        *str = *(str + (len-1) * sizeof(char));
        *(str + (len-1) * sizeof(char)) = '\0';
        reverse (str + 1 * sizeof(char));
        *(str + (len-1) * sizeof(char)) = tmp;
    }                           
    return str;
}   

int main () {
  char s[] = "apple";
  reverse (reverse(reverse(s)));
  printf ("%s\n", s);
  return 0;
}
