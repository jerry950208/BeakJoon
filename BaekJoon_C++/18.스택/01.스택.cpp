/*
	스택
	
	정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오

	* push X : 정수 X를 스택에 넣는 연산
	* pop : 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다(만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력)
	* size : 스택에 들어있는 정수의 개수를 출력한다
	* empty : 스택이 비어있으면 1, 아니면 0을 출력한다
	* top : 스택의 가장 위에 있는 정수를 출력한다(만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다)
	
	출력해야하는 명령이 주어질때마다, 한줄에 하나씩 출력한다
*/
#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack<int>S;
 
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        
		//push
		if (str == "push") {
            int x; cin >> x;
            S.push(x);
        }

		//top
        else if (str == "top") {
            if (S.empty())cout << "-1"<<"\n";
            else cout << S.top() << "\n";
        }

		//pop
        else if (str == "pop") {
            if (S.empty())cout << "-1" << "\n";
            else {
                cout << S.top() << "\n";
                S.pop();
            }
        }

		//empty
        else if (str == "empty") {
            cout << S.empty() << "\n";
        }

		//size
        else {
            cout << S.size() << "\n";
        }
    }
    return 0;
}
