/**
 * Created by Den on 29.09.2016.
 */
public class Kitty{
    static String name;
    static double mass;
    static int age;
    static String food;
    static boolean isAsleep;
    static boolean isHungry;
    public Kitty(String catName, int catAge, double catMass, String catFood, boolean catIsHungry, boolean catIsAsleep){
        name=catName;
        mass=catMass;
        age=catAge;
        food=catFood;
        isAsleep=catIsAsleep;
        isHungry=catIsHungry;
    };
    public static void feedCat(String giveFood){
        if(isHungry==true) System.out.println("Nay, hungry I am not");
        else{
            if (giveFood==food){
                isHungry=false;
                System.out.println("Meow! Delicious!");
            }
            else System.out.println("Yuk! What it tis'?");
        }
    }
    public static void wakeUp(String greeting){
        if(greeting.equals("Ahoj!"+name)){
            if (isAsleep == true){
                isAsleep = false;
                System.out.println("Meow!");
                isHungry = true;
                System.out.println("Hungry I am");
            }
        }
    }
}
