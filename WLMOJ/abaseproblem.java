import java.io.*;
import java.util.*;

public class abaseproblem {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int b = Integer.parseInt(in.readLine());
		long x = Long.parseLong(in.readLine(),b), y = Long.parseLong(in.readLine(),b); 
		System.out.println(Long.toString(x+y,b));
		System.out.println(Long.toString(x*y,b));
	}
}