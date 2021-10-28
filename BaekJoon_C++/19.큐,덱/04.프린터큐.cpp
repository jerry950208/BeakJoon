/*
	프린터 큐

	조건
	1. 현재 Queue의 가장 앞에 있는 문서의 '중요도'를 확인한다
	2. 나머지 문서들 중 현재 문서보다 중요도가 높은 문서가 하나라도 있다면 
	이 문서를 인쇄하지 않고 Queue의 가장 뒤에 재배치한다 그렇지 않으면 바로 인쇄를 한다
*/
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(void){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TestCase;
	cin >> TestCase;

	for(int C=0; C<TestCase; C++){
		
		int N, M, answer = 0;
		cin >> N >> M;

		int tmp;
		if(N == 1){
			answer = 1;
			cin >> tmp;
		}
		else{
			queue<pair<int, int> > q;
			int input, idx, cnt = 0;
			
			for(int i=0 ; i<N; i++){
				cin >> input;
				q.push(make_pair(i, input));		//q.second 에 입력값 저장
				if(i == M)
					idx = input;					//idx 에 M번째 인덱스 값을 넣는다
				
				else
					cnt++;
			}

			while(1){
				if(q.front().second >= idx && q.front().first != M && cnt > 0){
					q.pop();
					answer++;
					cnt--;
				}

				else if(q.front().second == idx && q.front().first == M || cnt == 0) break;
				
				else{
					q.push(q.front());
					q.pop();
					answer++;
					cnt--;
				}
			}
		}

		cout << answer << "\n";
	}
}

/*
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(void){
	
	int TestCase;
	cin >> TestCase;

	for(int i=0; i<TestCase; i++){
		//queue<pair<int, int> > q;
		priority_queue<int> q;
		int N, M;
		cin >> N >> M;
		
		if(N == 1){
			cout << "1" << "\n";
			break;
		}
		
		int input, idx,answer = 0;
		for(int j=0; j<N; j++){
			cin >> input;
			q.push(input);
			if(j = M)
				idx = input;
		}

		
		for(int j=0; j<N; j++){
			if(q.front() > idx){
				q.pop();
				answer++;
			}
			
		}
	}
}*/
