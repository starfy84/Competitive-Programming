import java.io.*;

public class tree1 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[][] arr = new String[4][4];
		int count = 0 ; 
		for(int x =  0   ; x < 4 ; x ++)
		{
			arr[x] = in.readLine().split(" ");
		}
		
		for(int x =  0   ; x < 4 ; x ++)
		{
			int oneCount = 0;
			for(int y = 0 ; y < 4 ; y ++)
			{
				if(arr[x][y].equals("1"))
					oneCount++;
			}
			if(oneCount>=2)
				count++;
		}
		System.out.println((count>=3)?"No":"Yes");
		
	}
}
