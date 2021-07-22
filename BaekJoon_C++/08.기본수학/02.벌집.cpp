/*
	벌집

*/
#include <iostream>

using namespace std;

int main(){
	
	int N,cnt = 1;
	cin >> N;

	for(int i=1; i<1000000000; i++){
		
		if(N <= cnt){
			cout << i << endl;
			break;
		}

		cnt += 6 * i;
	}
}
