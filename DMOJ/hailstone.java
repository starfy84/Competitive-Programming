import java.io.*;

public class hailstone {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(in.readLine()),count=0;
		while(num!=1)
		{
			num = (num%2==0)?num/2:(3*num)+1;
			count++;
		}
		System.out.println(count);
		

	}
}