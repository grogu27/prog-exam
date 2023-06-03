#include <stdio.h>
#include <stdlib.h>

int slen(const char *str) {
  int i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return i;
}

int replace(char *str, int start, int end, const char *new) {
  int str_size = slen(str);
  int tmp_size = slen(&str[end + 1]);
  int new_size = slen(new);

  char *tmp = (char *)malloc(tmp_size);

  for (int i = 0; i < tmp_size; i++) {
    tmp[i] = str[end + 1 + i];
  }
  for (int i = 0; i < new_size; i++) {
    str[start + i] = new[i];
  }
  for (int i = 0; i < tmp_size; i++) {
    str[start + new_size + i] = tmp[i];
  }
  str[start + new_size + tmp_size] = '\0';

  free(tmp);
}

int main() {
  char str[50] = "Arc Warden";
  replace(str, 1, 4, "rc <TOP> w");
  printf("%s\n", str);
  return 0;
}