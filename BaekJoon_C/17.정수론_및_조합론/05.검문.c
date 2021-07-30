/*
	검문
	숫자 N개를 입력받고, 각 숫자를 M으로 나누었을때, 나머지가 모두 같게되는 M을 모두 찾기
	M은 공백으로 구분하여 모두 출력한다.
	M은 증가하는 순서여야한다.
*/

/*
#include <stdio.h>
#include <stdlib.h>

int compare(const void*, const void*);

int main(){
	
	int N,arr[10000];
	scanf("%d",&N);
	
	for(int i=0; i<N; i++)
		scanf("%d",&arr[i]);

	qsort(arr,N,sizeof(int),compare);

	
	return 0;
}

int compare(const void* a, const void* b){
	
	if(*(int*)a > *(int*)b)
		return 1;
	else if(*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}*/
