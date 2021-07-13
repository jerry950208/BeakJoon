#include <stdio.h>
#include <string.h>

int main(){
	int alpa[26];
	char input[100];
	scanf("%s",input);
	
	for(int i=0; i<26; i++)//alpa 배열을 -1로 초기화
		alpa[i]=-1;
	
	for(int i=0; i<strlen(input); i++){
		if(alpa[input[i]-'a']==-1)
			alpa[input[i]-'a']=i;
	}

	for(int i=0; i<26; i++)
		printf("%d ",alpa[i]);
	return 0;
}
