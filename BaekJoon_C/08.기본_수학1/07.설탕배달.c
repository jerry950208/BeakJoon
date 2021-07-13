#include <stdio.h>

int main(){
	int N,cnt=0;

	scanf("%d",&N);

	cnt=N/5;
	N%=5;
	while(1){
		if(N==0)
			break;
		else if(N!=0 && N%3==0){
			cnt+=N/3;
			N%=3;
		}
		else if(N!=0 && N%3!=0 && cnt==0){
			printf("-1\n");
			return 0;
		}
		else if(N!=0 && N%3!=0){
			cnt-=1;
			N+=5;
		}
		
	}

	printf("%d\n",cnt);
	return 0;
}
