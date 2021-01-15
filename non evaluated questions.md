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
***Q. 95: Infix***

    // C program to convert infix expression to postfix 
    #include <stdio.h> 
    #include <string.h> 
    #include <stdlib.h> 
    
    // Stack type 
    struct Stack 
    { 
    	int top; 
    	unsigned capacity; 
    	int* array; 
    }; 
    
    // Stack Operations 
    struct Stack* createStack( unsigned capacity ) 
    { 
    	struct Stack* stack = (struct Stack*) 
    		malloc(sizeof(struct Stack)); 
    
    	if (!stack) 
    		return NULL; 
    
    	stack->top = -1; 
    	stack->capacity = capacity; 
    
    	stack->array = (int*) malloc(stack->capacity * 
    								sizeof(int)); 
    
    	return stack; 
    } 
    int isEmpty(struct Stack* stack) 
    { 
    	return stack->top == -1 ; 
    } 
    char peek(struct Stack* stack) 
    { 
    	return stack->array[stack->top]; 
    } 
    char pop(struct Stack* stack) 
    { 
    	if (!isEmpty(stack)) 
    		return stack->array[stack->top--] ; 
    	return '$'; 
    } 
    void push(struct Stack* stack, char op) 
    { 
    	stack->array[++stack->top] = op; 
    } 
    
    
    // A utility function to check if 
    // the given character is operand 
    int isOperand(char ch) 
    { 
    	return (ch >= 'a' && ch <= 'z') || 
    		(ch >= 'A' && ch <= 'Z'); 
    } 
    
    // A utility function to return 
    // precedence of a given operator 
    // Higher returned value means 
    // higher precedence 
    int Prec(char ch) 
    { 
    	switch (ch) 
    	{ 
    	case '+': 
    	case '-': 
    		return 1; 
    
    	case '*': 
    	case '/': 
    		return 2; 
    
    	case '^': 
    		return 3; 
    	} 
    	return -1; 
    } 
    
    
    // The main function that 
    // converts given infix expression 
    // to postfix expression. 
    int infixToPostfix(char* exp) 
    { 
    	int i, k; 
    
    	// Create a stack of capacity 
    	// equal to expression size 
    	struct Stack* stack = createStack(strlen(exp)); 
    	if(!stack) // See if stack was created successfully 
    		return -1 ; 
    
    	for (i = 0, k = -1; exp[i]; ++i) 
    	{ 
    		
    		// If the scanned character is 
    		// an operand, add it to output. 
    		if (isOperand(exp[i])) 
    			exp[++k] = exp[i]; 
    		
    		// If the scanned character is an 
    		// ‘(‘, push it to the stack. 
    		else if (exp[i] == '(') 
    			push(stack, exp[i]); 
    		
    		// If the scanned character is an ‘)’, 
    		// pop and output from the stack 
    		// until an ‘(‘ is encountered. 
    		else if (exp[i] == ')') 
    		{ 
    			while (!isEmpty(stack) && peek(stack) != '(') 
    				exp[++k] = pop(stack); 
    			if (!isEmpty(stack) && peek(stack) != '(') 
    				return -1; // invalid expression			 
    			else
    				pop(stack); 
    		} 
    		else // an operator is encountered 
    		{ 
    			while (!isEmpty(stack) && 
    				Prec(exp[i]) <= Prec(peek(stack))) 
    				exp[++k] = pop(stack); 
    			push(stack, exp[i]); 
    		} 
    
    	} 
    
    	// pop all the operators from the stack 
    	while (!isEmpty(stack)) 
    		exp[++k] = pop(stack ); 
    
    	exp[++k] = '\0'; 
    	printf( "%s", exp ); 
    } 
    
    // Driver program to test above functions 
    int main() 
    { 
    	char exp[] = "a+b*(c^d-e)^(f+g*h)-i"; 
    	infixToPostfix(exp); 
    	return 0; 
    } 

<!--stackedit_data:
eyJoaXN0b3J5IjpbMjExMzI1NTIzMywtNTA5MTM1NzE4LC0zOD
g5Nzk0MTNdfQ==
-->