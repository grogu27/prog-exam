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
  while (size >= 0) {
    str[size + 1] = str[size];
    size -= 1;
  }
}

int convert(char *str1) {
  int counter = 0;
  for (int i = 0; str1[i] != '\0'; i++) {
    if (str1[i] >= 'A' && str1[i] <= 'Z') {
      str1[i] = str1[i] - 'A' + 'a';
      if (counter > 0) {
        move(&str1[i]);
        str1[i] = '_';
      }
      counter += 1;
    }
  }
  return 0;
}

int main() {
  char str1[50] = "CamelCaseFuckOff";
  convert(str1);
  printf("%s\n", str1);
  return 0;
}