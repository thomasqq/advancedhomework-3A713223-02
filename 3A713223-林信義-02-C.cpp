#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char word[100];
	int i,len;
	
	printf("�п�J�@�Ӧr��:");
	scanf("%s",word);
	
	printf("����᪺�r�ꬰ:");
	len=strlen(word);
	for(i=len-1;i>=0;i--){
		printf("%c",word[i]);
	}
	printf("\n");	
	
	system("PAUSE");
	return 0;
}
