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
***Q. 54: Deletion of sub string***

    #include <stdio.h>
    #include<string.h>
    int main() {
    	//code
    	int n,i;
    	scanf("%d",&n);
      	for (i = 0; i < n; i++) {
          char str[1000];
          int lower, upper, j, stop = 0;
          scanf("%s", str);
          scanf("%d%d", &lower, &upper);
          
          if(lower < 0) {
            printf("lower limit doesn't exist");
            break;
          }
            
          if (upper >= strlen(str)) {
            printf("upper limit doesn't exist");
            break;
          }
          
          for (j = 0; j < strlen(str); j++) {
            if (j == lower)
              stop = 1;
            if (j > upper)
              stop = 0;
            if (stop == 0) {
              if (j != 0 ) {
                printf("%c", tolower(str[j]));
                continue;
              }
              printf("%c", str[j]);
            }
          }
          printf("\n");
        }
    	return 0;
    }

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTUwOTEzNTcxOCwtMzg4OTc5NDEzXX0=
-->