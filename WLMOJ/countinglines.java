import java.io.*;
import java.util.*;

public class countinglines {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int lines=0;
        while(in.readLine() != null)
            lines++;
        System.out.println(lines);
    }
}