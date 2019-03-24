import java.util.Scanner;
public class ccc03s1 {
	
	static Scanner s = new Scanner(System.in);
	public static void main(String[] args) {
		int pos = 1;
		int move;
		while(true)
		{
			move = s.nextInt();
			pos += move;
			if (pos>100)
				pos -=move;
			switch(pos) {
			case 54:
				pos = 19;
				break;
			case 90:
				pos = 48;
				break;
			case 99:
				pos=77;
				break;
			case 9:
				pos = 34;
				break;
			case 40:
				pos=64;
				break;
			case 67:
				pos=86;
				break;
			}
			if(move ==0)
			{
				System.out.println("You Quit!");
				System.exit(0);
			}
			System.out.println("You are now on square "+pos);
			if (pos==100)
			{
				System.out.println("You Win!");
				System.exit(0);
			}

			
		}

	}

}