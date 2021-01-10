**Q. 31: Triangle**

    #include <stdio.h>
    int main()
    {
      int n,sum;
      scanf("%d",&n);
      sum=n*n*n;
      printf("%d",sum);
      return 0;
    }

**Q. 32: POSITIVE AND NAGATIVE NUMBERS**

    #include<stdio.h>
    int main()
    {
       int i,a,b,nsum,pcount;
       scanf("%d",&a);
       for(i=0; i<a; i++)
       {
         scanf("%d",&b);
       
         if(b>0) 
           pcount=pcount+1;
         else 
           nsum+=b;
       }
       printf("\n%d",pcount);
       printf("\n%d",nsum);
       return 0;
    }
**Q. 33: REMAINDER**

    #include <stdio.h>
    int main() {
        int dividend, divisor, quotient, remainder;
        scanf("%d", &dividend);
        scanf("%d", &divisor);
    
        // Computes quotient
        quotient = dividend / divisor;
    
        // Computes remainder
        remainder = dividend % divisor;
    
        printf("%d\n", quotient);
        printf("%d", remainder);
        return 0;
    }
**Q. 34: Homework**
#include <stdio.h>
int main() {
	int w;
  scanf("%d",&w);
  if(w > 1) printf("true");
  else printf("false");
	return 0;
}

**Q. 35: Mark Zuckerberg**

    #include <stdio.h>
    int main() {
      int a,b;
      scanf("%d",&a);
      scanf("%d",&b);
      printf("%d\n",a&b);
      printf("%d\n",a|b);
      printf("%d\n",~a);
      printf("%d\n",a^b);
      printf("%d\n",a<<1);
      printf("%d\n",a>>1);
    	return 0;
    }
**Q. 36: MATH**

    #include<stdio.h>
     
    #define MOD 1000000007
     
    int count;
     
    void calc(int chef[], int n, int sum, int index)
    {
    	//printf("n=%d sum=%d index=%d count=%d\n",n,sum,index,count);
    	if(index<0)
    		return;
    	if(sum<0)
    		return;
    	if((long long)chef[index]*n < sum)
    		return;
    	if(n==0)
    	{
    		if(sum==0)
    			count=(count+1)%MOD;
    		return;
    	}
    	calc(chef,n-1,sum-chef[index],index);
    	calc(chef,n,sum,index-1);	
    }
     
    int main()
    {
    	int i, q, x, k;
    	int chef[43];
    	chef[0]=1;
    	chef[1]=2;
    	for(i=2;i<43;i++)
    		chef[i]=chef[i-1]+chef[i-2];
    	scanf("%d",&q);
    	while(q--)
    	{
    		count=0;
    		scanf("%d%d",&x,&k);
    		calc(chef,k,x,42);
    		printf("%d\n",count);
    	}
    	return 0;
    } 
**Q. 37: SIMPLE FUNCTION**

    #include<stdio.h>
    #include<string.h>
    int howManyLightsabersDoYouOwn(char a[])
    {
      if(strcmp(a, "Zach")==0)
      	return 18;
      return 0;
    }
    
    int main(){
      char name[50];
      scanf("%s",name);
      printf("%d", howManyLightsabersDoYouOwn(name));
      return 0;
    }
**Q. 38: INTEGER**
#include <stdio.h>
 
int main()

    {
        unsigned int number;
        int count = 0;
        scanf("%d", &number);
        while (number != 0)
        {
            if ((number & 1) == 1)
                count++;
            number = number >> 1;
        }
        printf("%d", count);
        return 0;
    }
**Q. 39: 0'S AND 1'S**

    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
    int n,i,c1=0,c0=0;
    char c[200001];
     scanf("%d",&n);
    scanf("%s",c);
    
    for(i=0;i<n;i++)
    if(c[i]=='1')
    c1++;
    else
    c0++;
    
    printf("%d",abs(c1-c0));
    return 0;
    }
**Q. 40: FACTORIAL**

    #include <stdio.h>
    void main()
    {
        long int t,n,i,fact=1;
        scanf("%ld",&t);
        while(t--)
        {
            scanf("%ld",&n);
            for(i=n;i>0;i--)
            {
                fact=fact*i;
            }
            printf("%ld\n",fact);
            fact=1;
        }
    }
    
