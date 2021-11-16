import java.util.Scanner;

public class Q11022{

	public static void main(String[] args){
		
		int T;
		Scanner sc = new Scanner(System.in);

		T = sc.nextInt();

		for(int i=1; i<=T; i++){
			int A = sc.nextInt();
			int B = sc.nextInt();

			System.out.println("Case #" + i + ": " + A + " + " + B + " = " + (A+B));
		}
	}
}
