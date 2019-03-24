import java.io.*;

public class nccc2j1 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] read = in.readLine().split(" ");
		int a = Integer.parseInt(read[0]),b=Integer.parseInt(read[2]),c=Integer.parseInt(read[4]);
		if(a+b==c)
			System.out.println("True");
		else
			System.out.println("False");

	}
}