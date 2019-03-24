import java.io.*;
import java.util.*;
public class ccc14j3{
    StringTokenizer st;
    BufferedReader in;
    
    public ccc14j3() throws IOException {
        in = new BufferedReader(new InputStreamReader(System.in));
        int n = readInt();
        int a = 100,d = 100;
        for(int x = 0 ;x < n ;x ++) {
        	int av = readInt();
        	int dv = readInt();
        	if(av!=dv) {
        		int max = Math.max(av, dv);
        		if(max == av)
        			d -= max;
        		else
        			a -= max;	
        	}
        }
        System.out.println(a);
        System.out.println(d);
    }
    public static void main(String[] args)throws IOException {
        new ccc14j3();
        
    }
    private String read() throws IOException{
        if(st==null || !st.hasMoreTokens())
            st = new StringTokenizer(in.readLine().trim());
        return st.nextToken();
    }
    private int readInt() throws IOException{
        return Integer.parseInt(read());
    }
    private String[] readArr(int size)throws IOException {
        String[] arr = new String[size];
        for(int x = 0 ;x < size ;x++) {
            arr[x] =read();
        }
        return arr;
    }
    private int[] readArrInt(int size)throws IOException {
        int[] arr = new int[size];
        for(int x = 0 ;x < size ;x++) {
            arr[x] =readInt();
        }
        return arr;
    }
    private String[][] readMat(int rows, int cols) throws IOException{
        String[][] mat = new String[rows][cols];
        for(int x = 0; x < rows;x ++) {
            mat[x] = readArr(cols);
        }
        return mat;
    }
    private int[][] readMatInt(int rows, int cols)throws IOException{
        int[][] mat = new int[rows][cols];
        for(int x = 0; x < rows;x ++) {
            mat[x] = readArrInt(cols);
        }
        return mat;
    }
}