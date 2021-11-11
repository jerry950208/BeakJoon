import java.util.Scanner;

public class Q2884{

	public static void main(String[] args){
		
		int H;
		int M;
		Scanner sc = new Scanner(System.in);

		H = sc.nextInt();
		M = sc.nextInt();

		if(M >= 45)
			System.out.println(H + " " + (M - 45));

		else{

			if(H == 0)
				System.out.println("23 " + (M + 15));

			else
				System.out.println((H - 1) + " " + (M + 15));
		}
	}
}
