/*
	좌표 정렬하기2
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point{
        int x;
        int y;
};

point p[100001];

int compare(point a, point b);

int main(void){

        int N;
        cin >> N;

        for(int i=0; i<N; i++)
        	cin >> p[i].x >> p[i].y;

        sort(p,p+N,compare);

        for(int i=0; i<N; i++){	
        	cout << p[i].x << " " << p[i].y << "\n";
		}

}

int compare(point a, point b){
        if(a.y == b.y)
                return a.x < b.x;

        return a.y < b.y;
}
