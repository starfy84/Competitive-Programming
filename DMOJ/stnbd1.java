import java.io.*;
import java.util.Arrays;

public class stnbd1 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int times = Integer.parseInt(in.readLine());
		int ra=0;
		int[] arr=new int[times];
		for(int x = 0; x<times;x++)
		{
			arr[x] = Integer.parseInt(in.readLine());
		}
		ra = arr[0];
		Arrays.sort(arr);
		if(ra == arr[arr.length-1] && ra != arr[arr.length-2])
			System.out.println("YES");
		else
			System.out.println("NO");
		

	}
}