package abstr;
/**
 * Created by Den on 05.12.2016.
 */
//import static java.lang.Math.tan;
public abstract class Body{
    public double radIn;
    public double radOut;
    public double faceNum;
    public double p;
    public double a;
    Body(){
        radIn=1;
        radOut=0.5;
        faceNum=5;
        p=3;
    }
    Body(double radiusInner, double radiusOuter, double facePerVertexQuantity, double edgePerVertexQuantity, double edgeLength){
        radIn=radiusInner;
        radOut=radiusOuter;
        faceNum=facePerVertexQuantity;
        p=edgePerVertexQuantity;
        a=edgeLength;
    }
    public abstract double area(); /*{
        return (a/2.0)*(a/2.0)*faceNum*p*1/tan(3.14/p);
    }*/
    public abstract double volume(); /*{
        return radIn*radIn*p*tan(3.14/p)*radIn*1/3.0;
    }*/
    final public void getInfo() {
        System.out.println("Area: "+area()+"Volume: "+volume());
    }
}
