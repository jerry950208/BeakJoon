#include<stdio.h>
#include<string.h>

int main(){
	char word[1000000];
	int i=0;
	
	scanf("%[^\n]s",&word);
	
	char *ptr=strtok(word," ");
	
	while(ptr !=NULL){
		i++;
		ptr=strtok(NULL," ");
	}
	printf("%d",i);
	return 0;
}
