package inher;

/**
 * Created by user on 10-Nov-16.
 */
public class Circle extends Point {

    Circle(){
        x1=0;
        y1=0;
        
    }
    Circle(double a, double b, double c, double d){
        super(a,b);
        x1=c;
        y1=d;
        
    }
    public void view(){System.out.println("("+x1+";"+y1+")");}
    public double getCircleRadius(){
        return Math.sqrt(Math.pow((x1-x),2)+Math.pow((y1-y),2));
    }
    public double getCircleLength(){
        return getCircleRadius()*2*Pi;
    }
    public double getCircleSquare(){
        return getCircleRadius()*getCircleRadius()*Pi;
    }
    public void getCircleStats_MSG(){
        System.out.println("Circle Center Coordinates are: ");
        super.view();
        System.out.println("Circle point Coordinates are: ");
//        view(x1,y1);
        view();
        System.out.println("Radius is "+getCircleRadius());
    }
    public void getCircleLength_MSG(){
        System.out.println("Circle length is "+getCircleLength());
    }
    public void getCircleSquare_MSG(){
        System.out.println("Circle square is "+getCircleSquare());
    }
    private double x1;
    private double y1;
    private double Pi=3.14;
}
