package com.kitty;
public class Main {
    public static void main(String[] args) {
        Kitty catWilliam = new Kitty("William", 3, 5.2, "chicken", true, true);
        Kitty.wakeUp("Ahoj!");
        Kitty.wakeUp("Ahoj, William!");
        Kitty.feedCat("fish");
        Kitty.feedCat("chicken");
        Kitty.feedCat("chicken");
    }
}
