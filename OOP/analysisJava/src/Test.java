/**
 * Created by Den on 18.01.2017.
 */
public class Test {
    float fVal = 0.0f;
    public Test(){}
    public static void main(String[] args){
        Test t = new Test();
        String testVal = "1";
        System.out.println("return = "+t.testParse(testVal));
    }
    private boolean testParse(String val){
        try{
            fVal=Float.parseFloat(val);
            return true;
        }
        catch (Exception ex){
            System.out.println("Test.testParse - wrong "+val);
            fVal=Float.NaN;
        }
        return false;
    }
}

