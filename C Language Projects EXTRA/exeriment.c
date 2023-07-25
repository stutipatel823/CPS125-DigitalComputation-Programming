/*
This program prompts for the colors of three bands of a resistor, and displays the * value of the
resistance in kilo-ohms based on a color code
*/
#include <stdio.h>
#include <math.h> /* for pow*/
#include <ctype.h> /* for toupper*/
#include <string.h> /* for strlen*/
#define NOT_FOUND -1 /* constants */
#define SUB_1 10
#define SUB_2 7
int search(const char [][SUB_2], const char [], int);

int main(void){
//int value=0;
	char COLOR_CODES[SUB_1][SUB_2] = {"black", "brown", "red", "orange","yellow", "green","blue", "violet", "gray", "white"}; 
	char target[SUB_2]; /* target string array*/
		
		printf("Band => ");
		scanf("%s", target);
		//value = search(COLOR_CODES, target, SUB_1);
		printf("Target: %s\n",target);
		
		int i, j;
		int length, counter = 0;
		int found = 0;
		int where = 0 ;		
		
		length = strlen(target); 
		for (i = 0; i < 10 ; i++){
			
					for (j = 0; j < length; j++)
							if(strcmp(COLOR_CODE[j]) == target[j]) 
									counter++ ;			
					if(counter == length)
							found = i+1;
							printf("i = %d ",i); 
					
							counter = 0;
		}
		--i;
		
		if (found)
				where =  found;	
		else 
				where = NOT_FOUND ;	
		printf("Where: %d",where);
		
}

/*int search(const char COLOR_CODES[][SUB_2], const char target[], int size)
{
		int i, j;
		int length, counter = 0;
		int found = 0;
		int where = 0 ;		
		
		length = strlen(target); 
		for (i = 0; i < size ; i++){ 
					for (j = 0; j < length; j++)
							if(COLOR_CODES[i][j] == target[j]) 
									counter++ ;			
					if(counter == length)
							found = 1;		
					else
							counter = 0;
		}
		--i;
		if (found)
				where =  i;	
		else 
				where = NOT_FOUND ;	
		return where;
}*/
