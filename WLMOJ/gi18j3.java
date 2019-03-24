import java.io.*;
import java.util.*;
public class gi18j3
{
    public static void main (String[] args) throws IOException
    {
	BufferedReader in = new BufferedReader (new InputStreamReader (System.in));

	int max = Integer.parseInt (in.readLine ());
	int people = Integer.parseInt (in.readLine ());

	int[] wei = new int [people];

	for (int i = 0 ; i < people ; i++)
	{
	    wei [i] = Integer.parseInt (in.readLine ());
	}

	boolean big = false;

	Arrays.sort (wei);

	if (wei [people - 1] > max)
	{
	    big = true;
	}

	int bac = 0;
	int trips = 0;

	for (int i = people - 1 ; i >= 0 ; i--)
	{
	    if (wei [i] <= max && bac < i)
	    {
		if (wei [i] + wei [bac] <= max)
		{
		    trips++;
		    bac++;
		}
		else
		{
		    trips++;
		}
	    }
	    else if (wei [i] <= max &&bac == i)
	    {
		trips++;
	    }
	}
	System.out.println (trips);
	if (big)
	{
	    System.out.println ("YES");
	}
	else
	{
	    System.out.println ("NO");
	}

    }
}