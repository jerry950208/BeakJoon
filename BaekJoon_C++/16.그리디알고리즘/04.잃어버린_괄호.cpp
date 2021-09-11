/*
	잃어버린 괄호
	
	양수와 +, - 와 괄호로 식을 만든후 괄호를 모두 지웠다
	그 후 괄호를 적절히 쳐서 이 식의 값을 최소로 만들려고 한다
	괄호를 적절히 쳐서 이 식의 값을 최소로 만드는 프로그램을 작성하시오
*/
#include <iostream>
#include <string>
using namespace std;

int main(void){
	
	string input, num;
	cin >> input;

	int result = 0;
	bool flag = false;

	for(int i=0; i<= input.length(); i++){
		
		if(input[i] == '-' || input[i] == '+' || i == input.length()){
			if(flag){
				result -= stoi(num);
				num = "";
			}
			else{
				result += stoi(num);
				num = "";
			}
		}

		else
			num += input[i];
		
		if(input[i] == '-')
			flag = true;
	}
	cout << result << "\n";
}
