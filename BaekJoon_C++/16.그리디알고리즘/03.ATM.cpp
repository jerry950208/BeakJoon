/*
	ATM
*/
#include <iostream>
using namespace std;

int compare(const void*, const void*);

int main(void){
	
	int N, arr[1001];
	cin >> N;
	
	for(int i=0; i<N; i++) cin >> arr[i];
	
	qsort(arr, N, sizeof(int), compare);
	
	int sum = 0;

	for(int i=1; i<N; i++){
		arr[i] += arr[i-1];
		sum += arr[i];
	}

	cout << sum + arr[0] << "\n";
}

int compare(const void *a, const void *b){
	
	if(*(int*)a > *(int*)b)
		return 1;
	
	else if(*(int*)a < *(int*)b)
		return -1;

	else
		return 0;
}
