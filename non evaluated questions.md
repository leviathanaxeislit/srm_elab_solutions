Q. 53: Reverse the order of words

    #include<stdio.h>
    #include<string.h>
    
    char words[100][100];
    
    int getWords(char *s) {
      int i = 0, j = 0, k = 0, length = strlen(s);
      while (s[i] != '\0') {
        if (s[i] == '.') {
          strncpy(words[j], s+k, i-k);
          j++;
          k = i + 1;
        }
        i++;
      }
      strncpy(words[j], s+k, length - k);
      return j + 1;
    }
           
    int main()
    {
      char s[2000];
      scanf("%s",s);
      char *temp=s;
      int n = getWords(temp), i = 0;
      for (i = n - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i != 0) {
          printf(".");
        }
      }
      return 0;
    }

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTM4ODk3OTQxM119
-->