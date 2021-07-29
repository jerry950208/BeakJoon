/*
	검문
	숫자 N개를 입력받고, 각 숫자를 M으로 나누었을때, 나머지가 모두 같게되는 M을 모두 찾기
	M은 공백으로 구분하여 모두 출력한다.
	M은 증가하는 순서여야한다.
*/
#include <stdio.h>

int compare(const void*, const void*);
void func_Remain(int N, int arr[]);

int main(){
	
	int N;
	scanf("%d",&N);
	int arr[N];
	
	for(int i=0; i<N; i++)
		scanf("%d",arr[i]);

	qsort(arr,N,sizeof(int),compare);
	
	func_Remain(N,arr);
}

int compare(const void* a, const void* b){
	
	if(*(int*)a < *(int*)b)
		return 1;
	else if(*(int*)a > *(int*)b)
		return -1;
	else
		return 0;
}

void func_Remain(int N, int arr[]){
	
	int cnt = 2;
	while(1){
		if(arr[0] % cnt == 0){
			
		}
	}
}
/*
//시간초과
#include <stdio.h>
#include <stdlib.h>

void func_Remain(int N, int arr[]);

int main(void){
	
	int N;
	scanf("%d",&N);
	int arr[N];

	for(int i=0; i<N; i++)
		scanf("%d",&arr[i]);
	
	func_Remain(N,arr);

	return 0;
}

void func_Remain(int N, int arr[]){
	
	int check,remain,cnt = 2;
	while(1){

		check = 0;
		remain = arr[0] % cnt;
		for(int i=0; i<N; i++){
			
			if(arr[i] <= cnt)
				exit(1);

			else if(remain == arr[i] % cnt){
				check++;
				if(check == N)
					printf("%d ",cnt);
			}

			else if(remain != arr[i] % cnt)
				break;

		}
		cnt++;
	}
}*/
