public class Main{
    public static void main(String[]args){
        lab_1 obj1 = new lab_1(0,0);
        lab_1 obj2 = new lab_1(0,0);
        obj1.setValue();
        obj1.getValue();
        obj2.setValue();
        System.out.println("Before:");
        obj2.getValue();
        obj2.sqr();
        System.out.println("After:");
        obj2.getValue();
        //array
        lab_1[] objArray;
        objArray = new lab_1[2];
        objArray[0]=obj1;
        objArray[1]=obj2;
        objArray[1].getValue();
        objArray[1].setValue();
        objArray[1].getValue();
        }
}