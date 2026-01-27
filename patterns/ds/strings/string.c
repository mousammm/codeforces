#include <string.h>
#include <stdbool.h>

void to_lowercase(char *s) {
    int i=0;
    while (s[i] != '\0') {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        i++;
    }
}

void to_upppercase(char *s) {
    int i=0;
    while (s[i] != '\0') {
        if(s[i] >= 'a' && s[i] <= 'a') s[i] -= 32;
        i++;
    }
}

void reverse_string(char *str) {
  if (str == NULL) return;
  
  char *start = str;
  char *end = str + strlen(str) - 1;
  char temp;

  while (start < end) {
     temp = *start;
     *start = *end;
     *end = temp;

     start++;
     end--;
  }
}

void remove_dup(char *s) {
    bool seen[256] = {false};
    int j=0;
 
    for (int i=0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];
        if(!seen[ch]) {
            seen[ch] = true;
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}
