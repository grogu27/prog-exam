#include <stdio.h>

int scmp(char *str1, char *str2) {
  for (int i = 0; str1[i] != '\0'; i++) {
    if (str1[i] < str2[i])
      return -1;
    if (str1[i] > str2[i])
      return 1;
  }

  return 0;
}

int main() {
  char str1[50] = "Aar";
  char str2[50] = "Warden";
  printf("%d\n", scmp(str1, str2));
  return 0;
}