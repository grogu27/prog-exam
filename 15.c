#include <stdio.h>

int slen(char *string) {
  int len = 0;
  for (int i = 0; string[i] != '\0'; i++) {
    len++;
  }
  return len;
}
void move(char *str) {
  int size = slen(str);
  for (int i = 0; i < size; i++) {
    str[i] = str[i + 1];
  }
}
int convert(char *str1) {
  str1[0] = str1[0] - 'a' + 'A';
  for (int i = 0; str1[i] != '\0'; i++) {
    if (str1[i] == '_') {
      move(&str1[i]);
      str1[i] = str1[i] - 'a' + 'A';
    }
  }
  return 0;
}

int main() {
  char str1[50] = "camel_case_fuck_off";
  convert(str1);
  printf("%s\n", str1);
  return 0;
}