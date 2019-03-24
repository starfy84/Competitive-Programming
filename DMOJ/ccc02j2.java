import java.io.*;

public class ccc02j2 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String s;
		while (true) {
			s = in.readLine();
			if (s.equals("quit!"))
				break;
			if (s.length() > 4 && s.charAt(s.length() - 3) != 'a' && s.charAt(s.length() - 3) != 'e'
					&& s.charAt(s.length() - 3) != 'i' && s.charAt(s.length() - 3) != 'o'
					&& s.charAt(s.length() - 3) != 'u' && s.toString().endsWith("or"))
				s = s.substring(0, s.length() - 1) + "u" + s.charAt(s.length() - 1);
			System.out.println(s);
		}

	}
}