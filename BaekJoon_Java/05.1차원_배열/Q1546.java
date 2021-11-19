import java.util.Scanner;
import java.util.Arrays;

public class Q1546{

        public static void main(String[] args){

                Scanner in = new Scanner(System.in);
                int n = in.nextInt();
                double sum = 0;
                int max = 0;
                int arr[] = new int[n];

                Arrays.fill(arr,0);

                for(int i=0; i<n; i++){
                        arr[i] = in.nextInt();
                        if(arr[i] > max)
                                max = arr[i];
                }

                for(int i=0; i<n; i++){
                        sum += ((100.0 * arr[i])/max);
                }
                System.out.printf("%.5f%n",sum / n);
        }
}

/*
import java.util.Scanner;
import java.util.Arrays;

public class Q1546{

	public static void main(String[] args){

		Scanner in = new Scanner(System.in);
		double arr[] = new double[in.nextInt()];	//입력받은 만큼 배열 생성
		
		for(int i=0; i<arr.length; i++)
			arr[i] = in.nextDouble();
		in.close();

		double sum = 0;
		Arrays.sort(arr);	// 최대값을 구하기 위해 정렬해준다

		for(int i=0; i<arr.length; i++)
			sum += ((arr[i] / arr[arr.length-1]) * 100);

		System.out.println(sum / arr.length);
	}
}*/
