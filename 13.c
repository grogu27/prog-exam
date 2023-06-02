#include <stdio.h>
#include <string.h>
char *scpy(char *to, char *from) 
{
  for (size_t i = 0; from[i] != '\n'; i++) 
  {
    to[i] = from[i];
  }
  int len = strlen
  return to;
}

int main()
{
    char str[] = "qwerty";
    char str2[10];
    scpy(str2, str);
    for (int i = 0; i < strlen(str2); i++)
    {
        printf("%c ", str2[i]);
    }
    printf("\n%d\n", strlen(str2));
    return 0;
}