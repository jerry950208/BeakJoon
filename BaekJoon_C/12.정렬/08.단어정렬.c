/*
	단어정렬
	알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램 작성

	1. 길이가 짧은 것부터
	2. 길이가 같으면 사전 순으로
*/
/*
#include <stdio.h>

int compare(const void*, const void*);

int main(void){
	
	int N, arr[51];
	char word[20001][51];
	
	scanf("%d",&N);

	//N만큼 단어입력받기
	for(int i=0; i<N; i++)
		scanf("%s",word[i]);

	for(int i=0; i<N; i++){
		arr[i] = word[i][0] - 'a';
	}

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
