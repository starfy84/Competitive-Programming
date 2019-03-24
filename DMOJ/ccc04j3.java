import java.io.*;

public class ccc04j3 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int one=Integer.parseInt(in.readLine()),two = Integer.parseInt(in.readLine());
		String n[] = new String[one],m[] = new String[two];
		for(int x = 0 ;x<one;x++)
			n[x] = in.readLine();
		for(int x = 0 ;x<two;x++)
			m[x] = in.readLine();
		for(int x = 0 ; x<one;x++)
			for(int y = 0 ; y < two ; y++)
				System.out.println(n[x]+" as "+m[y]);
	}
}