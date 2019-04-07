import java.io.*;

public class P1 {

    public static boolean check(char[] str, int d) {
        int charge = 1;
        int dmg=0;
        for(int x = 0 ;x < str.length;x++) {
            if(str[x] == 'S')
                dmg+=charge;
            else
                charge<<=1;
        }
        //System.out.println("Dmg: "+dmg+"\nDef: "+d);
        return dmg<=d;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int times  = Integer.parseInt(in.readLine());
        for(int x =1 ;x <=times; x++)
        {
            String[] blah = in.readLine().split(" ");
            int d = Integer.parseInt(blah[0]);
            char[] str = blah[1].toCharArray();
            int count=0;
            for(int y = str.length-1; y>=1;y--) {
                if(check(str,d))
                    break;
                if(str[y] == 'S' && str[y-1] =='C')
                {
                    char temp = str[y];
                    str[y] = str[y-1];
                    str[y-1] = temp;
                    count++;
                    y=str.length;
                    continue;
                }
                if(y==1)
                    count=-1;
            }
            System.out.println("Case #"+x+": "+(count==-1?"IMPOSSIBLE":count));
        }

    }
}