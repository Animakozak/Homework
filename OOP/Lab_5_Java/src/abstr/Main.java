package abstr;

/**
 * Created by Den on 05.12.2016.
 */
public class Main {
    public static int randomWithRange(int min, int max){
        int range = (max - min) + 1;
        return (int)(Math.random() * range) + min;
    }
    public static void main(String[] args){
        Parallelepiped foo = new Parallelepiped(2,4,6,3);
        foo.getInfo();
        Ball bar = new Ball(4);
        bar.getInfo();
        System.out.println("-----Pointers-----");
        Body[] arr = new Body[3];
        for (int o=0; o<3; o++){
            if(o%2==0){
                if((randomWithRange(0,10))%2==0){
                    arr[o]=new Parallelepiped(2,4,6,3);
                }
                else{
                    arr[o]=new Parallelepiped(2,4,3,1);
                }
            }
            else{
                if((randomWithRange(0,10))%2==0){
                    arr[o]=new Ball(2);
                }
                else{
                    arr[o]=new Ball(3);
                }
            }
        }
        for(int o=0;o<3;o++){
            if(o%2==0) System.out.println("Parallelepiped:");
            else System.out.println("Ball:");
            arr[o].getInfo();
        }
    }
}
