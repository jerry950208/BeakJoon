
/*
	약수

	양수 A가 N의 진짜 약수가 되려면 N이 A의 배수이고, A가 1과 N이 아니어야 한다
	어떤 수 N의 진짜 약수가 모두 주어질때 N을 구하는 프로그램을 작성하시오
*/
#include <iostream>

using namespace std;

int compare(const void*, const void*);

int main(void){
	
	int N, result, aliquot[1000000];
	cin >> N;

	for(int i=0; i<N; i++)
		cin >> aliquot[i];

	qsort(aliquot,N,sizeof(int),compare);

	result = aliquot[0] * aliquot[N-1];

	cout << result << "\n";
}

int compare(const void* a, const void* b){
	
	if(*(int*)a > *(int*)b)
		return 1;

	else if(*(int*)a < *(int*)b)
		return -1;

	else
		return 0;
}
