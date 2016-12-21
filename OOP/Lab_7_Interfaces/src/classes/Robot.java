package classes;
class Robot{
  double x;
  double y;
  int course;
  Robot(){
    x=0;
    y=0;
    course=0;
  }
  Robot(int x1, int y1,int course1){
    x=x1;
    y=y1;
    course=course1;
  }
  public double getX(){
    return x;
  }
  public double getY(){
    return y;
  }
  public double getC(){return course;}
  public void doSomething(){
    System.out.println("Good morning, Daaaave.");
  }
}
