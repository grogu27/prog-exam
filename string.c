#include <stdio.h>

size_t my_strlen(char *string)
{
    int len = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

char *my_strcpy(char *to, char *from) 
{
  for (size_t i = 0; i < my_strlen(from); i++) 
  {
    to[i] = from[i];
  }
  to[my_strlen(from)] = '\0';

  return to;
}

int is_lower_char(char a)
{
  if (a >= 'a' && a <= 'z')
    return 1;
  return 0;
}

char to_lower_char(char a)
{
  if (a >= 'a' && a <= 'z')
    return a;
  else
    return a - 'A' + 'a';
}

char to_upper_char(char a)
{
  if (a >= 'A' && a <= 'Z')
    return a;
  else
    return a - 'a' + 'A';
}

int my_strcmp(char *str, char *str2)
{
  int i = 0;
  while (str[i] != '\0' || str2[i] != '\0')
  {
    if (str[i] > str2[i])
      return 1;
    if (str[i] < str2[i])
      return -1;
    i++;
  }
  return 0;
}

int my_strcmp2(const char *s1, const char *s2) {
    while (*s1 && *s2 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (*s1 > *s2) - (*s1 < *s2);
}

char *my_strchr(char *str, char ch)
{
  while (*str != '\0')
  {
    if (*str == ch)
      return str;
    str++;
  }
  return NULL;
}

char *my_strcat(char *str, char *str2)
{
  int len1 = my_strlen(str);
  int len2 = my_strlen(str2);
  for (int i = 0; i < len2; i++)
    str[i + len1] = str2[i];
  str[len1 + len2] = '\0';
  return str;
}

int my_strtok(char *str, char symbol, char *result[]) {
  int count = 1;
  result[0] = str;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == symbol) {
      str[i] = '\0';
      count++;
      result[count-1] = &str[i+1];
    }
  }
  return count;
}

int my_suntok(char *str, char symbol, int count) {
  for (int i = 0; count - 1 > 0; i++) {
    if (str[i] == '\0') {
      str[i] = symbol;
      count -= 1;
    }
  }
  return 0;
}

char *my_strstr(char *str, char *substr)
{
  int len1 = my_strlen(str);
  int len2 = my_strlen(substr);
  for (int i = 0; i <= len1 - len2; ++i) 
  {
    int j = 0;
    while (j < len2 && str[i + j] == substr[j])
         ++j;
    if (j == len2)
      return &str[i];
  }
    
    return NULL;
}

int is_symbol(char s1, const char *accept) {
  while (*accept != '\0') {
    if (s1 == *accept)
      return 1;
    accept++;
  }
  return 0;
}

size_t my_strspn(char *s, const char *accept) {
  size_t size = 0;
  size_t counter = 0;
  while (*s != '\0') {
    if (is_symbol(*s, accept))
      counter++;
    else
      counter = 0;
    size = size > counter ? size : counter;
    s++;
  }
  return size;
}

int main()
{
  // char *result[16];
  // char str[] = "123.228.2.10"; 
  // int k = my_strtok(str, '.', result);
  // printf("%d\n", k);
  // for (int i = 0; i < k; i++)
  //   printf("%s\n", result[i]);
  // my_suntok(str, '.', k);
  // printf("\n%s\n", str);
  char a[] = "qwerty";
  char b[] = "wer";
  for (int i = 0; i < my_strlen(a); i++)
    printf("%p ", &a[i]);
  printf("\n");
  char *res = my_strstr(a, b);
  printf("%p\n", res);
  return 0;
}