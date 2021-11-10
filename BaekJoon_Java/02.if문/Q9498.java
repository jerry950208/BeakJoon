import java.util.Scanner;

public class Q9498{
	
	public static void main(String[] args){
		
		int num1;
		Scanner sc = new Scanner(System.in);

		num1 = sc.nextInt();

		switch(num1 / 10){

			case 10 :
			case 9 :
				System.out.println("A");
				break;

			case 8 :
				System.out.println("B");
				break;

			case 7 :
				System.out.println("C");
				break;

			case 6 : 
				System.out.println("D");
				break;

			default :
				System.out.println("F");
				break;
		}
	}
}
