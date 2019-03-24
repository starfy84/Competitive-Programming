import java.util.Scanner;
public class ccc05s1 {
	
	public static void main(String[] args) {
		    Scanner s = new Scanner(System.in);
		    int times = s.nextInt();
		    String[] store,numStore;
		    store = new String[times];
		    numStore = new String[times];
		    for (int x=0;x<times;x++)
		    {
		    	store[x]="";
		    	numStore[x]="";
		    }
		    for (int x = 0;x<times;x++)
		    {
		    	
		    	String num = s.next();
		    	for (int y =0;y<=num.length()-1;y++)
		    	{
		    		if (num.charAt(y)!='-')
		    		{
		    			store[x] += num.charAt(y);
		    		}
		    	
		    	}
		    }
		    s.close();
		    for (int x=0;x<store.length;x++)
		    {
		    	for (int y=0;y<store[x].length();y++)
		    	{
		    		if(store[x].charAt(y)=='1')
		    			numStore[x] += '1';
		    		else if(store[x].charAt(y) == 'A' ||
		    				store[x].charAt(y) =='B' ||
		    				store[x].charAt(y) == 'C' ||
		    				store[x].charAt(y) == '2')
		    			numStore[x] += '2';
		    		else if(store[x].charAt(y)=='D'||
		    				store[x].charAt(y)=='E'||
		    				store[x].charAt(y)=='F'||
		    				store[x].charAt(y)=='3')
		    			numStore[x] +='3';
		    		else if (store[x].charAt(y)=='G'||
		    				store[x].charAt(y)=='H'||
		    				store[x].charAt(y)=='I'||
		    				store[x].charAt(y)=='4')
		    			numStore[x] +='4';
		    		else if(store[x].charAt(y)=='J'||
		    				store[x].charAt(y)=='K'||
		    				store[x].charAt(y)=='L'||
		    				store[x].charAt(y)=='5')
		    			numStore[x]+='5';
		    		else if(store[x].charAt(y)=='M'||
		    				store[x].charAt(y)=='N'||
		    				store[x].charAt(y)=='O'||
		    				store[x].charAt(y)=='6')
		    			numStore[x]+='6';
		    		else if(store[x].charAt(y)=='P'||
		    				store[x].charAt(y)=='Q'||
		    				store[x].charAt(y)=='R'||
		    				store[x].charAt(y)=='S'||
		    				store[x].charAt(y)=='7')
		    			numStore[x]+='7';
		    		else if(store[x].charAt(y)=='T'||
		    				store[x].charAt(y)=='U'||
		    				store[x].charAt(y)=='V'||
		    				store[x].charAt(y)=='8')
		    			numStore[x]+='8';
		    		else if(store[x].charAt(y)=='W'||
		    				store[x].charAt(y)=='X'||
		    				store[x].charAt(y)=='Y'||
		    				store[x].charAt(y)=='Z'||
		    				store[x].charAt(y)=='9')
		    			numStore[x]+='9';
		    		else
		    			numStore[x]+='0';
		    		
		    	}
		    }
		    for (int x=0;x<numStore.length;x++)
		    {
		    	System.out.println(numStore[x].substring(0, 3)+"-"+numStore[x].substring(3, 6)+"-"+numStore[x].substring(6, 10));
		    }
	}

}