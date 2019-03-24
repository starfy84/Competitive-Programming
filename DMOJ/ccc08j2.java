import java.io.*;
import java.util.Vector;
public class ccc08j2 {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        Vector<Character> v = new Vector<>();
        int b=0,n=0;
        char temp;
        for(int x = 0 ; x <5 ; x++)
            v.add((char)('A'+x));
        while(true)
        {
            b = Integer.parseInt(in.readLine());
            n=Integer.parseInt(in.readLine());
            if(b==4)
            	break;
            switch(b)
            {
            case 1:
                for(int y = 0 ; y < n ; y++)
                {
                	
                    v.add(v.get(0));
                    v.removeElementAt(0);
                }
                break;
            case 2:
                for(int y = 0 ; y < n ;y++)
                {
                    v.add(0,v.get(v.size()-1));
                    v.removeElementAt(v.size()-1);
                }
                break;
            case 3:
                if(n%2==1)
                {
                    temp = v.get(1);
                    v.removeElementAt(1);
                    v.add(0, temp);
                }
                break;
            }
        }
        for(char x : v)
            System.out.print(x+" ");
    }
}