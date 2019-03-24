import java.io.*;
import java.util.*;

public class odd {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int times = Integer.parseInt(in.readLine());
		int num = 0;
		for (int x = 0; x < times; x++)
			num ^= Integer.parseInt(in.readLine());
		System.out.println(num);
	}
}