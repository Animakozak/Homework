package com.kitty;

/**
 * Created by user on 06-Oct-16.
 */
public class Kitty extends Pet{
//    Kitty(){
//        name="William";
//        age=3;
//        mass=5;
//        food="chicken";
//        isAsleep=true;
//        isHungry=true;
//    }
    Kitty(){
        isAsleep=true;
        isHungry=true;
    }
    Kitty(String catName, int catAge, int catMass, String catFood){
        name=catName;
        age=catAge;
        mass=catMass;
        food=catFood;
        isAsleep=true;
        isHungry=true;
    }
}
