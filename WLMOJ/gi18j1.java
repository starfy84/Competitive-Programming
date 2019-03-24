import java.io.*;
import java.util.*;
public class Big
{
    public static void main (String[] args) throws IOException
    {
		BufferedReader in = new BufferedReader (new InputStreamReader (System.in));
		String line = in.readLine ();
		int not = line.length () - line.replaceAll ("o", "").length ();
		int very = line.length () - line.replaceAll ("r", "").length ();
	    while(very > not || not % 2 == 0){
	        System.out.print("not ");
	        not++;
	    }
	    while(very < not){
	        System.out.print("very ");
	        very++;
	    }

    }
}