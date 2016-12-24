package classes;

import interfaces.Movable;

import java.util.Scanner;

/**
 * Created by user on 12-Dec-16.
 */
public class Grid {
    public Grid(){
        gridSize=0;
        robotCount=0;
    }
    public int gridSize;
    public int robotCount;
    public RobotGrid[] Robots;
    public Scanner input = new Scanner(System.in);
    private static class RobotGrid{
        enum RobotTypes{Wal,Shi,Rot}
        private RobotTypes type;
        RobotTypes getType(){
            return type;
        }
        void setType(RobotTypes type){
            this.type=type;
        }
    }

    public void viewRobotGrid(){
        for(int i=0; i<robotCount; i++){
            System.out.println(Robots[i].getType());
        }
    }
    public void setActionList() {
        System.out.println("Initialazing of robots");
        while (robotCount <= 0) {
            System.out.println("Set list length");
            robotCount = input.nextInt();
        }
    }
    public void initGrid(){
        System.out.println("Grid size:");
        gridSize=input.nextInt();

        do{
            System.out.println("Robot count:");
            robotCount=input.nextInt();
        }while(robotCount>gridSize*gridSize);

        Robots=new RobotGrid[robotCount];
        int robotType;
        System.out.println("List of robots on the grid (1,2,3)");
        for(int i=0; i<robotCount; i++){
            Robots[i] = new RobotGrid();
            do{
                robotType=input.nextInt();
                if(robotType==1)Robots[i].setType(RobotGrid.RobotTypes.Rot);
                else if(robotType==2)Robots[i].setType(RobotGrid.RobotTypes.Shi);
                else if(robotType==3)Robots[i].setType(RobotGrid.RobotTypes.Wal);
            }while(robotType!=1 && robotType!=2 && robotType!=3);
        }
    }
    public void Action(){
        setActionList();
        System.out.println("List:");
        viewRobotGrid();
//        Robot[] RobotsOnGrid;
//        RobotsOnGrid=new Robot[robotCount];
        for(int i=0; i<robotCount; i++){
            if(Robots[i].getType()==RobotGrid.RobotTypes.Rot){
                int x1,y1,c1;
                System.out.println("Enter rotobot location and course:");
                x1=input.nextInt();
                y1=input.nextInt();
                c1=input.nextInt();
                RotRobot rotobot=new RotRobot(x1,y1,c1);
                System.out.println(rotobot.getX()+" "+rotobot.getY()+" "+rotobot.getC());
                rotobot.Move();
                System.out.println(rotobot.getX()+" "+rotobot.getY()+" "+rotobot.getC());
            }
            else if(Robots[i].getType()==RobotGrid.RobotTypes.Shi){
                System.out.println("Enter rotobot shift:");
                ShiftRobot shiftobot=new ShiftRobot(2,1,90);
                System.out.println(shiftobot.getX()+" "+shiftobot.getY()+" "+shiftobot.getC());
                shiftobot.Move();
                System.out.println(shiftobot.getX()+" "+shiftobot.getY()+" "+shiftobot.getC());
            }
            else if(Robots[i].getType()==RobotGrid.RobotTypes.Wal){
                WalkingRobot walker=new WalkingRobot(0,0,0);
                System.out.println(walker.getX()+walker.getY()+walker.getC());
                walker.Move();
                System.out.println(walker.getX()+walker.getY()+walker.getC());
            }
        }
    }
}
