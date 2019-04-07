import java.io.*;
import java.util.*;

public class P3 {

	public static boolean isFilled(boolean arr[][], int x, int y) {
		return arr[x - 1][y - 1] && arr[x][y - 1] && arr[x + 1][y - 1] && arr[x - 1][y] && arr[x][y] && arr[x + 1][y]
				&& arr[x - 1][y + 1] && arr[x][y + 1] && arr[x + 1][y + 1];
	}
	public static void out(int x, int y) {
		System.out.println(x + " " + y);
		System.out.flush();
	}

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(in.readLine());
		for (int i = 0; i < t; i++) {
			int a = Integer.parseInt(in.readLine());
			int sideA = (int) Math.sqrt(a);
			int sideB = a - sideA;
			boolean[][] arr = new boolean[sideA + 4][sideB + 4];
			int x = 0, y = 0, p = 1;
			if(a==20) {
				for (int j = 0; j < 1000; j++) {
					if (p == 1) {
						out(2, 2);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 2))
							p++;
					} else if (p == 2) {
						out(2, 5);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 5))
							p++;
					}
					else if(p==3) {
						out(2, 6);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 6))
							break;
					}

				}
			}
			else if (a == 200) {
				for (int j = 0; j < 1000; j++) {
					if (p == 1) {
						out(2, 2);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 2))
							p++;
					} else if (p == 2) {
						out(2, 5);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 5))
							p++;
					} else if (p == 3) {
						out(2, 8);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 8))
							p++;
					} else if (p == 4) {
						out(2, 11);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 11))
							p++;
					} else if (p == 5) {
						out(2, 14);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 14))
							p++;
					} else if (p == 6) {
						out(2, 17);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 17))
							p++;
					} else if (p == 7) {
						out(2, 20);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 20))
							p++;
					} else if (p == 8) {
						out(2, 23);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 23))
							p++;
					} else if (p == 9) {
						out(2, 26);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 26))
							p++;
					} else if (p == 10) {
						out(2, 29);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 29))
							p++;
					} else if (p == 11) {
						out(2, 32);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 32))
							p++;
					} else if (p == 12) {
						out(2, 35);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 35))
							p++;
					} else if (p == 13) {
						out(2, 38);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 38))
							p++;
					} else if (p == 14) {
						out(2, 41);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 41))
							p++;
					} else if (p == 15) {
						out(2, 44);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 44))
							p++;
					} else if (p == 16) {
						out(2, 47);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 47))
							p++;
					} else if (p == 17) {
						out(2, 50);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 50))
							p++;
					} else if (p == 18) {
						out(2, 53);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 53))
							p++;
					} else if (p == 19) {
						out(2, 56);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 56))
							p++;
					} else if (p == 20) {
						out(2, 59);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 59))
							p++;
					} else if (p == 21) {
						out(2, 62);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 62))
							p++;
					} else if (p == 22) {
						out(2, 65);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 65))
							p++;
					} else if (p == 23) {
						out(2, 68);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 68))
							p++;
					} else if (p == 24) {
						out(2, 71);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 71))
							p++;
					} else if (p == 25) {
						out(2, 74);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 74))
							p++;
					} else if (p == 26) {
						out(2, 77);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 77))
							p++;
					} else if (p == 27) {
						out(2, 80);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 80))
							p++;
					} else if (p == 28) {
						out(2, 83);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 83))
							p++;
					} else if (p == 29) {
						out(2, 86);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 86))
							p++;
					} else if (p == 30) {
						out(2, 89);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 89))
							p++;
					} else if (p == 31) {
						out(2, 92);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 92))
							p++;
					} else if (p == 32) {
						out(2, 95);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 95))
							p++;
					} else if (p == 33) {
						out(2, 98);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 98))
							p++;
					} else if (p == 34) {
						out(2, 101);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 101))
							p++;
					} else if (p == 35) {
						out(2, 104);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 104))
							p++;
					} else if (p == 36) {
						out(2, 107);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 107))
							p++;
					} else if (p == 37) {
						out(2, 110);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 110))
							p++;
					} else if (p == 38) {
						out(2, 113);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 113))
							p++;
					} else if (p == 39) {
						out(2, 116);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 116))
							p++;
					} else if (p == 40) {
						out(2, 119);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 119))
							break;
					} else if (p == 41) {
						out(2, 122);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 122))
							p++;
					} else if (p == 42) {
						out(2, 125);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 125))
							p++;
					} else if (p == 43) {
						out(2, 128);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 128))
							p++;
					} else if (p == 44) {
						out(2, 131);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 131))
							p++;
					} else if (p == 45) {
						out(2, 134);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 134))
							p++;
					} else if (p == 46) {
						out(2, 137);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 137))
							p++;
					} else if (p == 47) {
						out(2, 140);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 140))
							p++;
					} else if (p == 48) {
						out(2, 143);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 143))
							p++;
					} else if (p == 49) {
						out(2, 146);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 146))
							p++;
					} else if (p == 50) {
						out(2, 149);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 149))
							p++;
					} else if (p == 51) {
						out(2, 152);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 152))
							p++;
					} else if (p == 52) {
						out(2, 155);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 155))
							p++;
					} else if (p == 53) {
						out(2, 158);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 158))
							p++;
					} else if (p == 54) {
						out(2, 161);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 161))
							p++;
					} else if (p == 55) {
						out(2, 164);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 164))
							p++;
					} else if (p == 56) {
						out(2, 167);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 167))
							p++;
					} else if (p == 57) {
						out(2, 170);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 170))
							p++;
					} else if (p == 58) {
						out(2, 173);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 173))
							p++;
					} else if (p == 59) {
						out(2, 176);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 176))
							p++;
					} else if (p == 60) {
						out(2, 179);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 179))
							p++;
					} else if (p == 61) {
						out(2, 182);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 182))
							p++;
					} else if (p == 62) {
						out(2, 185);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 185))
							p++;
					} else if (p == 63) {
						out(2, 188);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 188))
							p++;
					} else if (p == 64) {
						out(2, 191);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 191))
							p++;
					} else if (p == 65) {
						out(2, 194);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 194))
							p++;
					} else if (p == 66) {
						out(2, 197);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 197))
							break;
					} else if (p == 67) {
						out(2, 198);
						String[] out = in.readLine().split(" ");
						x = Integer.parseInt(out[0]);
						y = Integer.parseInt(out[1]);
						if (x == 0 && y == 0)
							break;
						arr[x][y] = true;
						if (isFilled(arr, 2, 198))
							break;
					}

				}
			}
		}

	}
}