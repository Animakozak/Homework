package com.circle; /**
 * Created by user on 19-Oct-16.
 */
import static java.lang.Math.abs;
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
  public double getDist(Circle A, Circle B){
    return sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));
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
  public Circle intersects(Circle O2){
    Circle b1 = new Circle();
    if ((this.y == O2.y) && (this.x < O2.x))
    {
      if ((O2.x - this.x) < (O2.r + this.r))
      {
        double x1, x2;
        x1 = O2.x - O2.r;
        x2 = this.x + this.r;
        b1.r = (x2 - x1) / 2;
        b1.x = x1 + b1.r;
        b1.y = this.y;
      }
      else System.out.println("Circles do not intersect");
    }
    else System.out.println("Circle 2 is at a wrong position");
    return b1;
  }
  public Circle union(Circle O2){
    Circle b1 = new Circle();
    if ((this.y == O2.y) && (this.x < O2.x))
    {
      if ((O2.x - this.x) < (O2.r + this.r))
      {
        double x1, x2;
        x1 = this.x - this.r;
        x2 = O2.x + O2.r;
        b1.r = (x2 - x1) / 2;
        b1.x = x1 + b1.r;
        b1.y = this.y;
      }
      else System.out.println("Circles do not intersect");
    }
    else System.out.println("Circle 2 has wrong position");
    return b1;
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
      return "Center is: "+getCircleCenter_x()+" "+getCircleCenter_y()+" Radius is "+getCircleRadius()+"; Length is "+getPerimeter()+"; Area is "+getSquare();
  }
}
