/*
	수 정렬하기3

	N개의 수가 주어졌을때 이를 오름차순으로 정렬하는 프로그램을 작성하시오
*/
#include <iostream>

using namespace std;

int cnt[10001];

int main(void){
	
	int N,num;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> num;
		cnt[num]++;
	}

	for(int i=0; i<10001; i++){
		if(cnt[i] != 0)
			for(int j=0; j<cnt[i]; j++)
				cout << i << "\n";
	}
}
