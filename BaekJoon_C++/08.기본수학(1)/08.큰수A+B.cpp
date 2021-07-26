/*
	큰수 A+B
	두 정수를 입력받은 다음 A + B를 출력하는 프로그램을 작성하라
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string n1,n2,res,ans;
	cin >> n1 >> n2;

	int car = 0;
	int onesize = n1.size();
	int twosize = n2.size();

	while(onesize > 0 || twosize > 0){
		
		int nn1 = 0;
		
		if(onesize > 0)
			nn1 = n1[--onesize] - '0';

		int nn2 = 0;
			
		if(twosize > 0)
			nn2 = n2[--twosize] - '0';

		int cur = nn1 + nn2 + car;
		car = cur / 10;
		cur %= 10;

		char ccar = cur + '0';
		res += ccar;
	}

	if(car > 0)
		res += car + '0';

	for(int i=res.length()-1; i>=0; i--)
		cout << res[i];
}
