#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isIsogram(char userInput[]);

int main(){
	//input
	printf("Enter a string: ");
	char userInput[30];
	gets(userInput);
	
	//.toLowerCase
	for (int i = 0; i < strlen(userInput); i++) {
		userInput[i] = tolower(userInput[i]);
	}

	//output
	if (isIsogram(userInput)) {
		printf("Isogram");
	};
	return 0;
}

bool isIsogram(char userInput[]) {
	for (int i = 0; i < strlen(userInput); i++) {
		for (int j = 0; j < strlen(userInput); j++) {
			if (userInput[i] == userInput[j] && i != j ) {
				return false;
			}
		}
	}
	return true;
}