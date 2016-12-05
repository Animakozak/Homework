package inher;
import java.util.Scanner;
/**
 * Created by user on 10-Nov-16.
 */
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter circleCenterX, circleCenterY, circlePointX, circlePointY");
        double a = input.nextDouble();
        double b = input.nextDouble();
        double c = input.nextDouble();
        double d = input.nextDouble();
        Circle circlePoint = new Circle(a,b,c,d);
        circlePoint.getCircleStats_MSG();
        circlePoint.getCircleLength_MSG();
        circlePoint.getCircleSquare_MSG();
    }
}
