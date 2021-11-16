import java.util.Scanner;

public class Q10951{

	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		
		while(sc.hasNextInt()){	//입력값이 int일때만 true를 반환한다
			int A = sc.nextInt();
			int B = sc.nextInt();

			System.out.println(A + B);
		}

		sc.close();
	}
}
