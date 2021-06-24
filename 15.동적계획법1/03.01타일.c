#include <stdio.h>

long long arr[2]={1,2};
long long  tile(int n){
	long long temp;
	if(n==1){
		return arr[1];
	}
	else{
		temp=(arr[0] + arr[1]) % 15746;
		arr[0] = arr[1];
		arr[1] = temp;
		return tile(n-1);
	}
}

int main(){
	int N;
	scanf("%d",&N);
	
	if(N==1)
		printf("1\n");
	else if(N==2)
		printf("2\n");
	else 
		printf("%lld\n",tile(N-1)%15746);
	
	return 0;
}
