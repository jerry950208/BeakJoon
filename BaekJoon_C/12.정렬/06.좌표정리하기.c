//코딩 다시짜기
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x,y;
}	point;

point sort[100001];

int compare(const void *a, const void *b);

int main(){
	
	int N;
	scanf("%d",&N);
	
	point* arr = (point*)malloc(sizeof(point)*N);
	for(int i=0; i<N; i++)
		scanf("%d %d",&arr[i].x, &arr[i].y);
	qsort(arr.x,N, sizeof(int), compare );
	for(int i=0; i<N; i++)
		printf("%d %d \n",arr[i].x, arr[i].y);

	return 0;
}

int compare(const void *a, const void *b){
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if(num1 < num2)
		return -1;
	else if(num1 > num2)
		return 1;
	else 
		return 0;
}
