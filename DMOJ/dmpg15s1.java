import java.io.*;

public class dmpg15s1 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int total = Integer.parseInt(in.readLine()),remainder=0;
		int[]blah= {4,5,4,3,6};
		String[] temp = in.readLine().split(" ");
		int[] rwbyg = new int[temp.length];
		for(int x = 0 ; x < rwbyg.length;x++)
			rwbyg[x]=Integer.parseInt(temp[x]);
		for(int x=0;x<5;x++)
			if(rwbyg[x]%blah[x]!=0)
				remainder++;
		total -= rwbyg[0]/4+rwbyg[1]/5+rwbyg[2]/4+rwbyg[3]/3+rwbyg[4]/6+remainder;
		System.out.println((total<0)?0:total);
	}
}