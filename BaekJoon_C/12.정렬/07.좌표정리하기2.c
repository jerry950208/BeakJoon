/*
	좌표정리하기
	2차원 평면 위의 점 N개가 주어진다
	좌표를 y좌표증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순서로 정렬한다음 출력하는 프로그램
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	
	int x;
	int y;
} point;

point sort[100001];

void Merge(point* arr, int low, int mid, int high);
void Mergesort(point* arr, int low, int high);

int main(void){
	
	int N;
	scanf("%d",&N);

	point* arr = (point*)malloc(sizeof(point)*N);
	for(int i=0; i<N; i++)
		scanf("%d %d",&arr[i].x, &arr[i].y);

	Mergesort(arr,0,N-1);

	for(int i=0; i<N; i++)
		printf("%d %d\n",arr[i].x, arr[i].y);
	return 0;
}

void Merge(point* arr, int low, int mid, int high){
	int i = low;
	int j = mid + 1;
	int k = low;

	while(i <= mid && j <= high){
		
		if(arr[i].y < arr[j].y)
			sort[k++] = arr[i++];
		
		else if(arr[i].y > arr[j].y)
			sort[k++] = arr[j++];

		else{
			if(arr[i].x < arr[j].x)
				sort[k++] = arr[i++];
			else if(arr[i].x > arr[j].x)
				sort[k++] = arr[j++];
		}
	}

	if(i <= mid)
		while(i <= mid)
			sort[k++] = arr[i++];
	
	else
		while(j <= high)
			sort[k++] = arr[j++];
	
	for(int k=low; k <= high; k++)
		arr[k] = sort[k];
}
void Mergesort(point* arr, int low, int high){
	int mid = (low+high) / 2;

	if(low < high){
		Mergesort(arr, low, mid);
		Mergesort(arr,mid+1, high);
		Merge(arr, low, mid, high);
	}
}
