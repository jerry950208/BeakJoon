import java.util.Scanner;

public class Q2562{

	public static void main(String[] args){

		int Arr[] = new int[10];
		Scanner sc = new Scanner(System.in);
		
		int max = 0;
		int tmp = 0;
		for(int i=1; i<=9; i++){
			Arr[i] = sc.nextInt();

			if(Arr[i] > max){
				max = Arr[i];
				tmp = i;
			}
		}

		System.out.println(max);
		System.out.println(tmp);
	}
}
