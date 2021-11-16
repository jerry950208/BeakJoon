import java.util.Scanner;

public class Q1110{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		sc.close();
		
		int answer = N;
		int cnt = 0;
		
		while(true){

			answer = (answer / 10 + answer % 10) % 10 + (answer % 10) * 10;
			cnt++;
		
			if(answer == N)
				break;
		}

		System.out.println(cnt);
	}
}
