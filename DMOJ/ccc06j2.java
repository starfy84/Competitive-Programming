import java.io.*;

public class ccc06j2 {

	public static void roll(int a, int b) {
		int x = (b < 10) ? 10 - b :1, y = b>10?9:b, count = 1;
		if (x != a)
			while (true) {
				x++;
				y--;
				count++;
				if (x == a)
					break;
				if (y == 1)
					break;
			}
		if(a+b<10)count=0;
		System.out.println("There " + ((count == 1) ? "is " : "are ") + count
				+ ((count == 1) ? " way to get the sum 10." : " ways to get the sum 10."));
	}

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int m = Integer.parseInt(in.readLine()), n = Integer.parseInt(in.readLine());
		roll(Math.min(m, n), Math.max(m, n));

	}
}