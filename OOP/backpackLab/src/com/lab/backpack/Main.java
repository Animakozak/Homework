import java.util.*;

/**
 * Created by Den on 21.12.2016.
 */
public class Main extends Thing{

    //Powerset
    //Generates subsets of a set given. (Yes, tis is a method. Unbelievable, I know)

    public static Set<Set<Thing>> powerSet(Set<Thing> originalSet){
        Set<Set<Thing>> sets = new HashSet<Set<Thing>>();
        if(originalSet.isEmpty()){
            sets.add(new HashSet<Thing>());
            return sets;
        }
        List<Thing> list = new ArrayList<Thing>(originalSet);
        Thing head = list.get(0);
        Set<Thing> rest = new HashSet<Thing>(list.subList(1,list.size()));
        for(Set<Thing> set : powerSet(rest)){
            Set<Thing> newSet = new HashSet<Thing>();
            newSet.add(head);
            newSet.addAll(set);
            sets.add(newSet);
            sets.add(set);
        }
        return sets;
    }

    public static Thing sum(Set<Thing> combo){
        Thing summary=new Thing();

        for(Thing current : combo){
            summary.mass+=current.mass;
            summary.value+=current.value;
        }

        return summary;
    }

    //Main
    public static void main(String[] args){
        int heapQuantity;
        int w;                                  //Maximum capacity for a backpack
        Scanner input = new Scanner(System.in);
        Set<Thing> Heap = new HashSet<Thing>();

        //Adding things to a heap
        System.out.println("Maximum backpack capacity: ");
        w=input.nextInt();

        System.out.println("Quantity of things in heap: ");
        heapQuantity=input.nextInt();

        for(int i=0; i<heapQuantity; i++){
            System.out.println("Input weight and then value");
            int a = input.nextInt();    //mass
            int b = input.nextInt();    //value
            Heap.add(new Thing(a,b));
        }

        //Generating all subsets possible
        //Checking for maximum sum and if its overall mass is valid

        Thing bestCombo = new Thing();              //Keeps the best combination
        Thing currentCombo = new Thing();           //Iterates through and seeks for best combination
        Set<Thing> returnCombo = new HashSet<Thing>();  //RESULT STORAGE

        for(Set<Thing> current : powerSet(Heap)){
            currentCombo=sum(current);
            if(currentCombo.mass<=w){               //If the mass is valid
                if(currentCombo.value>bestCombo.value){ //and it's better
                    bestCombo=currentCombo;
                    returnCombo=current;
                }
                else if(currentCombo.value==bestCombo.value && currentCombo.mass<bestCombo.mass){ //if equals, take the lightest
                    bestCombo=currentCombo;
                    returnCombo=current;
                }
            }
        }

        System.out.println("Best case, with "+bestCombo.mass+"kg and "+bestCombo.value+" worth, is *FANFARES AND DRUM ROLL* : "+returnCombo);
    }
}
