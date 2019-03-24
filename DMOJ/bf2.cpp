import java.io.*;
import java.util.*;
public class DMPG {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String str = in.readLine();
		int k = Integer.parseInt(in.readLine());
	    String min =str.substring(0,k);
		while(k!=str.length()) {
			for(int x = 0 ;x<str.length()-k;x++)
				if(str.substring(x,x+k).compareTo(min)<0)
				    min = str.substring(x,x+k);
			k++;
		}
		System.out.println(min);

	}
}