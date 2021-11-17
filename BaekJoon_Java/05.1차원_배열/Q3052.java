//HashSet사용
/*
	HashSet은 자바 Collection중 Set의 파생 클래스이다
	set을 집합이라고 생각하면 되는데 HashSet의 경우 몇가지 특징이 있다

	1. 중복되는 원소를 넣을 경우 하나만 저장한다. 즉, 중복원소를 허용하지 않는다
	2. HashSet은 순서 개념이 없다. 따라서 Collections.sort() 메소드를 사용할 수 없다. 만약 정렬을 하고 싶다면 리스트로 변환 후 정렬해야 한다.

	*HashSet을 이용하면 자연수럽게 나머지 값이 HashSet원에 이미 저장이 되어 있어 중복일 경우 저장이 되지 않고 HashSet에 없으면 저장한다
*/

import java.util.Scanner;
import java.util.HashSet;

public class Q3052{

	public static void main(String[] args){

		Scanner in = new Scanner(System.in);
		HashSet<Integer> h = new HashSet<Integer>();

		for(int i=0; i<10; i++){
			h.add(in.nextInt() % 42);
		}

		in.close();
		System.out.println(h.size());
	}
}
