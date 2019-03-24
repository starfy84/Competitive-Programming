import java.io.*;

public class 16bitswonly {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int times = Integer.parseInt(in.readLine());
		for(int x = 0; x <times ;x++)
		{
			String[] arr = in.readLine().split(" ");
			if (Long.parseLong(arr[0])*Long.parseLong(arr[1])==Long.parseLong(arr[2]))
				System.out.println("POSSIBLE DOUBLE SIGMA");
			else
				System.out.println("16 BIT S/W ONLY");
		}

	}
}