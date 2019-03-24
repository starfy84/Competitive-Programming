import java.util.*;
import java.io.*;
public class vmss7wc16c1p2 {

	public static void main(String[] args)throws java.lang.Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int times = Integer.parseInt(in.readLine());
		int[] arr = new int[65];
		boolean answered = false;
		for(int x = 0 ; x<arr.length-1;x++)
		{
			arr[x]=0;
		}
		for(int x = 0 ; x<times;x++)
		{
			int num = Integer.parseInt(in.readLine());
			arr[num] +=1;
		}
		for(int x = arr.length-2; x >=0;x--)
		{
			if(arr[x]==x)
			{
				System.out.println(x);
				answered = true;
				break;
			}
			
		}
		if (answered == false && arr[0] >= 1 )
		{
			System.out.println("Paradox!");
		}

	}

}