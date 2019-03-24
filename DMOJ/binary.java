import java.io.*;
import java.util.*;
public class binary {
	public static void main(String[] args) throws java.lang.Exception
	{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int times = Integer.parseInt(in.readLine());
		String[] arr = new String[times];
		for(int x = 0;x<times;x++)
		{
			arr[x] = in.readLine();
		}
		
		for(int x = 0 ; x<times;x++)
		{
			int num = Integer.parseInt(arr[x]);
			String bin = Integer.toBinaryString(num);
			while(bin.length()%4 != 0)
			{
				bin = "0"+bin;
			}
			String temp="";
			for(int y = bin.length()-5;y>=0;y-=4)
			{
				bin = bin.substring(0, y+1)+" "+bin.substring(y+1);
			}
			System.out.println(bin);
		}
	}
}