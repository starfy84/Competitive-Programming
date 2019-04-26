import java.util.*;
import java.io.*;


/*
	.. ----- 1
	.o ----- 2
	o. ----- 3
	oo ----- 4
*/
public class b4{
	public static void main(String[] args) throws IOException{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String s  = in.readLine();
		HashMap<Integer,String> conv = new HashMap<Integer,String>();

		conv.put(1,"..");
		conv.put(2,".o");
		conv.put(3,"o.");
		conv.put(4,"oo");

		int[][] map = {	{3,3,4,4,3,4,4,3,2,2,3,3,4,4,3,4,4,3,2,2,3,3,2,4,4,3},
						{1,3,1,2,2,3,4,4,3,4,1,3,1,2,2,3,4,4,3,4,1,3,4,1,2,2},
						{1,1,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,3,3,4,4,2,4,4,4}};
		for(int i = 0; i < 3; i++){
			for(int x = 0;x < s.length();x++){
				if(s.charAt(x) == ' ')
					System.out.print("..");
				else{
					System.out.print(conv.get(map[i][(int)(s.charAt(x)-'A')]));
				}
			}
			System.out.println();
		}
	}
}