/*
	약수
	첫째줄에 진짜 약수의 개수가 주어진다
	둘째줄 에는 N의 진짜 약수가 주어진다
*/
#include <stdio.h>

int compare(const void*, const void*);

int main(){
	
	int N;
	scanf("%d",&N);							//약수의 개수
	int arr[N];								//약수 배열

	for(int i=0; i<N; i++)
		scanf("%d",&arr[i]);
	
	qsort(arr,N,sizeof(int),compare);		//오름차순으로 정리

	printf("%d\n",arr[0] * arr[N-1]);		//첫번째 약수 * 마지막 약수를 하면 원하는 양수를 구할수 있다
	return 0;
}

int compare(const void* a, const void* b){
	
	if(*(int*) a < *(int*) b)
		return 1;
	else if(*(int*) a > *(int*) b)
		return -1;
	else
		return 0;
}
