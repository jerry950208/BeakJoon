#include <stdio.h>
#include <string.h>

int main(){
	char cro[100];
	int cnt=0;
	scanf("%s",cro);
	int size = strlen(cro);

	for(int i=0; i<size; i++){
		if(cro[i]=='c'){
			if(cro[i+1]=='=' || cro[i+1]=='-')
				cnt++;
		}
		else if(cro[i]=='d'){
			if(cro[i+1]=='z'&&cro[i+2]=='=')
				cnt++;
			else if(cro[i+1]=='-')
				cnt++;
		}
		else if(cro[i]=='j'){
			if(cro[i-1]=='l' || cro[i-1]=='n')
				cnt++;
		}
		else if(cro[i]=='='){
			if(cro[i-1]=='s' || cro[i-1]=='z')
				cnt++;
		}
	}
	printf("%d\n",size-cnt);
	return 0;
}
