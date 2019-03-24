import java.io.*;
import java.util.*;

public class lcc18c5j3 {
	StringTokenizer st;
	BufferedReader in;

	public lcc18c5j3() throws IOException {
			in = new BufferedReader(new InputStreamReader(System.in));
			int n = readInt();
			int two=0,five=0;
		    for(int y = 0;y<n;y++){
		        int i = readInt();
		        if(i==0) {
		        	two = five = 1;
		        	break;
		        }
		        while(i%2==0) {
		        	two++;
		        	i/=2;
		        }
		        while(i%5==0) {
		        	five++;
		        	i/=5;
		        }
		    }
		    System.out.println(Math.min(two, five));
	}

	public static void main(String[] args) throws IOException {
		new lcc18c5j3();

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

	private int[] readArrInt(int size) throws IOException {
		int[] arr = new int[size];
		for (int x = 0; x < size; x++) {
			arr[x] = readInt();
		}
		return arr;
	}

	private String[][] readMat(int rows, int cols) throws IOException {
		String[][] mat = new String[rows][cols];
		for (int x = 0; x < rows; x++) {
			mat[x] = readArr(cols);
		}
		return mat;
	}

	private int[][] readMatInt(int rows, int cols) throws IOException {
		int[][] mat = new int[rows][cols];
		for (int x = 0; x < rows; x++) {
			mat[x] = readArrInt(cols);
		}
		return mat;
	}
}