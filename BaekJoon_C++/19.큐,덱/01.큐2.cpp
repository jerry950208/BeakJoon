/*
	큐2
	정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램 작성

	* push X : 정수 X를 큐에 넣는 연산
	* pop : 큐에서 가장 앞에 있는 정수를 빼고 그 수를 출력한다(큐에 들어있는 정수가 없는 경우에는 -1 출력)
	* size : 큐에 들어있는 정수의 개수를 출력
	* empty :큐가 비어있으면 1, 아니면 0을 출력
	* front : 큐의 가장 앞에 있는 정수를 출력한다(큐에 들어있는 정수가 없을 경우에는 -1 출력)
	* back : 큐의 가장 뒤에 있는 정수 출력(큐에 들어있는 정수가 없는 경우에는 -1 출력)
*/
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(void){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	queue<int> q;
	string str;
	cin >> N;

	for(int i=0; i<N; i++){
		
		cin >> str;

		if(str == "push"){
			int num;
			cin >> num;
			q.push(num);
		}

		else if(str == "pop"){
			if(q.empty())
				cout << "-1" << "\n";
			else{
				cout << q.front() << "\n";
				q.pop();
			}
		}

		else if(str == "size")
			cout << q.size() << "\n";

		else if(str == "empty"){
			if(q.empty())
				cout << "1" << "\n";

			else
				cout << "0" << "\n";
		}

		else if(str == "front"){
			if(q.empty())
				cout << "-1" << "\n";
			else
				cout << q.front() << "\n";
		}

		else if(str == "back"){
			if(q.empty())
				cout << "-1" << "\n";
			else
				cout << q.back() << "\n";
		}
			
		
	}
}
