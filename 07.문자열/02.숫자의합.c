#include <stdio.h>

int main(){
	int cnt,sum=0;
	char num[100];
	scanf("%d %s",&cnt,num);

	for(int i=0; i<cnt; i++){
		sum += num[i]-'0';
	}
	printf("%d",sum);
	
	return 0;
}
