#include <stdio.h>

int main(){
	int N,cnt;
	scanf("%d",N);
	int arr[N+1],time[N+1];

	for(int i=0; i<N; i++)
		scanf("%d",arr[i]);

	for(int i=0; i<N; i++){
		int min = 1001;
		for(int j=0; j<=1000; j++){
			if(arr[j] < min){
				min = arr[j];
				time[i] =  min;
				cnt = j;
			}

		}
	}
	return 0;
}
