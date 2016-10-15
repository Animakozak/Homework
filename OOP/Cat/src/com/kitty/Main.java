package com.kitty;
public class Main {
    public static void main(String[] args) {
        Kitty catWilliam = new Kitty();
        Dog dogDouge = new Dog();
        catWilliam.setStatusAwake("Ahoj!");
        catWilliam.setStatusAwake("Ahoj, William!");
        dogDouge.setStatusAwake("Ahoj, Dog!");
        dogDouge.setStatusAwake("Ahoj, Douge!");
        catWilliam.feedPet("fish");
        catWilliam.feedPet("chicken");
        catWilliam.feedPet("chicken");
        dogDouge.feedPet("chicken");
        dogDouge.feedPet("pork");
        dogDouge.feedPet("pork");
    }
}
