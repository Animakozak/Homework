package com.circle; /**
 * Created by user on 19-Oct-16.
 */
import static java.lang.Math.sqrt;
import static java.lang.Math.pow;
public class Circle {
  double x, y, r;
  Circle(){
    x=0;
    y=0;
    r=0;
  }
  Circle(double a, double b, double c){
    x=a;
    y=b;
    r=c;
  }
  public double getPerimeter(){
    return 2*r*3.14;
  }
  public double getSquare(){
    return r*r*3.14;
  }
  public void scale(double scale){
    r=r*scale;
  }
  public void move(double Ox, double Oy){
    x=x+Ox;
    y=y+Oy;
  }
  public Circle intersects(Circle O1, Circle O2){
    double diff = sqrt(pow((O1.x-O2.x),2)+pow((O1.y-O2.y),2))-(O1.r+O2.r);
    double a = diff + O1.r;
    double b = diff + O2.r;
    double d = sqrt(pow((O1.x-O2.x),2)+pow((O1.y-O2.y),2));
    if((O1.r+O2.r)<d){
      System.out.println("Error: Circles do not intersect");
    }
    else if(abs(O1.r-O2.r)>d){
      if(O1.r>O2.r){
        Circle i = new Circle(O2.x, O2.y, O2.r);
        return i;
      }
      else if(O1.r==O2.r){
        Circle i = new Circle(O2.x, O2.y, O2.r);
        return i;
      }
      else{
        Circle i = new Circle(O1.x, O1.y, O1.r);
        return i;
      }
    }
    else{
      Circle i = new Circle();
      Circle j = new Circle();
      Circle k = new Circle();
      i.x = O1.x+a/d*(O2.x-O1.x);
      i.y = O1.y+a/d*(O2.y-O1.y);
      j.x = i.x + (O2.x-O1.x)/d*(sqrt(O1.r*O1.r-a*a));
      j.y = i.y - (O2.y-O1.y)/d*(sqrt(O1.r*O1.r-a*a));
      k.x = i.x - (O2.x-O1.x)/d*(sqrt(O2.r*O2.r-b*b));
      k.y = i.y - (O2.y-O1.y)/d*(sqrt(O2.r*O2.r-b*b));
      i.r=sqrt(pow((O1.x-j.x),2)+pow((O1.y-j.y),2))
      return i;
    }
  }
  public Circle union(Circle O1, Circle O2){
      double d = sqrt(pow((O1.x-O2.x),2)+pow((O1.y-O2.y),2));
      double 
      return ;
  }
  public boolean equals(double x1, double y1, double r1, double x2, double y2, double r2){
      return x1==x2 && y1==y2 && r1==r2;
  }
  public void setCircleCenter_x(double newX){
      x=newX;
  }
  public void setCircleCenter_y(double newY){
      y=newY;
  }
  public double getCircleCenter_x(){
      return x;
  }
  public double getCircleCenter_y(){
      return y;
  }
  public void setCircleRadius(double radius){
      r=radius;
  }
  public double getCircleRadius(){
      return r;
  }
  @Override
  public String toString(){
      return "Center is: "+x+" "+y+" Radius is "+r+"Length is "+getPerimeter+" Sca is";
  }
}
