/**
 * Created by user on 10-Nov-16.
 */
public class Point {
    public Point(){
        x=0;
        y=0;
    }
    public Point(float a, float b){
        x=a;
        y=b;
    }
    public void setPointCoordinate_X(float input){
        x=input;
    }
    public void setPointCoordinate_Y(float input){
        y=input;
    }
    protected double x;
    protected double y;
}
