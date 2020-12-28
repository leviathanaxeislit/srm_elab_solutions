
   **Q. 11: Mirror Problem**
   

    #include <stdio.h>
    int main()
    {
        int num,tNum,cnt;
        scanf("%d",&num);
        cnt=0;
        tNum=num;
        while(tNum>0){
            cnt++;
            tNum/=10;
        }
        printf("%d",cnt);
        return 0;
    }

**Q. 12: Series of Series**

    #include <stdio.h>
    int main() {
        int i, n, t1 = 0, t2 = 1, nextTerm;
        scanf("%d", &n);
        for (i = 1; i <= n; ++i) {
            printf("%d ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        return 0;
    }
**Q. 15: State Election**

    #include <stdio.h>
    int main() 
    {
    	
      int a;
      scanf("%d", &a);
      if(a >=18 && a <=60 )
        {
        printf("Eligible");
       } 
      else
        {
        printf("Not Eligible");
       } 
    	return 0;
    }
**Q. 16: Power of 2**

    #include<stdio.h>
    #include<math.h>
    int main() {
    
        int num;   
          scanf("%d", &num);
        if(num && ((num & (num-1)) == 0)){
    
            printf("WOW");
    
        } else {
    
            printf("OOPS");
    
        }
        return 0;
    
    }

**Q. 19: Grading System**

    #include <stdio.h>
    int main() {
    	int t;
      scanf("%d",&t);
      while (t--)
      {
        int a,b;
        float c;
        scanf("%d %f %d",&a,&c,&b);
        if (a>50&& c<0.7 && b>5600)
          printf("10\n");
        else if (a>50&& c<0.7)
          printf("9\n");
       else  if (c<0.7 && b>5600)
          printf("8\n");
       else  if (a>50 && b>5600)
          printf("7\n");
        else if (a>50|| c<0.7 || b>5600)
          printf("6\n");
        else 
          printf("5\n");
      }
    	return 0;
    }
**Q. 20: Star Formation**

    #include <stdio.h>
    int main() {
       int i, j, rows;
       scanf("%d", &rows);
       for (i = 1; i <= rows; ++i) {
          for (j = 1; j <= i; ++j) {
             printf("*");
          }
          printf("\n");
       }
       return 0;
    }
**Q. 23: Ram and the Week**

    #include <stdio.h>
    
    int main()
    {
        int week;
        
        /* Input week number from user */
        scanf("%d", &week);
        
        switch(week)
        {
            case 1: 
                printf("Monday");
                break;
            case 2: 
                printf("Tuesday");
                break;
            case 3: 
                printf("Wednesday");
                break;
            case 4: 
                printf("Thursday");
                break;
            case 5: 
                printf("Friday");
                break;
            case 6: 
                printf("Saturday");
                break;
            case 7: 
                printf("Sunday");
                break;
            default: 
                printf("Invalid input! Please enter week number between 1-7.");
        }
    
        return 0;
    }
**Q. 24: Sivaji and the Calendar**

    #include <stdio.h>
    int main()
    {
        int y;
        scanf("%d",&y);
    
        if(y % 4 == 0)
        {
        	//Nested if else
            if( y % 100 == 0)
            {
                if ( y % 400 == 0)
                    printf("LEAP YEAR");
                else
                    printf("NOT LEAP YEAR");
            }
            else
                printf("LEAP YEAR");
        }
        else
            printf("NOT LEAP YEAR");
    
        return 0;
    }
**Q. 25: Modi and the Cash**
 

    #include <stdio.h>
    
    int main()
    {
        int amount;
        int note500, note100, note50, note20, note10, note5, note2, note1;
        
        /* Initialize all notes to 0 */
        note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;
    
    
        /* Input amount from user */
        scanf("%d", &amount);
    
    
        if(amount >= 500)
        {
            note500 = amount/500;
            amount -= note500 * 500;
        }
        if(amount >= 100)
        {
            note100 = amount/100;
            amount -= note100 * 100;
        }
        if(amount >= 50)
        {
            note50 = amount/50;
            amount -= note50 * 50;
        }
        if(amount >= 20)
        {
            note20 = amount/20;
            amount -= note20 * 20;
        }
        if(amount >= 10)
        {
            note10 = amount/10;
            amount -= note10 * 10;
        }
        if(amount >= 5)
        {
            note5 = amount/5;
            amount -= note5 * 5;
        }
        if(amount >= 2)
        {
            note2 = amount /2;
            amount -= note2 * 2;
        }
        if(amount >= 1)
        {
            note1 = amount;
        }
    
        /* Print required notes */
        printf("500 = %d\n", note500);
        printf("100 = %d\n", note100);
        printf("50 = %d\n", note50);
        printf("20 = %d\n", note20);
        printf("10 = %d\n", note10);
        printf("5 = %d\n", note5);
        printf("2 = %d\n", note2);
        printf("1 = %d\n", note1);
    
        return 0;
    }
**Q. 27: Profit or Loss**

    #include <stdio.h>
    
    int main()
    {
        int cp,sp,amt; 
        
        /* Input cost price and selling price of a product */
        scanf("%d", &cp);
        scanf("%d", &sp);
        
        if(sp > cp)
        {
            /* Calculate Profit */
            amt = sp - cp;
            printf("Profit");
        }
        else if(cp > sp)
        {
            /* Calculate Loss */
            amt = cp - sp;
            printf("Loss");
        }
        else
        {
            /* Neither profit nor loss */
            printf("No Profit No Loss");
        }
    
        return 0;
    }    
**Q. 29: Lakshmi's Teacher**

    #include <stdio.h>
    int main() {
        double num;
        scanf("%lf", &num);
        if (num <= 0.0) {
            if (num == 0.0)
                printf("ZERO");
            else
                printf("NEGATIVE");
        } else
            printf("POSITIVE");
        return 0;
    }


