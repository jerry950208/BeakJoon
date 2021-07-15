/*
	더하기 사이클
	Ex) 26 -> (2 + 6 = 8) 새로운수 68
		68 -> (6 + 8 = 14) 새로운수 84
		84 -> (8 + 4 = 12) 새로운수 42
		42 -> (4 + 2 = 6) 새로운수 26
		더하기 사이클 = 4
*/

#include <iostream>

using namespace std;

int main(){
	
	int num,temp;
	int cnt = 0;
	cin >> num;
	
	temp = num;
	
	while(1){
		
		if(temp == num && cnt != 0)
			break;

		temp = (temp / 10 + temp % 10) % 10 + (temp % 10) * 10;
		cout << temp << "\n";
		cnt ++;
		
	}
	
	cout << cnt << "\n";

	return 0;
}
