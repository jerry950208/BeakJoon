import java.util.Scanner;
import java.util.Arrays;

public class Q8958{

	public static void main(String[] args){

		Scanner in = new Scanner(System.in);
		int T = in.nextInt();

		for(int i=0; i<T; i++){
			
			String scores;
			int cnt = 0;
			int result = 0;
			
			// Scanner에서 char를 바로 입력받는것 없다
			// 따라서 Scanner.next()를 통해 입력받은 다음, String.charAt()으로 char를 꺼내면 된
			scores = in.next().charAt(0);			//입력받은 다음, 첫번째 char 꺼내기
			//scores = in.next().trim().charAt(0);	//공백을 제거한 다음 첫번째 char꺼내
			for(int j=0; j<scores.length; j++){
				
				if(scores[j] == 'O')
					result += ++cnt;

				else
					cnt = 0;
			}

			System.out.println(result);
		}

	}
}
