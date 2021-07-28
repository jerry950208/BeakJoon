/*
	ATM

*/
#include <stdio.h>
#include <stdlib.h>

int compare(const void*, const void*);

int main(){
	
	int N;
	scanf("%d",&N);

	int arr[N+1];
	for(int i=0; i<N; i++)
		scanf("%d",&arr[i]);

	qsort(arr,N,sizeof(int),compare);
	
	int sum = 0;

	for(int i=1; i<N; i++){
		arr[i] += arr[i-1];
		sum += arr[i];
	}

	printf("%d\n",sum+arr[0]);
	return 0;
}

int compare(const void *a, const void *b){
	if(*(int*)a > *(int*)b)
		return 1;
	else if(*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}
