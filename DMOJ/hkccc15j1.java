import java.io.*;

public class hkccc15j1 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		in.readLine();
		String[] a = in.readLine().split(" "),b = in.readLine().split(" ");
		int aC=0,bC=0;
		for(int x = 0 ; x<a.length;x++)
		{
			if((a[x].equals("paper")&&b[x].equals("rock"))||(a[x].equals("rock")&&b[x].equals("scissors")||(a[x].equals("scissors")&&b[x].equals("paper"))))
				aC++;
			else if((b[x].equals("paper")&&a[x].equals("rock"))||(b[x].equals("rock")&&a[x].equals("scissors")||(b[x].equals("scissors")&&a[x].equals("paper"))))
				bC++;
		}
		System.out.println(aC+ " "+bC);
		

	}
}