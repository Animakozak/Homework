package classes;
import interfaces.*;
import java.util.Scanner;
class WalkingRobot extends Robot implements Rotatable,Shiftable{
  private Scanner input = new Scanner(System.in);
  private int startAngle=0;
  private int endAngle=90;
  private int stepAngle=10;
  private int stepShift=1;
  private int stepCount=0;
  private Action[] ActionList;

  private static class Action{
    private ActionTypes type;
    ActionTypes getType(){
      return type;
    }
    void setType(ActionTypes type){
      this.type=type;
    }
    enum ActionTypes{RoF,RoB,ShF,ShB,DoS}
  }
  public void viewActionList(){
    for(int i=0; i<stepCount; i++){
      System.out.println(ActionList[i].getType());
    }
  }
  public void setActionList(){
    System.out.println("Initialazing of action list");
    while(stepCount<=0){
      System.out.println("Set list length");
      stepCount=input.nextInt();
    }
    ActionList=new Action[stepCount];
    int inputActionType;
    for(int i=0;i<stepCount;i++){
      ActionList[i]=new Action();
      do{
        System.out.println("1 - rotate forward");
        System.out.println("2 - rotate backward");
        System.out.println("3 - shift forward");
        System.out.println("4 - shift backward");
        System.out.println("5 - do something");
                inputActionType = input.nextInt();
                if (inputActionType == 1) ActionList[i].setType(Action.ActionTypes.RoF);
                else if (inputActionType == 2) ActionList[i].setType(Action.ActionTypes.RoB);
                else if (inputActionType == 3) ActionList[i].setType(Action.ActionTypes.ShF);
                else if (inputActionType == 4) ActionList[i].setType(Action.ActionTypes.ShB);
                else if (inputActionType == 5) ActionList[i].setType(Action.ActionTypes.DoS);
      }while(inputActionType!=1 && inputActionType!=2 && inputActionType!=3 && inputActionType!=4 && inputActionType!=5);
    }
  }

  WalkingRobot(){
    x=0;
    y=0;
    course=0;
  }
  WalkingRobot(int x1, int y1, int course1){
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
    x=(x+(Math.cos(Math.toRadians(course))*stepShift));
    y=(y+(Math.sin(Math.toRadians(course))*stepShift));
  }
  public void shiftBW(){
    x=(x-(Math.sin(Math.toRadians(endAngle-course))*stepShift));
    y=(y-(Math.cos(Math.toRadians(endAngle-course))*stepShift));
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
    setActionList();
    System.out.println("List:");
    viewActionList();
    for(int i=0; i<stepCount; i++){
      if(ActionList[i].getType()==Action.ActionTypes.RoF) rotateFW();
      else if(ActionList[i].getType()==Action.ActionTypes.RoB) rotateBW();
      else if(ActionList[i].getType()==Action.ActionTypes.ShF) shiftFW();
      else if(ActionList[i].getType()==Action.ActionTypes.ShB) shiftBW();
      else if(ActionList[i].getType()==Action.ActionTypes.DoS) doSomething();
    }
  }
}
