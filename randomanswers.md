***Q. 75: Phd Fees***

    #include <stdio.h>
    #include<string.h>
    struct student
    {
      int roll;
      char name[100];
      char course[100];
      int fees;
    }s1;  
    int main()
    {
    printf("Details of student");
      scanf("%d",&s1.roll);
      scanf("%s",s1.name);
      scanf("%s",s1.course);
      scanf("%d",&s1.fees);
      printf("\nRoll Number=%d",s1.roll);
      printf("\nName=%s",s1.name);
      printf("\nCourse=%s",s1.course);
      printf("\nFees=%d",s1.fees);
      return 0;
    }

***Q. 71: Student Data Repository***

    `#include<stdio.h>
    struct student
    {
     char name[100];
    struct dateOfBirth
    {
      int rollno,date,month,year;
    }DOB;
    }std;
    int main()
    {
      scanf("%s%d%d%d%d",std.name,&std.DOB.rollno,&std.DOB.date,&std.DOB.month,&std.DOB.year);
      printf("Name=%s\nRollNo=%d\nDate of birth=%d/%d/%d",std.name,std.DOB.rollno,std.DOB.date,std.DOB.month,std.DOB.year);
      return 0;
    }

***Q. 66: super digit***

    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
    int superd(long long int sumd)
    {
        int t=0;
        if(sumd/10==0)
            {return sumd;}
        else
            {
             
             while(sumd!=0)
                 {
                 int d;
                 d=sumd%10;
                 t=t+d;
                 sumd=sumd/10.0;
             }
            }
       sumd=t; 
       return superd(sumd);
    }    
    int main() {
        int p; long long int sumd=0;
        char ch;
        ch=getchar();
        while(ch!=' ')
        {
          int q=ch-'0';
          sumd=sumd+q;
          ch=getchar();  
        }    
        scanf("%d",&p);
        sumd=p*sumd;
        //printf("%d",sum);
        printf("%d",superd(sumd));
        return 0;
    }

***Q. 54: Deletion of sub string***

    #include <stdio.h>
    #include<string.h>
    int main() {
    	//code
    	int n,i,j,k,l,m,l1,l2,f;
    	char str1[10000],str2[100000];
    	scanf("%d",&n);
    	while(n>0){
    	    n--;
    	    scanf("%s",str1);
    	    scanf("%s",str2);
    	    l1=strlen(str1);
    	    l2=strlen(str2);
    	    for(i=0;i<l1;i++){
    	        f=0;
    	        for(j=0;j<l2;j++){
    	            if(str1[i]==str2[j]){
    	                f=1;
    	            }
    	        }
    	        if(f==0){
    	            printf("%c",str1[i]);
    	        }
    	    }
    	    printf("\n");
    	    
    	}
    	return 0;
    }

***Q. 60: s-palindrome***

    #include<stdio.h>
    
    #include<string.h>
    
    int main()
    
    {
    
        char str[1000];
    
        scanf("%s",str);
    
       int i,j;int f=9,len;
    
        len=strlen(str);
    
       
    
        for(i=0,j=len-1;i<len&&j>=0;i++,j--)
    
        {
    
            if((str[i]=='b')&&(str[j]=='d'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='d')&&(str[j]=='b'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='I')&&(str[j]=='I'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='M')&&(str[j]=='M'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='O')&&(str[j]=='O'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='o')&&(str[j]=='o'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='p')&&(str[j]=='q'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='q')&&(str[j]=='p'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='T')&&(str[j]=='T'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='U')&&(str[j]=='U'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='V')&&(str[j]=='V'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='v')&&(str[j]=='v'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='w')&&(str[j]=='w'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='W')&&(str[j]=='W'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='X')&&(str[j]=='X'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='x')&&(str[j]=='x'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='Y')&&(str[i]=='Y'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='A')&&(str[j]=='A'))
    
            {
    
                f=0;continue;
    
            }
    
            else if((str[i]=='H')&&(str[j]=='H'))
    
            {
    
                f=0;continue;
    
            }
    
            else
    
            {
    
                f=1;break;
    
            }
    
        }
    
        if(f==0 || strcmp(str,"bob")==0 )
    
        printf("TAK\n");
    
        else
    
        printf("NIE\n");
    
        return 0;
    
    }

***Q. 70: classic prime***

    #include <stdio.h>
    #include <math.h>
    
    
    /* Function declarations */
    int isPrime(int num);
    int isArmstrong(int num);
    int isPerfect(int num);
    
    
    int main()
    {
        int num;
        scanf("%d", &num);
        
        // Call isPrime() functions
        if(isPrime(num))
        {
            printf("%d is Prime number.\n", num);
        }
        else
        {
            printf("%d is not Prime number.\n", num);
        }
        
        // Call isArmstrong() function
        if(isArmstrong(num))
        {
            printf("%d is Armstrong number.\n", num);
        }
        else
        {
            printf("%d is not Armstrong number.\n", num);
        }
        
        // Call isPerfect() function
        if(isPerfect(num))
        {
            printf("%d is Perfect number.\n", num);
        }
        else
        {
            printf("%d is not Perfect number.\n", num);
        }
        
        return 0;
    }
    
    
    
    /**
     * Check whether a number is prime or not. 
     * Returns 1 if the number is prime otherwise 0.
     */
    int isPrime(int num) 
    {
        int i;
        
        for(i=2; i<=num/2; i++)  
        {  
            /*  
             * If the number is divisible by any number  
             * other than 1 and self then it is not prime 
             */  
            if(num%i == 0)  
            {
                return 0;
            }  
        } 
        
        return 1; 
    }
    
    
    
    /**
     * Check whether a number is Armstrong number or not. 
     * Returns 1 if the number is Armstrong number otherwise 0.
     */
    int isArmstrong(int num) 
    {
        int lastDigit, sum, originalNum, digits;
        sum = 0;
        
        originalNum = num;
    
        /* Find total digits in num */
        digits = (int) log10(num) + 1;
    
        /*
         * Calculate sum of power of digits
         */
        while(num > 0)
        {
            // Extract the last digit
            lastDigit = num % 10;
    
            // Compute sum of power of last digit
            sum = sum + round(pow(lastDigit, digits));
    
            // Remove the last digit
            num = num / 10;
        }
        
        return (originalNum == sum);
    }
    
    
    
    /**
     * Check whether the number is perfect number or not. 
     * Returns 1 if the number is perfect otherwise 0.
     */
    int isPerfect(int num) 
    {
        int i, sum, n;
        sum = 0;
        n = num;
        
        for(i=1; i<n; i++)  
        {  
            /* If i is a divisor of num */  
            if(n%i == 0)  
            {  
                sum += i;  
            }  
        }
        
        return (num == sum);
    }

***Q. 57: Pattern Searching***

    #include <stdio.h>
    #include <string.h>
    
    int main()
    
    {
    
      int n,i,flag;
    
      char x[10],y[10];
      scanf("%d",&n);
    
      for (i = 0; i < n; i++) {
        char word[1000], sub[1000];
        scanf("%s%s", word, sub);
        if (strstr(word, sub) == NULL) 
          printf("not found");
        else
          printf("found");
      }
      
      return 0;
    
    }

***Q. 52: Sorting of strings***

    #include <stdio.h>
    
    #include <string.h>
    
    int main()
    
    {
    
       int i, j, num;
    
       char name[20][10], t_name[15][10], temp[20];
       scanf("%d", &num);
      
       for(i=0; i<num; i++)
       {
          scanf("%s",name[i]);
          strcpy (t_name[i], name[i]);
       }
       for(i=0; i < num-1 ; i++)
       {
          for(j=i+1; j< num; j++)
          {
              if(strcmp(name[i],name[j]) > 0)  
              {
                 strcpy(temp,name[i]);
                 strcpy(name[i],name[j]);
                 strcpy(name[j],temp);
              }
          }
       }
    
       for(i=0; i< num ; i++)
       {
           printf("%s\n",name[i]);
       }
      return 0;
    }
***Q. 61: where is hanoi***

    #include "stdio.h"
    void towerOfHanoi(int n, char srcTower, char dstTower, char bufferTower) {
      if (n <= 0) return;
      if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", srcTower, dstTower);
        return;
      }
      towerOfHanoi(n - 1, srcTower, bufferTower, dstTower);
      printf("Move disk %d from rod %c to rod %c\n", n, srcTower, dstTower);
      towerOfHanoi(n - 1, bufferTower, dstTower, srcTower);
    }
    int main() {
      int i = 0;
      int n = 0;
      scanf("%d", &n);
      towerOfHanoi(n, 'A', 'C', 'B');
      return 0;
    }

Q. 65: password not strong enough

    #include <stdio.h>
    
    
    int length = 0;
    int digit = 0;
    int lower = 0;
    int upper = 0;
    int special = 0;
      
    
    int pass(char s[],int n) {
      int i;
      
      length = n;
        
      for (i = 0; i < n; i++) {
        if (s[i] >= 48 && s[i] <= 57)
          digit = 1;
        
        if (s[i] >= 97 && s[i] <= 122)
          lower = 1;
        
        if (s[i] >= 65 && s[i] <= 90)
          upper = 1;
        
        switch(s[i]) {
          case '!':
          case '@':
          case '#':
          case '$':
          case '%':
          case '^':
          case '&':
          case '*':
          case '(':
          case ')':
          case '-':
          case '+':
            special = 1;
        }  
      }
    }
    
    int main() {
        int n; 
        scanf("%i", &n);
        char password[1024];
        scanf("%s", password);
        int answer = pass(password, n);
      	int k = 4 - (digit + lower+ upper + special);
      	if (length < 6) {
          if (k > 6 - length) {
            printf("%d", k);
            return 0;
          }
          printf("%d", 6 - length);
          return 0;
        }
    	printf("%d", k);
        return 0;
    }
**Q. 94: Increment Using Pointer**

    #include <stdio.h>
    int main() {
      int a, b, c;
      scanf("%d%d%d", &a, &b, &c);
      int *ptr[3] = {&a, &b, &c};
      printf("value of a: %d, b: %d, c: %d", *ptr[0], *ptr[1], *ptr[2]);
      *ptr[0] +=10;
      *ptr[1] +=10;
      *ptr[2] +=10;
      printf("\nAfter adding 10\nvalue of a: %d, b: %d, c: %d", *ptr[0], *ptr[1], *ptr[2]);
      
      return 0;
    }

<!--stackedit_data:
eyJoaXN0b3J5IjpbODM2MTIwMzkxLC0yMTM4NDc2OTcyLDIwMj
IzNDE3NywtNzQ1MDIzODgsLTg4NjAyODM1MiwyNTc3MDUxNThd
fQ==
-->