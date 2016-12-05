package inher;

/**
 * Created by user on 10-Nov-16.
 */
public class Circle extends Point {

    Circle(){
        x1=0;
        y1=0;
        setCircleRadius();
    }
    Circle(double a, double b, double c, double d){
        super(a,b);
        x1=c;
        y1=d;
        setCircleRadius();
    }
    public void setCircleCoordinate_X(double a){
        x1=a;
    }
    public void setCircleCoordinate_Y(double b){
        y1=b;
    }
    public double getCircleRadius(){
        return Math.sqrt(Math.pow((x1-x),2)+Math.pow((y1-y),2));
    }
    public void setCircleRadius(){
        circleRadius=getCircleRadius();
    }
    public void initCircle(double circleCenterX, double circleCenterY, double circlePointX, double circlePointY){
        setPointCoordinate_X(circleCenterX);
        setPointCoordinate_Y(circleCenterY);
        setCircleCoordinate_X(circlePointX);
        setCircleCoordinate_Y(circlePointY);
        setCircleRadius();
    }
    public double getCircleLength(){
        return circleRadius*2*Pi;
    }
    public double getCircleSquare(){
        return circleRadius*circleRadius*Pi;
    }
    public void getCircleStats_MSG(){
        System.out.println("inher.Circle Center Coordinates are: ("+x+";"+y+")"+"inher.Circle point Coordinates are: ("+x1+";"+y1+")"+"inher.Circle Radius is "+circleRadius);
    }
    public void getCircleLength_MSG(){
        System.out.println("inher.Circle length is "+getCircleLength());
    }
    public void getCircleSquare_MSG(){
        System.out.println("inher.Circle square is "+getCircleSquare());
    }
    private double x1;
    private double y1;
    private double circleRadius;
    private double Pi=3.14;
}
