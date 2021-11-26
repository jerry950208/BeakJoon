import java.util.Scanner;
import java.util.Arrays;

public class Q8958{

	public static void main(String[] args){

		Scanner in = new Scanner(System.in);
		int input = in.nextInt();

		for(int i=0; i<input; i++){
			
			int result = 0;
			int cnt = 0;
			String str = in.next();
			
			for(int j=0; j<str.length(); j++){
				
				if(str.charAt(j) == 'O')
					cnt++;
				else
					cnt = 0;
				
				result += cnt;
				//System.out.printf("j = %d\t cnt = %d\t result = %d\n", j, cnt, result);
			}

			System.out.println(result);
		}
	}
}
