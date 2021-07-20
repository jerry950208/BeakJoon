/*

*/
#include <iostream>

using namespace std;

int main(){
	
	int N,result = 0;
	char num;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> num;
		result += num-48;
	}

	cout << result << endl;
}
