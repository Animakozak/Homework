/**
 * Created by Den on 29.09.2016.
 */
public class Kitty{
    String name;
    float mass;
    int age;
    String food;
    boolean isAsleep;
    boolean isHungry;
    public Kitty(String catName, int catAge, float catMass, String catFood, boolean catIsHungry, boolean catIsAsleep){
        name=catName;
        mass=catMass;
        age=catAge;
        food=catFood;
        isAsleep=catIsAsleep;
        isHungry=catIsHungry;
    };
    public void feedCat(String giveFood){
        if(isHungry==true) System.out.println("Nay, hungry I am not");
        else{
            if (giveFood==food){
                isHungry=false;
                System.out.println("Meow! Delicious!");
            }
            else System.out.println("Yuk! What it tis'?");
        }
    }
    public void wakingUp(String greeting){
        if(greeting == "Ahoj!"){
            if (isAsleep == true){
                isAsleep = false;
                System.out.println("Meow!");
                isHungry = true;
                System.out.println("Hungry I am");
            }
        }
    }
}
