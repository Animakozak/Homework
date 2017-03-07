/**
 * Created by Den on 17.01.2017.
 */
public class Point3D extends Point implements Comparable{
    int z;
    public Point3D(){
        super();
        z=0;
    }
    public Point3D(int a, int b, int c){
        super(a,b);
        z=c;
    }
    public void setPointZ(int c){z=c;}
    public int getPointZ(){return z;}
    public double getDist(){
        return Math.sqrt(Math.pow(getPointX(),2)+Math.pow(getPointY(),2)+Math.pow(getPointZ(),2));
    }
    @Override
    public String toString(){
        return "("+getPointX()+";"+getPointY()+";"+getPointZ()+")";
    }
}
