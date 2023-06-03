#include <stdio.h>

int main() {
  char symbols[] = "leon";
  char str[] = "pgggg gleonnneado dicaprio";
  char result[sizeof(str)];

for(int i = 0; i < sizeof(str); i++){
    int uncorrect = 0;
    for(int j = 0; j < sizeof(symbols); j++){
        if(str[i] == symbols[j])
            uncorrect = 1;
    }
    if(uncorrect){
        result[i] = '\0';
        break;
    }
    else{
        result[i] = str[i];
    }
  }
  printf("%s\n",result);
  return 0;
}