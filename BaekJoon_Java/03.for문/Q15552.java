import java.io.BufferedReader;		//Scanner와 유사하다
import java.io.BufferedWriter;		//System.out.println(); 과 유사하다
import java.util.Scanner;

public class Q15552{

	public static void main(String[] args){

		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));	//선언
		BufferedWriter bw = new BufferedWriter(new outputStreamWriter(System.out));
		Scannser sc = new Scanner(System.in);

		int T = sc.nextInt();
		int sum;
		int A;
		int B;

		for(int i=0; i<T; i++){

			A = sc.nextInt();
			B = sc.nextInt();

			sum = Integer.pareseInt(bf.readLine());
		}

		bw.write(sum + "\n");
		bw.flush();
		bw.close();
		}
	}
}
