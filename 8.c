#include <stdio.h>
#include <stdlib.h>

int stok(char *str, char symbol, char **result) {
  int count = 0;
  result[count++] = str;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == symbol) {
      str[i] = '\0';
      result[count++] = &str[i + 1];
    }
  }
  return count;
}

int santok(char *str, char symbol, int count) {
  for (int i = 0; count - 1 > 0; i++) {
    if (str[i] == '\0') {
      str[i] = symbol;
      count -= 1;
    }
  }
  return 0;
}

int main() {
  char str[50] = "apple,banana,orange";
  char symbol = ',';
  char *result[50];
  int count = stok(str, symbol, result);
  printf("broken: <%s>\n", str);
  for (int i = 0; i < count; i++) {
    printf("%d. %s\n", i, result[i]);
  }
  santok(str, symbol, count);
  printf("restoren: <%s>\n", str);
}