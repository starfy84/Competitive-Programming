import java.io.*;
import java.util.*;

public class discount {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	public static void main(String[] args) throws IOException {
		// ship(br.readLine());
		discerningDiscounts();
	}

	private static void discerningDiscounts() throws IOException {

		int nItems;
		int threshold;
		String firstLine = br.readLine();
		nItems = Integer.parseInt(firstLine.split(" ")[0]);
		threshold = Integer.parseInt(firstLine.split(" ")[1]);
		double[] finalPrices = new double[nItems];
		int counter = 0;
		for (int i = 0; i < nItems; i++) {
			String[] nextLine = br.readLine().split(" ");
			int price = Integer.parseInt(nextLine[0]);
			byte discount = Byte.parseByte(nextLine[1]);
			finalPrices[i] = price * ((100 - discount) / 100.0);
			if (finalPrices[i] <= (float)threshold) {
				// System.out.println("i: " + i + " price: " + price + " discount: " + discount + "
				// finalPrice: " + finalPrices[i]);
				counter++;
			}
		}

		System.out.println(counter);

	}
}