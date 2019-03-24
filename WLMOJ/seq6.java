import java.io.*;
import java.util.*;

public class seq6 {
	StringTokenizer st;
	BufferedReader in;

	public seq6() throws IOException {
		in = new BufferedReader(new InputStreamReader(System.in));
		int n =readInt();
		Set<Integer> s = readSetInt(n);
		System.out.println(s.size()!=n?"YES":"NO");
	}

	public static void main(String[] args) throws IOException {
		new seq6();

	}

	private String read() throws IOException {
		if (st == null || !st.hasMoreTokens())
			st = new StringTokenizer(in.readLine().trim());
		return st.nextToken();
	}

	private int readInt() throws IOException {
		return Integer.parseInt(read());
	}

	private String[] readArr(int size) throws IOException {
		String[] arr = new String[size];
		for (int x = 0; x < size; x++) {
			arr[x] = read();
		}
		return arr;
	}

	private Set<Integer> readSetInt(int size) throws IOException {
		Set<Integer> arr = new HashSet<Integer>();
		for (int x = 0; x < size; x++) {
			arr.add(readInt());
		}
		return arr;
	}

}