/*
	단어정렬
	알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램 작성

	1. 길이가 짧은 것부터
	2. 길이가 같으면 사전 순으로
*/

/*
#include <stdio.h>
#include <string.h>

int compare(const void*, const void*);

int main(void){
	
	int N,len, tmp[2][20001];
	char word[20001][51];

	scanf("%d",&N);

	for(int i=0; i<N; i++){
		scanf("%s",word[i]);
		len = strlen(word[i]);
		tmp[0][i] = len;
		tmp[1][i] = i;
	}
	
	qsort(tmp,N,sizeof(int),compare);
	
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
