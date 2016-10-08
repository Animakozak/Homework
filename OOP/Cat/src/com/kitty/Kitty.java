/**
 * Created by Den on 29.09.2016.
 */
package com.kitty;

import java.lang.String;

class Kitty{
    private static String name;
    private static double mass;
    private static int age;
    private static String food;
    private static boolean isAsleep;
    private static boolean isHungry;
    Kitty(String catName, int catAge, double catMass, String catFood, boolean catIsHungry, boolean catIsAsleep){
        name=catName;
        mass=catMass;
        age=catAge;
        food=catFood;
        isAsleep=catIsAsleep;
        isHungry=catIsHungry;
    }
    static void feedCat(String giveFood){
        if(!isHungry) System.out.println("Nay, hungry I am not");
        else{
            if (giveFood.equals(food)){
                isHungry=false;
                System.out.println("Meow! Delicious!");
            }
            else System.out.println("Yuk! What it tis'?");
        }
    }
    static void wakeUp(String greeting){
        if(greeting.equals("Ahoj, "+name+"!")){
            if (isAsleep){
                isAsleep = false;
                System.out.println("Meow, Sir!");
                isHungry = true;
                System.out.println("Hungry I am");
            }
        }
    }
}
