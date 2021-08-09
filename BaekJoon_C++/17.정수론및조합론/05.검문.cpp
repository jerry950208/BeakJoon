/*
	검문
	숫자 N개를 입력받는다. 그 다음 각 숫자를 M으로 나누었을때 나머지가 같게되는 M을 모두 찾으려고 한다

	N개의 수가 주어졌을때, 가능한 M을 모두 찾는 프로그램을 작성하시오
*/
#include <iostream>

using namespace std;

int compare(const void*, const void*);
int gcd(int a, int b);

int main(void){
	
	int N,num[101], result[101];
	int cnt = 0;
	cin >> N;
	
	for(int i=0; i<N; i++)
		cin >> num[i];

	qsort(num, N, sizeof(int), compare);
	
	int tmp = num[1] - num[0];
	for(int i=2; i<N; i++)
		tmp = gcd(tmp, num[i] - num[i-1]);

	for(int i=1; i*i <= tmp; i++){
		if(tmp % i == 0){
			result[cnt++] = i;
			if(i != tmp / i)
				result[cnt++] = tmp / i;
		}
	}

	qsort(result,N,sizeof(int),compare);
	
	for(int i=0; i<cnt; i++){
		if(result[i] != 1)
			cout << result[i] << " ";
	}
	cout << "\n";
}

int compare(const void* a, const void* b){
	
	if(*(int*)a > *(int*)b)
		return 1;

	else if(*(int*)a < *(int*)b)
		return -1;

	else
		return 0;
}

int gcd(int a, int b){
	
	return a % b ? gcd(b, a%b) : b;
}
