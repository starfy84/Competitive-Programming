import java.io.*;
import java.util.*;
public class gi18j2
{
    public static void main (String[] args) throws IOException
    {
	BufferedReader in = new BufferedReader (new InputStreamReader (System.in));
	String line = in.readLine ();
	int[] order = new int [3];
	int num = Integer.parseInt (line);
	line = in.readLine ();
	String[] parts = line.split (" ");
	int add = Integer.parseInt (parts [0]);
	order [0] = Integer.parseInt (parts [1]);
	line = in.readLine ();
	parts = line.split (" ");
	int sub = Integer.parseInt (parts [0]);
	order [1] = Integer.parseInt (parts [1]);
	line = in.readLine ();
	parts = line.split (" ");
	int mult = Integer.parseInt (parts [0]);
	order [2] = Integer.parseInt (parts [1]);


	for (int n = 1 ; n < 4 ; n++)
	{
	    for (int i = 0 ; i < 3 ; i++)
	    {
		if (order [i] == n)
		{
		    if (i == 0)
		    {
			num = num + add;
		    }
		    else if (i == 1)
		    {
			num = num - sub;
		    }
		    else
		    {
			num = num * mult;
		    }
		}
	    }
	}
	System.out.println (num);
    }
}