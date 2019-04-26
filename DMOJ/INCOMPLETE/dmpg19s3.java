import java.io.*;
import java.util.*;

public class dmpg19s3{
	public static void main(String[] args)throws IOException{
		int MOD = 1000000007;
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		String s[] = in.readLine().split(" ");
		String clean[]=new String[n];
		int ind=0;
		for(int x=0;x<s.length;x++){
			if(s[x].equals("(")){
				clean[ind]=s[x];
			}else{
				clean[ind]=s[x]+" "+s[x+1];
				x+=1;
			}
			ind++;
		}
		Stack<String>bag = new Stack<String>();
		ArrayList<String> popped = new ArrayList<String>();

		for(int x=0;x<clean.length;x++){
			bag.push(clean[x]);
			if(clean[x].contains(")")){
				long num = Long.parseLong(clean[x].split(" ")[1]);
				bag.pop();
				while(!bag.peek().contains("(")){
					String sss[] = bag.peek().split(" ");		bag.pop();
					popped.add(sss[0]+" "+((num*(Long.parseLong(sss[1]))%MOD)));
				}
				bag.pop();
			}
			for(int i=0;i<popped.size();i++){
				bag.push(popped.get(i));
			}
			popped.clear();
		}
		// HashMap<String,Integer> map = new HashMap<String,Integer>()
		Collections.sort(bag);
		ArrayList<String>elem= new ArrayList<String>();
		ArrayList<Long>val = new ArrayList<Long>();
		for(String zz:bag){
			// if(!zz.contains(")") && !zz.contains("("))
			String[] zzz = zz.split(" ");
			int index = elem.indexOf(zzz[0]);
			if(index == -1){
				elem.add(zzz[0]); val.add(Long.parseLong(zzz[1]));
			}
			else{
				val.set(index,((val.get(index)+Long.parseLong(zzz[1]))%MOD));
			}
			//System.out.println(zz);
		}
		for(int x = 0;x < elem.size();x++){
			System.out.println(elem.get(x)+ " "+ val.get(x)%MOD);
		}

	}
}