import java.util.*;
import java.io.*;
public class anct1 {

	public static void main(String[] args)throws java.lang.Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] arr= in.readLine().split(" ");
		int times = Integer.parseInt(arr[0]);
		int goal = Integer.parseInt(arr[1].replace("-", ""));
		String[] sNums = in.readLine().split(" ");
		int[] nNums = new int[sNums.length];
		for(int x = 0; x<sNums.length;x++)
		{
			nNums[x] = Integer.parseInt(sNums[x]);
		}
		Arrays.sort(nNums);
		for (int x = nNums.length-1;x>=0;x--)
		{
			if(goal % nNums[x]==0)
			{
				System.out.println(goal/nNums[x]);
				break;
			}else if(x == 0 && goal % nNums[x] != 0)
			{
				System.out.println("This is not the best time for a trip.");
			}
		}
	}

}