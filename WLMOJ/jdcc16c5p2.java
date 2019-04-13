import java.io.*;
import java.util.*;

public class jdcc16c5p2 {
    public static void main(String[] args)throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String s = in.readLine().trim().replace(" ", "");
        if(s.indexOf("*") != -1){
            String[]inp = s.split("\\*");
            System.out.println((int)Math.round(Double.parseDouble(inp[0]) * Math.pow(10,Integer.parseInt(inp[1].split("\\^")[1]))));
        }
        else{
            double d = Math.round(Double.parseDouble(s.charAt(0) + "." + s.substring(1))*100)/100.0;
            System.out.printf("%.2f * 10^%d\n",d,s.substring(1).length());
        }
    }
}