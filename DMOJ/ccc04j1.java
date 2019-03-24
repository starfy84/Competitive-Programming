import java.io.*;
import java.util.Scanner;
public class ccc04j1 {

	public static void main(String[] args) throws java.lang.Exception{
		// TODO Auto-generated method stub
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String input = in.readLine();
		System.out.println("The largest square has side length "+ (int)Math.floor(Math.sqrt(Integer.parseInt(input)))+".");

	}

}