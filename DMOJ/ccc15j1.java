import java.io.*;
public class ccc15j1 {
	static int specialMonth = 2;
	static int specialDay = 18;
	
	public static void main(String[] args) throws java.lang.Exception{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int month = Integer.parseInt(in.readLine());
		int day = Integer.parseInt(in.readLine());
		if (month < specialMonth)
		{
			System.out.println("Before");
		}else if(month>specialMonth)
		{
			System.out.println("After");
		}else
		{
			if(day<specialDay)
				System.out.println("Before");
			else if (day>specialDay)
				System.out.println("After");
			else
				System.out.println("Special");
		}
		
	}

}