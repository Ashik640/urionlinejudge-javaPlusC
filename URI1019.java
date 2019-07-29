import java.util.Scanner;
public class URI1019{
  public static void main(String[]args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Please input second/s:");
    int N = sc.nextInt();
    int h, m, s;
    h = N / 3600;
    m = (N - (h * 3600)) / 60;
    s = N - ((h * 3600) + (m * 60));
    System.out.println(h + ":" + m + ":" + s);
  }
}