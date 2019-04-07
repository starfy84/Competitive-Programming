import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class P2 {
	public static int sort(int[] arr) {
		int oddN = arr.length / 2;
		int evenN = arr.length - oddN;
		int[] odd = new int[oddN];
		int[] even = new int[evenN];
		for (int x = 0, y = 0; x < arr.length; x += 2, y++)
			even[y] = arr[x];
		for (int x = 1, y = 0; x < arr.length; x += 2, y++)
			odd[y] = arr[x];
		Arrays.sort(odd);
		Arrays.sort(even);
		for (int x = 0, y = 0; x < arr.length; x += 2, y++)
			arr[x] = even[y];
		for (int x = 1, y = 0; x < arr.length; x += 2, y++)
			arr[x] = odd[y];
		for (int x = 0; x < arr.length - 1; x++) {
			if (arr[x] > arr[x + 1])
				return x;
		}
		return -1;
	}

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int times = Integer.parseInt(in.readLine());
		for (int x = 1; x <= times; x++) {
			int size = Integer.parseInt(in.readLine());
			int arr[] = new int[size];
			String[] inp = in.readLine().split(" ");
			for (int y = 0; y < arr.length; y++)
				arr[y] = Integer.parseInt(inp[y]);
			int oup = sort(arr);
			System.out.println("Case #" + x + ": " + (oup == -1 ? "OK" : oup));
		}
	}
}