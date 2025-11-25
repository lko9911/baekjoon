import java.io.*;
class Main{
public static void main(String[]a)throws Exception{
BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
String[]s=b.readLine().split(" ");
System.out.println(Integer.parseInt(s[0])-Integer.parseInt(s[1]));
}
}