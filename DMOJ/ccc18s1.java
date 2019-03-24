import java.io.*;
import java.util.*;

public class ccc18s1 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int[] arr = new int[n];
		List<Long> arg = new ArrayList<Long>();
		for (int x = 0; x < n; x++)
			arr[x] = Integer.parseInt(in.readLine());
		Arrays.sort(arr);
		for (int x = 1; x < arr.length - 1; x++)
			arg.add((long)Math.abs(arr[x] - arr[x - 1]) + (long)Math.abs(arr[x + 1] - arr[x]));
		Collections.sort(arg);
		if(arg.get(0)%2==0)
		    System.out.println(arg.get(0)/2+".0");
		else
		    System.out.println(arg.get(0)/2 + ".5");

	}
}