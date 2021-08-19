/*
	요세푸스 문제 0

	1부터 N까지 원을 이루며 있다고 할때, 양의정수 K가 주어진다
	그 후 순서대로 K번째 숫자를 제거한
	숫자 하나가 제거되면 나머지 숫자들로 이 과정을 계속한다
	
	Ex) (7, 3) 이 주어질때 결과는 <3, 6, 2, 7, 5, 1, 4> 이다
*/
#include <iostream>
#include <queue>
using namespace std;

int main(void){
	
	int N, K;
	cin >> N >> K;

	queue<int> q;
	for(int i=1; i<=N; i++)
		q.push(i);

	int cnt = 1;
	
	cout << "<";
	while(!q.empty()){
		
		if(cnt == K){
			
			if(q.size() == N){
				if(N == 1)
					cout << q.front();
				else
					cout << q.front() << ",";
			}
			else if(q.size() != 1)
				cout << " " << q.front() << ",";
			else
				cout << " " << q.front();
			
			q.pop();
			cnt = 1;
		}

		else{
			
			int data = q.front();
			q.pop();
			q.push(data);
			cnt++;
		}
	}

	cout << ">\n";
}
