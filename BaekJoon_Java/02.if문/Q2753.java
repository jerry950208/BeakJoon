import java.util.Scanner;

public class Q2753{
	
	public static void main(String[] args){
		
		int n;
		Scanner sc = new Scanner(System.in);

		n = sc.nextInt();

		if(n %4 == 0 && (n % 100 != 0 || n % 400 == 0))
			System.out.println("1");

		else
			System.out.println("0");
	}
}
