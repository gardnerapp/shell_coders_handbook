#include <stdio.h>
#include <string.h>

// Takes input STDIN and sends it to STDOUT
void return_input(void){
	char array[30];

	gets(array);
	printf("%s\n", array);
}

main(){
	return_input();

	return 0;
}
