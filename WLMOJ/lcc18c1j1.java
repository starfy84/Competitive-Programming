import java.io.*;
import java.util.*;

public class lcc18c1j1 {
	StringTokenizer st;
	BufferedReader in;

	public lcc18c1j1() throws IOException {
		in = new BufferedReader(new InputStreamReader(System.in));
		int n = readInt(), max = readInt();
		for(int x = 0; x < n-1; x++) {
			int h = readInt();
			if(max < h)
				max = h;
		}
		System.out.println(max
				);
	}

	public static void main(String[] args) throws IOException {
		new lcc18c1j1();

	}

	private String read() throws IOException {
		if (st == null || !st.hasMoreTokens())
			st = new StringTokenizer(in.readLine().trim());
		return st.nextToken();
	}

	private int readInt() throws IOException {
		return Integer.parseInt(read());
	}


}