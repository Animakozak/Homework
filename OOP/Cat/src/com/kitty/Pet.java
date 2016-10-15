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
        String newName;
        System.out.println("Name: ");
        newName=input.nextLine();
        return name;
    }
    int setMass(){
        int newMass;
        System.out.println("Mass: ");
        newMass=input.nextInt();
        return newMass;
    }
    int setAge(){
        int newAge;
        System.out.println("Age: ");
        newAge=input.nextInt();
        return newAge;
    }
    String setFood() {
        String newFood;
        System.out.println("Food: ");
        newFood = input.nextLine();
        return newFood;
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
}
