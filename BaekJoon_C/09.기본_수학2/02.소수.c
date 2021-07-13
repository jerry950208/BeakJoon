#include <stdio.h>

int main(){
	int N,M;
	int count;
	int sum=0;
	int min,cnt=0;
	scanf("%d %d",&N,&M);

	for(int i=N; i<=M; i++){
		count=0;
		for(int j=1; j<=i; j++){
			if(i%j==0){
				count++;
				if(j==i && count==2){
					sum+=i;
					if(cnt==0)
					min=i;
					cnt++;
				}
			}
		}
	}
	if(sum==0)
	printf("-1\n");
	else
	printf("%d\n%d\n",sum,min);
	return 0;
}
