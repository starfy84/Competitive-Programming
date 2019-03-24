import java.io.*;

public class bts16p1 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String str = in.readLine();
		int num = 0;
		for (int x = 0; x < str.length(); x++)
			if (str.charAt(x) != ' ')
				if (Character.toUpperCase(str.charAt(x)) == str.charAt(x))
					num++;
				else
					num--;
		if (num > 0)
			System.out.println(str.toUpperCase());
		else if (num < 0)
			System.out.println(str.toLowerCase());
		else
			System.out.println(str);

	}
}