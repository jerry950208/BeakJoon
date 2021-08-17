/*
	Ai의 오큰수는 오른쪽에 있으면서 Ai보다 큰 수중에서 가장 왼쪽에 있는 수를 의미한다(그러한 수가 없는 경우에 오큰수는 -1이다)
	Ex) A = [3, 5, 2, 7] 인경우 NGE(1) = 5, NGE(2) = 7, NGE(3) = 7, NGE(4) = -1
*/

/*	시간초과
#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main(void){
	
	int N, arr[1000000];
	cin >> N;

	for(int i=0; i<N; i++)
		cin >> arr[i];

	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			if(arr[i] < arr[j]){
				s.push(arr[j]);
				break;
			}
		}
		if(s.empty())
			cout << "-1 ";
		
		else{
			cout << s.top() << " ";
			s.pop();
		}
	}
	cout << "\n";
}*/
