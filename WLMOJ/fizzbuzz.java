import java.io.*;
import java.util.*;

public class fizzbuzz {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt();
        
        for(int x=1;x<=n;x++){
            if(x%3==0){
                System.out.print("fizz");
            }
            if(x%5==0){
                System.out.print("buzz");
            }
            if(!(x%3 == 0 || x%5 == 0)){
                System.out.print(x);
            }
            System.out.println();
        }
    }
}