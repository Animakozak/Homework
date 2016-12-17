package dataBase;

import java.io.File;
import java.util.Scanner;

/**
 * Created by Den on 17.12.2016.
 */
public class Main {
    public static void main(String[] args){
        Data One = new Data(3);
        int choice1;
        Scanner input=new Scanner(System.in);
        do{
            System.out.println("Where to read from: console(1) or file(2)?");
            choice1=input.nextInt();
        }while(choice1!=1 && choice1!=2);
        if(choice1==1){
            One.read();
        }
        else if(choice1==2){
            File file = new File("D:/dataBaseTwo.txt");
            One.read(file);
        }
        One.disp();
        System.out.println("What to search for: Country(key)(1) or City(value)(2)?");
        int choice2;
        do{
            choice2=input.nextInt();
            System.out.println("Query: ");
            String query = input.next();
            if(choice2==1) One.find(query);
            else if(choice2==2) One.find(query,0);
        }while(choice2!=1 && choice2!=2);
    }
}
