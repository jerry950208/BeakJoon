import java.util.Scanner;
import java.util.Arrays;

public class Q10818{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);	
		int N = sc.nextInt();	
		int Arr[] = new int[N];

		for(int i=0; i<N; i++)
			Arr[i] = sc.nextInt();
		
		sc.close();
		Arrays.sort(Arr);

		System.out.println(Arr[0] + " " + Arr[N-1]);
	}

}
