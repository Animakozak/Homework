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
      first=first*first-(second*second);
      second=first*second*2;
    }
  public static void main(String[]args){
    lab_1 obj1 = new lab_1(0,0);
    lab_1 obj2 = new lab_1(0,0);
    obj1.setValue();
    obj1.getValue();
    obj2.setValue();
    System.out.println("Before:");
    obj2.getValue();
    obj2.sqr();
    System.out.println("After:");
    obj2.getValue();
    //array
  }
}
