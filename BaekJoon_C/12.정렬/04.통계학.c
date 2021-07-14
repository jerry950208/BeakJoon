#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first, const void* second){
	if(*(int *)first > *(int *)second)
		return 1;
	else if(*(int *)first < *(int *)second)
		return -1;
	else
		return 0;
}
void func_avg(int arr[], int N){
	float k = 0.0;
	for(int i=0; i<N; i++)
		k += arr[i];
	printf("\navg = %.0f\n",k/N);
}
void func_mid(int arr[], int N){
	printf("mid = %d\n",arr[N/2]);
}
void func_mod(int arr[], int N){
	int a[8001] = { 0 };
	int b[8001] = { 0 };
	int cnt = 0, cnt2 = 0;
	
	for(int i=0; i<N; i++){
		for(int j=0; j<=8000; j++){
			if(arr[i] == j-4000){
				b[j] += 1;
				if(cnt <= b[j])
					cnt = b[j];
				break;
			}
		}
	}
	
	for(int i=0; i<=8000; i++){
		if(b[i] == cnt){
			a[cnt2] = i - 4000;
			
			if(cnt != 2){
				printf("mod2 = %d\n",arr[1]);
				break;
			}

			else if(cnt >=2 && cnt2 == 1){
				printf("mod1 = %d\n",a[cnt2]);
				break;
			}
			cnt2 += 1;
		}
	}
}
void func_len(int arr[], int N){
	int max = arr[N-1];
	int min = arr[0];

	printf("len = %d\n",max - min);
}

int main(){
	int N,arr[500001] = {};
	scanf("%d",&N);
	
	for(int i=0; i<N; i++)
		scanf("%d",&arr[i]);
	qsort(arr, N, sizeof(int), compare);
	
	printf("\n\n");

	if(N == 1)
		printf("%d\n%d\n%d\n0\n",arr[0],arr[0],arr[0]);
	else{
		func_avg(arr,N);
		func_mid(arr,N);
		func_mod(arr,N);
		func_len(arr,N);
	}
	return 0;
}
