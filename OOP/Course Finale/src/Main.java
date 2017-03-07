/**
 * Created by Den on 17.01.2017.
 */
public class Main {
    public static void main(String[] args){
        Comparable[] Points = new Comparable[5];
        Points[0] = new Point(2,1);
        Points[1] = new Point3D(1,2,1);
        Points[2] = new Point(1,3);
        Points[3] = new Point3D(3,2,3);
        Points[4] = new Point3D();
        for(int i=0; i<5; i++){
            for(int j=1+i; j<5; j++){
                if(Points[i].compare(Points[j])==-1) System.out.println("Points["+j+"] "+Points[j]+" is farther than Points["+i+"] "+Points[i]+" distance to (0;0;0)");
                else if(Points[i].compare(Points[j])==0) System.out.println("Points["+j+"] and Points["+i+"] have equal distance to (0;0;0)");
                else System.out.println("Points["+i+"] "+Points[i]+" is farther than Points["+j+"] "+Points[j]+" distance to (0;0;0)");
            }
        }
    }
}
