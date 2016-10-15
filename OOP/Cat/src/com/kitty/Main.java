package com.kitty;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
//        Kitty catWilliam = new Kitty();
//        Dog dogDouge = new Dog();
        Kitty[] cats = new Kitty[5]; //13.10
        for(int i=0; i<5; i++){
            cats[i] = new Kitty();
            cats[i].name = cats[i].setName();
            cats[i].age = cats[i].setAge();
        }
        for(int a=0; a<5; a++){
            for(int b=a+1; b<5; b++){
                if(Pet.getPetAgeDiff(cats[a],cats[b])>0){
                    System.out.println(cats[a].getName() + " is older than " + cats[b].getName() + " on " + Pet.getPetAgeDiff(cats[a],cats[b]));
                }
                else if(Pet.getPetAgeDiff(cats[a],cats[b])<0){
                    System.out.println(cats[a].getName() + " is younger than " + cats[b].getName() + " on " + (-Pet.getPetAgeDiff(cats[a],cats[b])));
                }
                else{
                    System.out.println("Pets " + cats[a].getName() + " and " + cats[b].getName() + "ages are equal");
                }
            }
        }

//        catWilliam.setStatusAwake("Ahoj!");
//        catWilliam.setStatusAwake("Ahoj, William!");
//        dogDouge.setStatusAwake("Ahoj, Dog!");
//        dogDouge.setStatusAwake("Ahoj, Douge!");
//        catWilliam.feedPet("fish");
//        catWilliam.feedPet("chicken");
//        catWilliam.feedPet("chicken");
//        dogDouge.feedPet("chicken");
//        dogDouge.feedPet("pork");
//        dogDouge.feedPet("pork");
    }
}
