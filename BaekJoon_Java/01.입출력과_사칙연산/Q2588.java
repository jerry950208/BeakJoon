import java.util.Scanner;

public class Q2588{
	
	public static void main(String[] args){
		
		int n1;
		int n2;
		Scanner sc = new Scanner(System.in);

		n1 = sc.nextInt();
		n2 = sc.nextInt();

		System.out.println(n1 * (n2 % 10));
		System.out.println(n1 * ((n2 /10)%10));
		System.out.println(n1 * (n2 / 100));
		System.out.println(n1 * n2);
	}
}
