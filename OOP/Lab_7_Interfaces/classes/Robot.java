class Robot{
  int x,y,course;
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
  public int getX(){
    return x;
  }
  public int getY(){
    return y;
  }
  public void doSomething(){
    System.out.println("Good morning, Daaaave.");
  }
}
