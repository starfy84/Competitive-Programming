import java.io.*;
public class boolean {

	public static void main(String[] args)throws java.lang.Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int countNot=0;
		String[] s = (in.readLine().split(" "));
		for(int x=0;x<s.length;x++)
		{
			if(s[x].charAt(0)=='n')
			{
				countNot++;
			}
		}
		if(countNot%2==1)
		{
			if(s[s.length-1].charAt(0)=='F')
				System.out.println("True");
			else
				System.out.println("False");
			
		}
		else
		{
			System.out.println(s[s.length-1]);
		}
		

	}

}