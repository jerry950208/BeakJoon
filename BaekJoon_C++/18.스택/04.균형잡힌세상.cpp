/*
	균형잡힌세상
	어떤 문자열이 주어졌을 때, 괄호들이 균형이 잘 맞춰져 있는지 판단하는 프로그램
	
	문자열에 포함되는 괄호는 소괄호와 대괄호 2종류이고, 문자열이 균형을 이루는 조건은 아래와 같다
	
	1. 모든 왼쪽 소괄호는 오른쪽 소괄호와만 짝을 이뤄야 한다
	2. 모든 왼쪽 대활호는 오른쪽 대괄호와만 짝을 이뤄야 한다
	3. 모든 오른쪽 괄호들은 자신과 짝을 이룰 수 있는 왼쪽 괄호가 존재한다
	4. 모든 괄호들의 짝은 1:1 매칭만 가능하다. 즉 괄호 하나가 둘 이상의 괄호와 짝지어 지지 않는다
	5. 짝을 이루는 두 괄호가 있을 때, 그 사이에 있는 문자열도 균형이 잡혀야 한다
	
	* 각 문자열은 영문 알파벳, 공백, 소괄호, 대활호 등으로 이루어져 있으며 길이는 100글자 보다 작거나 같다
	* 입력의 종료조건으로 맨 마지막에 점 하나가 들어온다
*/

/*
So when I die (the [first] I will see in (heaven) is a score list).
[ first in ] ( first out ).
Half Moon tonight (At least it is better than no Moon at all].
A rope may form )( a trail in a maze.
Help( I[m being held prisoner in a fortune cookie factory)].
([ (([( [ ] ) ( ) (( ))] )) ]).
 .
.
*/
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void){
	
	string str;
	getline(cin, str);
	
	
}
