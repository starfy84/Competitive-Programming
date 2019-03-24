import java.io.BufferedReader;
import java.io.InputStreamReader;
public class aplusb {

	public static void main(String[] args) throws java.lang.Exception {
		
		
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		
		int times = Integer.parseInt(in.readLine());
		int[] s2 = new int[times];
		for(int x = 0;x<times;x++)
		{
			String[] s1 = in.readLine().split(" ");
			int a = Integer.parseInt(s1[0]);
			int b = Integer.parseInt(s1[1]);
			s2[x]=a+b;
		}
		for (int x=0;x<times;x++)
		{
			System.out.println(s2[x]);
		}
		
	}

}