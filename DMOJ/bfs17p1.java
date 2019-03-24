import java.io.*;
import java.util.*;

public class bfs17p1 {
	public static void main(String[] args) throws java.lang.Exception{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int times=0;
		try {
		String input = in.readLine();
			int loop = Integer.parseInt(input);
			String[] arr = in.readLine().split(" ");
			for(int x=0;x<arr.length;x++)
			{
			    if(arr[x].length()<=10)
					times++;
			}
		}catch(Exception e)
		{
			
		}
		System.out.println(times);
	}
}