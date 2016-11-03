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
  public double intersects(Circle O1, Circle O2){
      double inScale=0;
      double inDistance=sqrt(pow((O1.x-O2.x),2)+pow((O1.y-O2.y),2));
      double inRadius=(inDistance-(O1.r+O2.r))/2;
      if(inRadius<0) inScale=inRadius*inRadius*3.14;
      else if(inRadius==0 && O1.x==O2.x && O1.y==O2.y && O1.r==O2.r) inScale=O1.getSquare();
      else if(inRadius==0 && O1.x!=O2.x && O1.y!=O2.y && O1.r!=O2.r){
          System.out.println("Circles do not intersect");
          inScale=0;      }
      else {
          if (O1.r<O2.r) inScale=O1.getSquare();
          else if (O1.r>O2.r) inScale=O2.getSquare();
          else System.out.println("Well, something's wrong");
    }
    return inScale;
  }
  public double union(Circle O1, Circle O2){
      double uniScale=0;
      if(O1.getSquare()>O2.getSquare()){
          uniScale=O1.getSquare()+O2.getSquare()-(O1.getSquare()-O2.getSquare());
      }
      else if(O1.getSquare()<O2.getSquare()){
          uniScale=O1.getSquare()+O2.getSquare()-(O2.getSquare()-O1.getSquare());
      }
      else if(O1.x+O1.r>O2.x && O1.y+O1.r>O2.y){
          uniScale=O1.getSquare();
      }
      else if(O2.x+O2.r>O1.x && O2.y+O2.r>O1.y){
          uniScale=O2.getSquare();
      }
      return uniScale;
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
      return "Center is: "+x+" "+y+" Radius is "+r;
  }
}
