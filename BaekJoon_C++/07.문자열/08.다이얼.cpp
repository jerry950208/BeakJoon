/*
	
*/
#include <iostream>

using namespace std;

int main(){
	
	string dial;
	int cnt =  0;
	
	cin >> dial;

	for(int i=0; i<dial.length(); i++){
		if(dial[i] <= 'C')
			cnt += 2;
		else if(dial[i] <= 'F')
			cnt +=3;
		else if(dial[i] <= 'I')
			cnt += 4;
		else if(dial[i] <= 'L')
			cnt += 5;
		else if(dial[i] <= 'O')
			cnt += 6;
		else if(dial[i] <= 'S')
			cnt += 7;
		else if(dial[i] <= 'V')
			cnt += 8;
		else
			cnt += 9;
	}
	cout << cnt + dial.length() << endl;
	
}
