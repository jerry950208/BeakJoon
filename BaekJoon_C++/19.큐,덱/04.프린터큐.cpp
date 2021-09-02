/*
	프린터 큐

	조건
	1. 현재 Queue의 가장 앞에 있는 문서의 '중요도'를 확인한다
	2. 나머지 문서들 중 현재 문서보다 중요도가 높은 문서가 하나라도 있다면 
	이 문서를 인쇄하지 않고 Queue의 가장 뒤에 재배치한다 그렇지 않으면 바로 인쇄를 한다
*/


/*
//큐는 인덱스 확인 불가
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main(void){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int Testcase;
	cin >> Testcase;
	
	for(int i=0; i<Testcase; i++){
		int N, idx;
		cin >> N >> idx;
		
		int input;
		queue<pair<int, int> > q;
		for(int i=0; i<N; i++){
			cin >> input;
			q.push(make_pair(i, input));
		}
		
		int cnt = 0;
		for(int i=0; i<N; i++){
			if(q[i].second > q[idx].second){
				q[i].pop();
				cnt++;
			}
		}

		for(int i=0; i<q.size(); i++){
			if(q[i].second == q[idx].second){
				cnt++;
				if(i == idx)
					break;
			}
		}

		cout << cnt << "\n";
	}
}*/
