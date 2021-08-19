/*
	덱

	정수를 저장하는 덱을 구현한다음, 입력으로 주어지는 명령을 처리하는 프로그램 작성
	* push_front X : 정수 X를 덱의 앞에 넣는다
	* push_back X : 정수 X를 덱의 뒤에 넣는다
	* pop_front : 덱의 가장앞에 있는 수를 빼고, 그 수를 출력한다(덱에 들어있는 정수가 없는 경우 -1 출력)
	* pop_back : 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다(덱에 들어있는 정수가 없는 경우 -1 출력)
	* size : 덱에 들어있는 정수의 개수를 출력한다
	* empty : 덱이 비어있으면 1을 아닐경우 0을 출력한다
	* front : 덱의 가장 앞에 있는 정수를 출력한다(덱에 들어있는 정수가 없는 경우 -1 출력)
	* back : 덱의 가장 뒤에 있는 정수를 출력한다(덱에 들어있는 정수가 없는 경우 -1 출력)
*/
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(void){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	string str;
	deque<int> dq;
	cin >> N;

	for(int i=0; i<N; i++){
		
		cin >> str;
		if(str == "push_front"){
		
			int num;
			cin >> num;
			dq.push_front(num);
		}

		else if(str == "push_back"){
			
			int num;
			cin >> num;
			dq.push_back(num);
		}

		else if(str == "pop_front"){
			if(dq.empty())
				cout << "-1" << "\n";
			else{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}

		else if(str == "pop_back"){
			
			if(dq.empty())
				cout << "-1" << "\n";
			else{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}

		else if(str == "size"){
			cout << dq.size() << "\n";
		}

		else if(str == "empty"){
			
			if(dq.empty())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}

		else if(str == "front"){
			
			if(dq.empty())
				cout << "-1" << "\n";
			else
				cout << dq.front() << "\n";
		}

		else if(str == "back"){
			
			if(dq.empty())
				cout << "-1" << "\n";
			else
				cout << dq.back() << "\n";
		}
	}
}
