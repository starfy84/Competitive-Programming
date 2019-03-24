import java.awt.*;
import java.io.*;
import java.util.*;
public class vmss15c1p1 {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int a = Integer.parseInt(in.readLine());
		int b = (int) Math.sqrt(a);
		while(a/b != (double)a/b)
			b--;
		System.out.println(2*b+ 2*(a/b));

	}

}