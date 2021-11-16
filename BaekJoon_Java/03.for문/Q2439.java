import java.util.Scanner;

public class Q2439{

	public static void main(String[] args){

		int N;
		Scanner sc = new Scanner(System.in);

		N = sc.nextInt();

		for(int i=1; i<=N; i++){
	
			for(int j=1; j<= N-i; j++)
				System.out.print(" ");

			for(int j=1; j<=i; j++)
				System.out.print("*");

			System.out.println();
		}
	}
}
