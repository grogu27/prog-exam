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
int search(char *text, char *string)
{
    int len_text = slen(text);
    int len_string = slen(string);

    for (int i = 0; i < len_text - len_string; i++)
    {
        int flag = 1;
        for (int j = 0; j < len_string; j++)
        {
            if (text[i + j] != string[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        return i;
    }
    
    return 0;
}
int main()
{
    char text[] = "sadadaqwertyasa";
    char string[] = "qwerty";
    int index = search(text, string);
    printf("index: %d\n", search(text, string));
    return 0; 
}