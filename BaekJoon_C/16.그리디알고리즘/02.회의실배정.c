/*
	회의실 배정
	한 개의 회의실이 있는데 이를 사용하고자 하는 N개의 회의에 대하여 회의실 사용표를 만들려고한다
	각 회의 l에 대해 시작시간과 끝나는 시간이 주어져있고, 각 회의가 겹치지않게 하면서
	회의실을 사용할수 있는 회의의 최대개수를 찾아보자
	*회의는 중간에 중단될수 없다
	*한 회의가 끝나는 것과 동시에 다음회의가 시작될수 있다(시작시간과 끝나는 시간이 같을수도있다)
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct arr{
	int start, end;
};

int compare(const void *a, const void *b);

int main(){
	
	int N,cnt = 0, t1, t2, last = 0;

	return 0;
}

int compare(const void *a, const void *b){
}
