import java.io.*;
public class lab_1 {
  int first;
  int second;
  public lab_1(int first, int second){//Constructor
    this.first=first;
    this.second=second;
  }
    public void setValue()throws IOException{ //Muttator
        System.out.println("first: ");
        DataInputStream dis1 = new DataInputStream(System.in);
        first=dis1.readInt();
        System.out.println("second: ");
        DataInputStream dis2 = new DataInputStream(System.in);
        second=dis2.readInt();
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
  public static void main(String[]args)throws IOException{
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
