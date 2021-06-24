#include <stdio.h>

long long arr[101];

int main(){
	int T,N;
	scanf("%d",&T);

	for(int i=0; i<3; i++)
		arr[i]=1;

	for(int i=0; i<T; i++){
		scanf("%d",&N);
		for(int i=3; i<N; i++){
			if(arr[i]==0){
				arr[i] = arr[i-3]+arr[i-2];
			}
		}
		printf("%lld\n",arr[N-1]);
	}

	return 0;
}
