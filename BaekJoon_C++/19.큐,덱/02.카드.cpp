/*
	카드 2
	N장의 카드가 있다(1부터 N까지) 
	1번카드가 제일 위에, N번 카드가 제일 아래인 상태로 순서대로 카드가 놓여있다
	아래 동작을 카드가 한 장 남을때 까지 반복하게 된다
	우선 제일 위에있는 카드를 바닥에 버리고, 그 다음 제일 위에있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다
	
	첫째 줄에 남게 되는 카드의 번호를 출력한다
*/
#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main(void){
	
	int N;
	cin >> N;
	
	for(int i=1; i<=N; i++)
		q.push(i);
	
	for(int i=0; i<N; i++){	
		
		if(q.size() == 1)
			break;
		
		q.pop();
		q.push(q.front());
		q.pop();
	}
	
	cout << q.front() << "\n";
}
