#include <stdio.h>

int get_num(const char *str) {
  int num = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (num != 0) {
      num *= 10;
    }
    num += str[i] - '0';
  }
  return num;
}

int main() {
  int num = get_num("1337");
  printf("%d\n", num);
  return 0;
}