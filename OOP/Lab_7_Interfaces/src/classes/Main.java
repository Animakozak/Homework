package classes;

import java.util.Scanner;

/**
 * Created by user on 12-Dec-16.
 */
public class Main {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        System.out.println("Choose robot type: 1-ShiftRobot, 2-RotRobot, 3-WalkingRobot, 4-Grid:");
        if(in.nextInt()==1){
            System.out.println("Shift robot");
            ShiftRobot shiftobot = new ShiftRobot();
            System.out.println(shiftobot.getX()+" "+shiftobot.getY()+" "+shiftobot.getC());
            shiftobot.Move();
            System.out.println(shiftobot.getX()+" "+shiftobot.getY()+" "+shiftobot.getC());
        }
        else if(in.nextInt()==2){
            System.out.println("Rotation robot");
            RotRobot rotorobot = new RotRobot();
            System.out.println(rotorobot.getX()+" "+rotorobot.getY()+" "+rotorobot.getC());
            rotorobot.Move();
            System.out.println(rotorobot.getX()+" "+rotorobot.getY()+" "+rotorobot.getC());
        }
        else if(in.nextInt()==3){
            System.out.println("Walking robot");
            WalkingRobot walker = new WalkingRobot();
            System.out.println(walker.getX()+" "+walker.getY());
            walker.Move();
            System.out.println(walker.getX()+" "+walker.getY());
        }
        else if(in.nextInt()==4){
            Grid myGrid = new Grid();
            myGrid.initGrid();
            myGrid.Action();
        }
    }
}
