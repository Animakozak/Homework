package abstr;

/**
 * Created by Den on 05.12.2016.
 */
public class Ball extends Body{
    public double r;
    Ball() {
        r=0;
    }
    Ball(double radius) {
        r=radius;
    }
    public double area() {
        return r*r*4*3.14;
    }
    public double volume() {
        return 4.0/3.0*r*r*r*3.14;
    }
}
