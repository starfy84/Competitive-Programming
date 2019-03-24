import java.io.*;
public class quine
{
public static void main(String[] args) throws IOException
{
BufferedReader r = new BufferedReader(new FileReader("Blah.java"));
String line="";
while((line=r.readLine())!=null)
System.out.println(line);
}
}