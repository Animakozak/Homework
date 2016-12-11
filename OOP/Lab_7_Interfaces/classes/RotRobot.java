import interfaces.*;
import java.util.Scanner;
class RotRobot extends Robot implements Rotatable{
  private int startAngle=0;
  private int endAngle=90;
  private int stepAngle=10;
  private Scanner input = new Scanner(System.in);
  RotRobot(){
    x=0;
    y=0;
    course=0;
  }
  RotRobot(int x1,int y1,int course1){
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
  public boolean rotateFW(){
    course+=stepAngle;
    if(course<=endAngle && course>=startAngle){
      return true;
    }
    else{
      course-=stepAngle;
      System.out.println("You can't turn forward");
      return false;
    }
  }
  public boolean rotateBW(){
    course-=stepAngle;
    if(course<=endAngle && course>=startAngle){
      return true;
    }
    else{
      course+=stepAngle;
      System.out.println("You can't turn backward");
      return false;
    }
  }
  public void Move(){
    int directionFwBwVal;
    boolean directionFwBwBool=false;
    do{
      directionFwBwVal=input.nextInt();
      if(directionFwBwVal==1){
        directionFwBwBool=rotateFW();
      }
      else if(directionFwBwVal==-1){
        directionFwBwBool=rotateBW();
      }
      else{
        System.out.println("Wrong input! Either 1 or -1");
      }
    }while(!directionFwBwBool);
    doSomething();
  }
}
