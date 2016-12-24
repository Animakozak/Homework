package com.circle; /**
 * Created by user on 19-Oct-16.
 */
import java.util.Scanner;
class Main {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    Circle Circle1 = new Circle();                      //Creating first circle
    System.out.println("Type in x coordinate:");
    Circle1.setCircleCenter_x(input.nextDouble());
    System.out.println("Type in y coordinate:");
    Circle1.setCircleCenter_y(input.nextDouble());
    System.out.println("Type in radius:");
    Circle1.setCircleRadius(input.nextDouble());
    Circle Circle2 = new Circle();                      //Creating second circle
    System.out.println("Type in x coordinate:");
    Circle2.setCircleCenter_x(input.nextDouble());
    System.out.println("Type in y coordinate:");
    Circle2.setCircleCenter_y(input.nextDouble());
    System.out.println("Type in radius:");
    Circle2.setCircleRadius(input.nextDouble());
    //methods
//    Circle1.toString();
//    System.out.println("Circle1 length is " + Circle1.getPerimeter());
//    System.out.println("Circle1 square is " + Circle1.getSquare());
//    Circle2.toString();
//    System.out.println("Circle2 length is " + Circle2.getPerimeter());
//    System.out.println("Circle2 square is " + Circle2.getSquare());
    System.out.println(Circle1);
    System.out.println(Circle2);
    System.out.println("Type in offset (Ox, Oy)");
    double Ox = input.nextDouble();                     //Ox offset - 0, if you don't want to offset Circle 2
    double Oy = input.nextDouble();                     //Oy offset - 0, if you don't want to offset Circle 2
    Circle2.move(Ox,Oy);
    System.out.println(Circle2);
    System.out.println("Type in scale measure"); //Upscale Circle 1
    double Or = input.nextDouble();
    Circle1.scale(Or);
    System.out.println(Circle1);
    System.out.println("Union of Circle1 and Circle2: "+Circle1.union(Circle2));
    System.out.println("Circle, folded in the intersection of Circle1 and Circle2: "+Circle1.intersects(Circle2));
  }
}
