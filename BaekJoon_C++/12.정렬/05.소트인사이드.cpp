/*
	소트인사이드
	수가 주어지면 그 수의 각 자리수를 내림차순으로 정렬해보
*/
#include <iostream>

using namespace std;

int compare(const void*, const void*);

int main(void){
	
	int N, cnt=0, arr[100000];
	cin >> N;

	while(N > 0){
		arr[cnt] = N%10;
		N /= 10;
		cnt++;
	}

	qsort(arr,cnt,sizeof(int),compare);
	
	for(int i=0; i<cnt; i++)
		cout << arr[i];

	cout << "\n";
}

int compare(const void* a, const void* b){
	
	if(*(int*)a < *(int*)b)
		return 1;

	else if(*(int*)a > *(int*)b)
		return -1;

	else
		return 0;
}
