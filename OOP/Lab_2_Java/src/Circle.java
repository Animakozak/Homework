/**
 * Created by user on 19-Oct-16.
 */
public class Circle {
public:
  float x, y, r;
  Circle(){
    x=0;
    y=0;
    r=0;
  }
  Circle(float a, float b, float c){
    x=a;
    y=b;
    r=c;
  }
  float getPerimeter();
  float getSquare();
  void scale();
  void move();
  boolean intersects();
  void union();
  void equals();
  void toString();
  float setCircleCenter_x();
  float setCircleCenter_y();
  void getCircleCenter_x();
  void getCircleCenter_y();
}
