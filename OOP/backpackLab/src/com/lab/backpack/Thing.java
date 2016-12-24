/**
 * Created by Den on 21.12.2016.
 */
public class Thing {
    public int mass;
    public int value;
    public Thing(){
        mass=0;
        value=0;
    }
    public Thing(int m, int v){
        mass=m;
        value=v;
    }

    @Override
    public String toString() {
        return "{M: "+mass+"; V: "+value+"} ";
    }
}
