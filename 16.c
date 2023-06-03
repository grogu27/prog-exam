#include <stdio.h>

int counter(char *str) {
  int count = 0;
  while (*str != '\0') {
    if ((*str - '0') % 2 == 0)
      count++;
    str++;
  }
  return count;
}

int main() {
  char str1[50] = "121212";
  printf("%d\n", counter(str1));
  return 0;
}