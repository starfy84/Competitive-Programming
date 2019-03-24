import java.util.*;
import java.io.*;
public class ccc05s2 {
	
	private static class Mouse
	{
		public int x,y;
		public int mX,mY = 0;
		public Mouse(int w,int h)
		{
			x = w;
			y = h;
		}
		private void move(int h,int v)
		{
			mX += h;
			mY += v;
			if(mX<0)
				mX =0;
			if(mY<0)
				mY = 0;
			if(mX>x)
				mX =x;
			if(mY>y)
				mY = y;
			System.out.println(mX+" "+mY);
		}
	}
	public static void main(String[] args) throws java.lang.Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] screenSize = in.readLine().split(" ");
		int sX = Integer.parseInt(screenSize[0]);
		int sY = Integer.parseInt(screenSize[1]);
		Mouse m = new Mouse(sX,sY);
		String[] move = new String[2];
		while(true)
		{
			
			move = in.readLine().split(" ");
			if(Integer.parseInt(move[0]) == 0 && Integer.parseInt(move[1]) ==0)
				break;
			m.move(Integer.parseInt(move[0]), Integer.parseInt(move[1]));
		}
		
		
	}

}