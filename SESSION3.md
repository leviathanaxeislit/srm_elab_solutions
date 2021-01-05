**Q. 21: Pony Puzzle**

    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
       int t,i,n,j,min=0,p;
       scanf("%d",&t);
       while(t--)
       {
        int a[5000];
       scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
       min=abs(a[0]-a[1]);
       for(i=0;i<n-1;i++)
       {
       for(j=i+1;j<n;j++)
       {
           p=abs(a[i]-a[j]);
          if(min>p)
           min=p;
       }
       }
       printf("%d\n",min);
       }
      return 0;
    }
**Q. 22: Dhoni the Man with Midas Touch**

    #include <stdio.h>
    
    int main()
       {
       int num;
    
       while(1)
       {
          scanf("%d",&num);
          if (num == 42){
             return(0);
          }
          else{
              printf("%d\n",num);
          }
       }
       return(0);
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
**Q. 26: Mad Angles**

    #include<stdio.h>
     int main()
    {
    int angle1,angle2,angle3,sum;
    scanf("%d%d%d",&angle1,&angle2,&angle3);  	  	
    sum = angle1 + angle2 + angle3;	  	
      if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
      	{
      		printf("Triangle is valid");
     	}
    	else
    	{
    		printf("Triangle is not valid");
    	}  
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
**Q. 28: Grand Master**

    #include <stdio.h>
    int main() {
        int t;
        int n;
        scanf("%d",&t);
        while(t > 0)
        {   
            scanf("%d",&n);
            int result = 0;
            while(n!=0)
            {
                result = result + (n * n);
                n = n-1;
            }
            
            printf("%d\n",result);
            t = t-1;
        }
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
**Q. 30: Nth Term**

    #include <stdio.h>
    int main() {
    	int t;
    	scanf("%d",&t);
    	while(t--)
    	{
    	    int n,i,s,j;
    	    scanf("%d",&n);
    	    
    	    s=0;
    	    for(i=1;i<=n;i++)
    	    {
       	        s=s+i;
    	    }
    	     printf("%d\n",s);   
    	}
    	return 0;
    }
