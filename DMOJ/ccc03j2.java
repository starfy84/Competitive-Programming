import java.io.*;

public class ccc03j2 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int a=0,b=0;
		while (true)
		{
		a=Integer.parseInt(in.readLine());
		if(a==0)
			break;
		b=(int)Math.sqrt(a);
		while(a/b != (double)a/b)
			b++;
		a/=b;
		System.out.println("Minimum perimeter is "+(2*a+2*b)+" with dimensions "+(Math.min(a, b)+" x "+Math.max(a, b)));
		}
	}
}