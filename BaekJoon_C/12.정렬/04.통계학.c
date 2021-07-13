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
	printf("%.0f\n",k/N);
}
void func_mid(int arr[], int N){
	printf("%d\n",arr[N/2]);
}
void func_mod(int arr[], int N){
	int b[8001] = { 0 };
	int max = 0, cnt = 0, idx;
	for(int i=0; i<N; i++){
		idx = arr[i] + 4000;
		b[idx] += 1;

		if(b[idx] > max)
			max = b[idx];
	}

	for(int i=0,idx=0; i<8001; i++){
		if(b[i] == 0)
			continue;
		if(b[i] == max){
			if(cnt == 0){
				idx = i;
				cnt += 1;
			}
			else if(cnt == 1){
				idx = i;
				break;
			}
		}
	}
	printf("%d\n",idx - 4000);
}
void func_len(int arr[], int N){
	int max = arr[N-1];
	int min = arr[0];

	printf("%d\n",max - min);
}

int main(){
	int N,arr[500001] = {};
	scanf("%d",&N);
	
	for(int i=0; i<N; i++)
		scanf("%d",&arr[i]);
	qsort(arr, N, sizeof(int), compare);

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



/*#include <stdio.h>
void merge(int arr[], int low, int mid, int high){
        int b[500001];
        int i = low;
        int j = mid + 1;
        int k = 0;

        while(i <= mid && j <= high){
                if(arr[i] <= arr[j])
                        b[k++] = arr[i++];
                else
                        b[k++] = arr[j++];
        }
        while(i <= mid)
                b[k++] = arr[i++];

        while(j <= high)
                b[k++] = arr[j++];

        k--;

        while(k >= 0){
                arr[low+k] = b[k];
                k--;
        }
}
void margesort(int arr[], int low, int high){
        int mid;
        if(low < high){
                mid = (low + high)/2;
                margesort(arr, low, mid);
                margesort(arr, mid+1, high);
                merge(arr, low, mid, high);
        }
}

void func_avg(int arr[], int N){//산술평균 함수
        float avg = 0.0;
        for(int i=0; i<N; i++){
                avg += arr[i];
        }
        printf("%.0f\n",(avg/N));
}

void func_mid(int arr[], int N){//중앙값 함수
	printf("%d\n",arr[N/2]);
}
void func_min(int arr[], int N){//최빈값 함수
	//최빈값하고 최빈값중 두번째로 작은거
	int min[8001] = {0};
	int cnt=0,temp=0;
	for(int i=0; i<N; i++){
		if(arr[i] != temp && b[i] == 0)
	}
}
void func_len(int arr[], int N){//범위 함수
	if(arr[0] >= 0)
		printf("%d\n",arr[0] + arr[N-1]);
	else if(arr[0] < 0){
		if(arr[N-1] >= 0)
			printf("%d\n",arr[N-1] - arr[0]);
		else
			printf("%d\n",arr[N-1] - arr[0]);
	}
}

int main(){
        int N;

        scanf("%d",&N);
        int arr[N+1];

        for(int i=0; i<N; i++)
                scanf("%d",&arr[i]);

        margesort(arr,0,N-1);
        printf("\n\n\n");
        if(N == 1){
                printf("%d\n%d\n%d\n0\n",arr[0],arr[0],arr[0]);
        }
        else{
                func_avg(arr,N);//산술평균
                func_mid(arr,N);//중앙값
                func_min(arr,N);//최빈값
                func_len(arr,N);//범위
        }
        return 0;
}*/
