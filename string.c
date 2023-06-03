#include <stdio.h>

int slen(char *string)
{
    int len = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

char *scpy(char *to, char *from) 
{
  for (size_t i = 0; i <= slen(from); i++) 
  {
    to[i] = from[i];
  }
  return to;
}

int main()
{

    return 0;
}