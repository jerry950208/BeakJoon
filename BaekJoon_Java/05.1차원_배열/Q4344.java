import java.util.Scanner;
import java.util.Arrays;

public class Q4344{

	public static void main(String[] args){

		Scanner in = new Scanner(System.in);
		int input = in.nextInt();
		
		for(int test=0; test<input; test++){
				
			int student = in.nextInt();
			int[] score = new int[student];
			int cnt = 0;
			double avg = 0.0, result = 0.0;

			for(int i=0; i<student; i++){

				score[i] = in.nextInt();
				avg += score[i];
			}

			avg /= student;

			for(int i=0; i<student; i++){

				if(avg < score[i])
					cnt++;
			}
			
			result = cnt / student;

			System.out.printf("%.3f%\n",result);
		}
	}
}
