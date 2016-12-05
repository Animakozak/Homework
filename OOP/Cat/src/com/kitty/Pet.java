/**
 * Created by Den on 29.09.2016.
 */
package com.kitty;

import java.lang.String;
import java.util.Scanner;

class Pet{
    protected String name;
    protected  int mass;
    protected int age;
    protected String food;
    protected boolean isAsleep;
    protected boolean isHungry;
    Scanner input = new Scanner(System.in);
    String setName(){
        System.out.println("Name: ");
        name=input.nextLine();
        return name;
    }
    int setMass(){
        System.out.println("Mass: ");
        mass=input.nextInt();
        return mass;
    }
    int setAge(){
        System.out.println("Age: ");
        age=input.nextInt();
        return age;
    }
    String setFood() {
        System.out.println("Food: ");
        Scanner inputFood = new Scanner(System.in);
        food = inputFood.nextLine();
        return food;
    }
    boolean setStatusAsleep(){
        boolean statement;
        System.out.println("Asleep: ");
        statement=input.nextBoolean();
        return statement;
    }
    boolean setStatusHungry(){
        boolean statement;
        System.out.println("Hungry: ");
        statement=input.nextBoolean();
        return statement;
    }
    Pet(){
        isAsleep=true;
        isHungry=true;
    }
    String getName(){
        return name;
    }
    String getFood(){
        return food;
    }
    int getAge(){
        return age;
    }
    int getMass(){
        return mass;
    }
    void feedPet(String giveFood){
        if(!isHungry) System.out.println(name+":Nay, hungry I am not");
        else{
            if (giveFood.equals(food)){
                isHungry=false;
                System.out.println(name+":Delicious!");
            }
            else System.out.println(name+":Yuk! What it tis'?");
        }
    }
    void setStatusAwake(String greeting){
        if(greeting.equals("Ahoj, "+name+"!")){
            if (isAsleep){
                isAsleep = true;
                System.out.println(name+":Sir!");
                isHungry = true;
                System.out.println(name+":Hungry I am");
            }
        }
    }
    static int getPetAgeDiff(Pet one, Pet two){
        return one.getAge()-two.getAge();
    }
}