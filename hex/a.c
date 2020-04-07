#include <stdio.h>
#include <string.h>

int main() {
	int input;
	printf("Enter input: ");
	scanf("%d", &input);
	getchar();
	
	if(input == 0xdeadbeef) {
		FILE* f = fopen("flag","r");
		char buffer[100];
		fread(buffer, sizeof(char), 100, f);
		puts(buffer);
		fclose(f);
	}
	

	return 0;
}
