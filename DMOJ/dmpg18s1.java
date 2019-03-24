import java.io.*;

public class dmpg18s1 {
    static String s;

    static boolean isValid(int index) {
        boolean zo=true;
        for(int x = 0 ;x < s.length();x++) {
            if(s.charAt(x)!='0' && s.charAt(x)!='1')
                zo=false;
        }
        if(zo) {
            if(s.indexOf('0') == s.length()-1) {
                return true;
            }else {
                return false;
            }
        }
        int numTypes = Character.getNumericValue(s.charAt(index));
        if(numTypes==0&&s.length()>1)
            return false;
            
        String ss = s.substring(index + 1);
        int c = 0;
        for (int x = 0; x < ss.length(); x++)
            if (ss.charAt(x) != '0')
                c++;
        if (c != numTypes)
            return false;

        return true;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

        s = in.readLine();
        if (isValid(0)) {
            System.out.println("Valid");
        }
        else
            System.out.println("Invalid");
    }
}