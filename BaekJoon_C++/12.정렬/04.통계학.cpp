/*
	통계학
	1.산술평균 : N개의 수들의 합을 N으로 나눈 값(소수점 이하 첫째 자리에서 반올림한 값)
	2.중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
	3.최빈값 : N개의 수들 중 가장 많이 나타나는 값(여러개가 있을경우 최빈값중 두번째로 작은 값)
	4.범위 : N개의 수들 중 최댓값과 최솟값의 차이
*/
#include <iostream>

using namespace std;

int compare(const void*, const void*);
void func_Avg(int N, int arr[]);
void func_Mid(int N, int arr[]);
void func_Mod(int N, int arr[]);
void func_Len(int N, int arr[]);

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,arr[500000] = { 0 };
	cin >> N;

	for(int i=0; i<N; i++)
		cin >> arr[i];
	
	qsort(arr,N,sizeof(int),compare);

	if(N == 1){	
		cout << arr[0] << "\n";
		cout << arr[0] << "\n";
		cout << arr[0] << "\n";
		cout << "0\n";
	}	

	else{
		func_Avg(N,arr);
		func_Mid(N,arr);
		func_Mod(N,arr);
		func_Len(N,arr);
	}
}

int compare(const void* a, const void* b){
	
	if(*(int*)a < *(int*)b)
		return -1;
	
	else if((*(int*)a > *(int*)b))
		return 1;

	else
		return 0;
}

void func_Avg(int N, int arr[]){
	
	double sum = 0.0;
	for(int i=0; i<N; i++)
		sum += arr[i];

	sum /= N;

	cout << fixed;
	cout.precision(0);
	cout << sum << "\n";
}

void func_Mid(int N, int arr[]){
	
	int mid = N / 2;

	cout << arr[mid] << "\n";
}

void func_Mod(int N, int arr[]){
	
	int cnt = 0, maximum = 0,check[8001] = { 0 };
	int tmp, count = 0;
	for(int i=0; i<N; i++){
		if(arr[i] != 0){
			check[arr[i] + 4000]++;
			if(check[arr[i] + 4000] >= maximum){
				maximum = check[arr[i]+4000];
			}
		}
	}
	
	for(int i=0; i<N; i++){
		if(check[arr[i]+4000] == maximum)
			count++;
	}

	for(int i=0; i<=8000; i++){	

		if(count/maximum == 1){
			if(check[i] == maximum){
				cout << i-4000 << "\n";
				break;
			}
		}

		else{
			if(check[i] == maximum){
				cnt++;
				if(cnt == 1)
					tmp = i-4000;
				if(cnt == 2)
					cout << i-4000 << "\n";
				if(cnt == 1 && i == 8000)
					cout << tmp << "\n";
			}
		}
	}
}

void func_Len(int N, int arr[]){
	
	int result;

	if(arr[N-1] >= 0){
		result = arr[N-1] - arr[0];
		cout << result << "\n";
	}
	else{
		result = arr[N-1] - arr[0];
		cout << result << "\n";
	}

}
