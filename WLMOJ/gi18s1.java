import java.io.*;
import java.util.*;
public class gi18s1
{
    public static void main (String[] args) throws IOException
    {

	BufferedReader in = new BufferedReader (new InputStreamReader (System.in));
	String[] words = in.readLine ().split (" ");
	System.out.print (words [0]);
	String output = "";
	for (int x = 1 ; x < words.length ; x++)
	{
	    output = words [x];
	    for (int y = 0 ; y < x ; y++)
	    {
		if (removePunct (words [y]).equalsIgnoreCase (removePunct (words [x])))
		{
		    output = Integer.toString (y + 1);
		    break;
		}
	    }
	    System.out.print (" " + output);

	}
    }


    public static String removePunct (String word)
    {
	if (word.charAt (word.length () - 1) == '.' || word.charAt (word.length () - 1) == ',')
	{
	    return word.substring (0, word.length () - 1);
	}
	return word;
    }
}