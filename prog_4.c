#include<stdio.h>
int main() {
	char s[5];
	printf("\n Enter any operator:");
	gets(s);
	switch(s[0]) {
		case'>': if(s[1]=='=')
					printf("\n Greater than or equal");
				 else
					printf("\n Greater than");
		break;

		case'<': if(s[1]=='=')
				 printf("\n Less than or equal");
				 else
				 printf("\nLess than");
		break;

		case'=': if(s[1]=='=')
				 printf("\nEqual to");
				 else
				 printf("\nAssignment");
		break;

		case'!': if(s[1]=='=')
				 printf("\nNot Equal");
				 else
				 printf("\n Bit Not");
		break;

		case'&': if(s[1]=='&')
				 printf("\nLogical AND");
				 else
				 printf("\n Bitwise AND");
		break;

		case'|': if(s[1]=='|')
		   		 printf("\nLogical OR");
				 else
				 printf("\nBitwise OR");
		break;

		case'+': 
				 if(s[1]=='+')
		   		 printf("\nIncrement");
				 else if(s[1]=='=')
				 printf("\nAddition shorthand");
				 else 
				 printf("\n Addition");
		break;

		case'-': 
				 if(s[1]=='-')
		   		 printf("\nDecrement");
				 else if(s[1]=='=')
				 printf("\nSubtraction shorthand");
				 else 
				 printf("\n Subtraction");
		break;

		case'*': 
				 if(s[1]=='=')
				 printf("\nMultiplication shorthand");
				 else 
				 printf("\n Multiplication");
		break;

		case'/': 
				 if(s[1]=='=')
				 printf("\nDivision shorthand");
				 else 
				 printf("\n Division");
		break;

		case'%': 
				 if(s[1]=='=')
				 printf("\nModulo shorthand");
				 else 
				 printf("\n Modulo");
		break;

		default: 
				printf("\n Not an operator");
	}
	printf("\n");
	return 0;
}
