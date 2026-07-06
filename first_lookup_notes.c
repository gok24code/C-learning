#include <stdio.h>
#include <stdbool.h>

int main(){
	// Examples:
	printf("Hello World. %s, %d, %f, %c", "string incution", 20,3.149281,'A');
	/* 
		Special Definitions of "printf(*args)" Function into stdio library:
	
		%s - you can include "string" into pre-written text.
	
		%d - you can directly include a number or any value into plain-text.
	
		%f - you can include float valude into plain-text string.
	
		%c - includinig single char into plain-text (pre-written).
	
		loops are same with C++
	
		bool condition = false;
		do{
			printf("\n hello, neo.");
		}
		while(condition);
		
		for (int i = 0; i <= 20; i++){} or for (int i = c; i >= 0; i--) {}
	
		while(condition){
			//loops.
		}
	
	
		int a = 0;
	
		switch(a){
			case 1:
				//result
				.
				.
			case 0:
				//res..
			default:
				//def..
		}
		Function Declarations is same with C++.
		like this:
		declaredFunction(a);

		void declaredFunction(int a); -- predefinitions are same too..
		void declaredFunction(int a){
	
			switch (a){
				case 1:
					printf("\na");
				default:
					printf("\ndefault");
					break;
			}
		}
	
	pointer and memory adressing / managment logic is also same, here is the recursive function usage with pointer logic in C lang:
	
	void declaredFunction(int *a);
	
	int a = 0;
	
	declaredFunction(&a);

	void declaredFunction(int *a){
	
		switch (*a){
			case 1:
				printf("\na");
			default:
				printf("\ndefault");
				*a += 1;
				declaredFunction(a);
				break;
			}
		}
	
	
	--learned new things: just printf() function into stdio library and i learned also i need to add stdbool library if i want to use
	booleans into my C programs.
	*/
	return 0;
}
