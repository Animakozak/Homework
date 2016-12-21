package classes;
import interfaces.*;
import java.util.Scanner;
class ShiftRobot extends Robot implements Shiftable{
  private  Scanner input = new Scanner(System.in);
  private int stepShift=1;
  private int startAngle=0;
  private int endAngle=90;
  ShiftRobot(){
    x=0;
    y=0;
    course=0;
  }
  ShiftRobot(int x1,int y1,int course1){
    super(x1,y1,course1);
    x=x1;
    y=y1;
    if(course1<=endAngle && course1>=startAngle){
      course=course1;
    }
    else{
      System.out.println("Input course is beyond limits. Setting the default value = 0");
      course=0;
    }
  }
  public void shiftFW(){
    if(course==endAngle){
      y+=stepShift;
      course=startAngle;
    }
    else x+=stepShift;
  }
  public void shiftBW(){
    if(course==endAngle){
      y-=stepShift;
    }
    else x-=stepShift;
  }
  public void Move(){
    int directionFwBwVal;
    do{
      directionFwBwVal=input.nextInt();
      if(directionFwBwVal==1){
        shiftFW();
      }
      else if(directionFwBwVal==-1){
        shiftBW();
      }
      else if(directionFwBwVal==2){
        course=endAngle;
        shiftFW();
      }
      else if(directionFwBwVal==-2){
        course=endAngle;
        shiftBW();
      }
    }while(directionFwBwVal!=1 && directionFwBwVal!=-1 && directionFwBwVal!=2 && directionFwBwVal!=-2);
    doSomething();
  }
}
