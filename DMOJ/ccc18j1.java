import java.io.*;

public class ccc18j1 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String s="";
		if(((s=in.readLine()).equals("8")||s.equals("9"))&&(in.readLine().equals(in.readLine()))&&((s=in.readLine()).equals("8")||s.equals("9")))
			System.out.println("ignore");
		else
			System.out.println("answer");
	}
}