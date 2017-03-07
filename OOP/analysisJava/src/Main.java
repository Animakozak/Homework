/**
 * Created by Den on 18.01.2017.
 */
class A{
    public A(){
        System.out.println("A created");
    }
    String name = "a";
    String test(){return "test A";}
}
class B extends A{
    public B(){
        System.out.println("B created");
    }
    String name = "b";
    String test(){return  "test B";}
}
class C extends B{
    public C(){
        System.out.println("C created");
    }
    String name = "c";
    String test(){return "test C";}
}
public class Main {
    public static void main(String[] argrs){
        new Main().go();
    }
    void go(){
        A m = new C();
        if(m instanceof A) System.out.println("instance of A");
        if(m instanceof B) System.out.println("instance of B");
        if(m instanceof C) System.out.println("instance of C");
        System.out.println(m.name+" "+m.test());
    }
}
