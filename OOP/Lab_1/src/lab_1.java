import java.util.Scanner;
public class lab_1 {
  int first;
  int second;
  public static Scanner input = new Scanner(System.in);
  public lab_1(int first, int second){//Constructor
    this.first=first;
    this.second=second;
  }
  public void setValue(){
        System.out.println("first: ");
        first=input.nextInt();
        System.out.println("second: ");
        second=input.nextInt();
    }
    public void getValue(){
        if (second<-1) System.out.println(first + "+" + -second + "i");
        else if (second==-1) System.out.println(first + "+i");
        else if (second==0) System.out.println(first);
        else if (second==1) System.out.println(first + "-i");
        else System.out.println(first + "-" + second + "i");
    }
    public void sqr(){
        int first_t=first;
      first=first*first-(second*second);
      second=first_t*second*2;
    }
}
