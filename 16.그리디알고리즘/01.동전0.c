#include <stdio.h>

int main(){
	int N,K,cnt = 0;
	scanf("%d %d",&N,&K);
	int arr[N+1];

	for(int i=0; i<N; i++)
		scanf("%d",&arr[i]);

	for(int i=N-1; i>=0; i--){
		if(K/arr[i] > 0){
			cnt = cnt +(K/arr[i]);
			K = K % arr[i];
		}
	}
	printf("%d\n",cnt);
	return 0;
}
