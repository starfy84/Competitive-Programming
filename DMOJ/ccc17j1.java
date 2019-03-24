import java.io.*;

public class ccc17j1 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String a=in.readLine(),b=in.readLine();
		char c=a.charAt(0),C=b.charAt(0);
		if(c=='-'&&C=='-')
			System.out.println("3");
		else if(c=='-'&&C!='-')
			System.out.println("2");
		else if(c!='-'&&C=='-')
			System.out.println("4");
		else
			System.out.print("1");

	}
}