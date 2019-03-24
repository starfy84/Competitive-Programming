import java.io.*;
import java.util.*;

public class coci14c2p2 {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int times = Integer.parseInt(in.readLine());
		char arr[] = new char[21];
		String input = "";
		for (int x = 0; x < times*2-1; x++) {
			input = in.readLine();
			char[] temp = input.toCharArray();
			for (int y = 0; y < input.length(); y++)
				arr[y] ^= temp[y];
		}
		for (int x = 0; x < arr.length; x++)
			if (arr[x] != 0)
				System.out.print(arr[x]);
	}
}