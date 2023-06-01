#include <stdio.h>

int main() {
  char what[] = "Warden";
  char new[] = "Ganger";
  char str[50] = "Arc Warden";
  char tmp[50];
  int correct = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == what[correct]) {
      correct += 1;
    } else
      correct = 0;

    if (correct + 1 == sizeof(what)) {
      for (int t = i + 1, id = 0; str[t] != '\0'; t++, id++) {
        tmp[id] = str[t];
      }
      i -= sizeof(what) - 2;
      for (int t = 0; new[t] != '\0'; t++, i++) {
        str[i] = new[t];
      }
      for (int t = 0; tmp[t] != '\0'; t++, i++) {
        str[i] = tmp[t];
      }
      break;
    }
  }
  printf("%s\n", str);
  return 0;
}