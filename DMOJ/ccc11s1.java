import java.util.Scanner;
public class ccc11s1 {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int num = s.nextInt()+1;
		String[] textArray;
		textArray = new String[num];
		int tCount = 0;
		int sCount = 0;
		for (int x=0;x<num;x++)
		{
			String input = s.nextLine();
			textArray[x]=input;
		}
		for(int x=0;x<num;x++)
		{
			for(int y =0;y<textArray[x].length();y++)
			{
				if(textArray[x].charAt(y)=='t'|| textArray[x].charAt(y)=='T')
				{
					tCount++;
				}
				else if (textArray[x].charAt(y)=='s'|| textArray[x].charAt(y)=='S')
				{
					sCount++;
				}
			}

		}
		if (tCount>sCount)
			System.out.println("English");
		else if(tCount<sCount || tCount==sCount)
			System.out.println("French");

	}

}