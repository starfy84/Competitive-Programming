import java.io.*;

public class nccc3j1 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int[] arr = new int[n];
		String inp="";
		int index=0;
		for(int x = 0 ;x < n ;x++)
			if(!(inp=in.readLine()).equals("0"))
				arr[index++]=Integer.parseInt(inp);
		int out=0;
		for(int x =0; x <index;x++)
			out+=arr[x];
		System.out.println(out);
	}
}