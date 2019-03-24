import java.io.*;
import java.util.*;
public class asequenceproblem{
    StringTokenizer st;
    BufferedReader in;
    
    public asequenceproblem() throws IOException {
        in = new BufferedReader(new InputStreamReader(System.in));
        int n = readInt(), arr[] = readArrInt(n),min = Integer.MAX_VALUE;
        Arrays.sort(arr);
        for(int x = 1 ;x < n ;x++)
            if(arr[x]-arr[x-1] < min)
                min = arr[x]-arr[x-1];
        System.out.println(min);
    }
    public static void main(String[] args)throws IOException {
        new asequenceproblem();
        
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