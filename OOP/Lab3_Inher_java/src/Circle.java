/**
 * Created by user on 10-Nov-16.
 */
public class Circle extends Point{

    Circle(){
        x1=0;
        y1=0;
        setCircleRadius();
    }
    Circle(double a, double b, double c, double d){
        x1=c;
        y1=d;
        setCircleRadius();
    }
    public void setCircleCoordinate_X(float a){
        x1=a;
    }
    public void setCircleCoordinate_Y(float b){
        y1=b;
    }
    public double getCircleRadius(){
        return Math.sqrt(Math.pow((x1-x),2)+Math.pow((y1-y),2));
    }
    public void setCircleRadius(){

    }
    public void initCircle(float circleCenterX, float circleCenterY, float circlePointX, float circlePointY){

    }
    public double getCircleLength(){

    }
    public float getCircleSquare(){

    }
    public void getCircleStats_MSG(){

    }
    public void getCircleLength_MSG(){

    }
    public void getCircleSquare_MSG(){

    }
    private double x1;
    private double y1;
    private double circleRadius;
    private double Pi=3.14;
}
