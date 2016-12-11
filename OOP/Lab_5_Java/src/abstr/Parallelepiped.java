package abstr;

/**
 * Created by Den on 05.12.2016.
 */
public class Parallelepiped extends Body{
    public double a;
    public double b;
    public double c;
    public double h;
    Parallelepiped() {
        a=0;
        b=0;
        c=0;
        h=0;
    }
    Parallelepiped(double edgeA,double edgeB,double edgeC, double height) {
        a=edgeA;
        b=edgeB;
        c=edgeC;
        h=height;
    }
    public double baseArea(double edge, double height) {
        return edge*height;
    }
    public double area() {
        return 2*(baseArea(a,h))+2*(a*c+b*c);
    }
    public double volume(){
        return baseArea(a, h)*c;
    }
}
