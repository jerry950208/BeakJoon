#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
        if(*(int*)a > *(int*)b)
                return 1;
        else if(*(int*)a < *(int*)b)
                return -1;
        else
                return 0;
}

void func_avg(int arr[], int T){

        double avg = 0.0;

        for(int i=0; i<T; i++)
                avg += arr[i];

        printf("%.0f\n",avg / T);
}

void func_mid(int arr[], int T){

        printf("%d\n",arr[T/2]);

}

void func_mod(int arr[], int T){

        int check[8001] = { 0 };
        int max = 0, cnt = 0, tmp;
        for(int i=0; i<T; i++){

                check[arr[i] + 4000] += 1;
                if(check[arr[i] + 4000] > max){
                        max = check[arr[i] + 4000];
                }
        }

        for(int i=0; i<=8001; i++){
                if(check[i] == max){
                        cnt++;
                        tmp = i - 4000;
                        if(cnt == 2){
                                printf("%d\n",i - 4000);
                        }
                }
        }
        if(cnt == 1)
                printf("%d\n",tmp);
}

void func_len(int arr[], int T){
		
	if(arr[0] < 0){
		if(arr[T-1] >= 0)
			printf("%d\n",arr[T-1] - arr[0]);
		else
			printf("%d\n",arr[T-1] - arr[0]);
	}
			
	else
		printf("%d\n",arr[T-1] - arr[0]);
}
	

int main(){
	
	/*
		산술평균 : N개의 수들의 합을 N으로 나눈 값
		중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
		최빈값 : N개의 수들 중 가장 많이 나타나는 값
		범위 : N개의 수들 중 최댓값과 최솟값의 차이
	*/
	
	int T,arr[500000];

	scanf("%d",&T);

	for(int i=0; i<T; i++)
		scanf("%d",&arr[i]);
	
	qsort(arr, T, sizeof(int), compare);

	if(T == 1)
		printf("%d\n%d\n%d\n0\n",arr[0],arr[0],arr[0]);
	
	else{
	func_avg(arr,T);
	func_mid(arr,T);
	func_mod(arr,T);
	func_len(arr,T);
	}

	return 0;
}
