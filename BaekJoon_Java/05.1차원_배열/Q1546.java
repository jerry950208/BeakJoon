import java.util.Scanner;
import java.util.Arrays;

public class Q1546{

	public static void main(String[] args){

		Scanner in = new Scanner(System.in);
		int subject = in.nextInt();
		int[] score = new int[subject];
		double sum = 0;
		int max = 0;

		for(int i=0; i<subject; i++){
			score[i] = in.nextInt();
			if(max < score[i])
				max = score[i];
		}

		for(int i=0; i<subject; i++)
		
			sum += ((100.0 * score[i]) / max);

		System.out.println(sum / subject);
	}
}
