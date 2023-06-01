#include <stdio.h>

int get_num(char *str, char **end) {
  if (!str)
    return 0;
  int num = 0;
  *end = str;
  while (*str >= '0' && *str <= '9') {
    if (num != 0)
      num *= 10;
    num += *str - '0';
    str += 1;
    *end = str;
  }
  return num;
}

int check(char *str) {
  int dots = 0;
  int nums = 0;
  char *end = NULL;
  while (*str != '\0') {
    int num = get_num(str, &end);
    nums++;
    if (num > 255 || num < 0)
      return 1;

    str = end;

    if (*str == '\0') {
      if (dots == 3 && nums == 4)
        break;
      else
        return 1;
    }

    if (*str == '.') {
      dots++;
      if (dots > 3) {
        return 1;
      }
    } else
      return 1;

    str += 1;
  }
  return 0;
}

int main(int argc, char **argv) {
  for (int i = 1; i < argc; i++) {
    if (check(argv[i])) {
      printf("Error %s\n", argv[i]);
      return 1;
    }
  }
  return 0;
}