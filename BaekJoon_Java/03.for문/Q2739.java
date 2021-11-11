import java.util.Scanner;

public class Q2739{
	
	public static void main(String[] args){
	
		int N;
		Scanner sc = new Scanner(System.in);

		N = sc.nextInt();

		for(int i=1; i<=9; i++)
			System.out.println(N + " * " + i + " = " + (N * i));
	}
}
