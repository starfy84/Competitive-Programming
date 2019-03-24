import java.io.*;
import java.util.*;

public class lcc18c2j4 {
	StringTokenizer st;
	BufferedReader in;

	public lcc18c2j4() throws IOException {
		in = new BufferedReader(new InputStreamReader(System.in));
		long n = readLong();
		for(int x = 0 ;x < n ;x++)
		{
			String quadd = read().replaceAll("\\bx\\^2\\b","1").replace("x^2", "").replaceAll("\\bx\\b", "1").replace("x", "").replace("=0","");
			quadd=quadd.charAt(0) + quadd.substring(1).replace("-","+-");
			String[] quad = quadd.split("\\+");
			long r1 = readLong() ,r2 = readLong();
			if(quadd.contains("a"))
			{
				long b = Long.parseLong(quad[1]) *r1;
				long c = Long.parseLong(quad[2]);
				long a = -(b+c)/(r1*r1);
				System.out.println(a);
			}
			else if(quadd.contains("b"))
			{
				long a = Long.parseLong(quad[0]) * r1 * r1;
				long c = Long.parseLong(quad[2]);
				long b = -(a+c)/(r1);
				System.out.println(b);
			}
			else
			{
				long a = Long.parseLong(quad[0]) *r1 * r1;
				long b = Long.parseLong(quad[1]) * r1;
				long c = -(a+b);
				System.out.println(c);
			}
		}
	}

	public static void main(String[] args) throws IOException {
		new lcc18c2j4();

	}

	private String read() throws IOException {
		if (st == null || !st.hasMoreTokens())
			st = new StringTokenizer(in.readLine().trim());
		return st.nextToken();
	}

	private long readLong() throws IOException {
		return Long.parseLong(read());
	}
	
	private int readInt() throws IOException{
		return Integer.parseInt(read());
	}


}