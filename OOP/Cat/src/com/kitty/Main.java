package com.kitty;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
//        Kitty catWilliam = new Kitty();
//        Dog dogDouge = new Dog();
/* These lines are from original Pet assignment;
* Comment everything between this comment and the lower one;
* Uncomment everything outside;
*/
//      AGE COMPARISON AND FOOD CONSUMPTION
        Kitty[] cats = new Kitty[5]; //13.10
        for(int i=0; i<5; i++){
            cats[i] = new Kitty();
            cats[i].name = cats[i].setName();
            cats[i].age = cats[i].setAge();
            cats[i].food = cats[i].setFood();
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
//        String[] kittyFood = new String[5];
//        for (int a=0; a<5; a++){
//          for (int v=0; v<5; v++)
//            if (!cats[a].food.equals(kittyFood[v])){
//              if(kittyFood[v].equals("")){
//                kittyFood[v]=cats[a].food;
//              }
//              else{
//                v++;
//                kittyFood[v]=cats[a].food;
//              }
//          }
//        }
//        for(int i=0; i<5; i++){
//          System.out.println(kittyFood[i]);
//        }
/*This is original Pet assignment stuff
* Please comment down everything between this comment and the upper one to get things work
* Uncomment everything outside
*/
//        ORIGINAL TEST LINES; 
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
