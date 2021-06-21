#include <stdio.h>

int arr[10000];

int main(){
	int T,n;

	scanf("%d",&T);

	for(int k=0; k<T; k++){
		scanf("%d",&n);
		for(int i=2; i<=n; i++){
			for(int j=2; j*i<=n; j++){
				arr[i*j]=1;
			}
		}
		for(int i=n/2; i>0; i--){
			if(arr[i]==0 && arr[n-i]==0){
				printf("%d %d\n",i,n-i);
				break;
			}
		}
	}
	return 0;
}
