import java.lang.Math.*;
public class Point implements Comparable{
    int x;
    int y;
    public Point(){
        x=0;
        y=0;
    }
    public Point(int a, int b){
        x=a;
        y=b;
    }
    public void setPointX(int a){
        x=a;
    }
    public void setPointY(int b){
        y=b;
    }
    public int getPointX(){
        return x;
    }
    public int getPointY(){
        return y;
    }
    public double getDist(){
        return Math.sqrt(Math.pow(getPointX(),2)+Math.pow(getPointY(),2));
    }
    public int compare(Comparable other){
        if (getDist()<other.getDist()) return -1;
        else if(getDist()==other.getDist()) return 0;
        else return 1;
    }
    @Override 
    public String toString(){
        return "("+getPointX()+";"+getPointY()+")";
    }
}