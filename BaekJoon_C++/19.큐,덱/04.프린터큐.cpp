/*
	프린터 큐

	조건
	1. 현재 Queue의 가장 앞에 있는 문서의 '중요도'를 확인한다
	2. 나머지 문서들 중 현재 문서보다 중요도가 높은 문서가 하나라도 있다면 
	이 문서를 인쇄하지 않고 Queue의 가장 뒤에 재배치한다 그렇지 않으면 바로 인쇄를 한다
*/
#include <iostream>
#include <queue>
using namespace std;

int main(void){	
	
	int T, N, M, num;
	cin >> T;

	for(int i=0; i<T; i++){
		
		cin >> N >> M;
		queue<pair<int,int>> q;
		priority_queue<int> qp;

		for(int i=0; i<N; i++){
			cin >> num;
			q.push({i, num});
			pq.push(num);
		}

		if(N == 1){
			puts("1");
			return;
		}

		

	}
}
