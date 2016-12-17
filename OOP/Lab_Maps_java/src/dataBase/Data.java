package dataBase;
import java.io.*;
import java.util.*;
/**
 * Created by Den on 17.12.2016.
 */
public class Data {
    private int size;
    Data(){
        size=10;
    }
    Data(int s){
        size=s;
    }
    Map<String, ArrayList<String>> geo = new HashMap<String, ArrayList<String>>();
    public void read(){
        Scanner console = new Scanner(System.in);
        System.out.println("Reading console input:");
        for(int t=0; t<size; t++){
            String co;
            String ci;
            System.out.println("Country (key):");
            co=console.nextLine();
            ArrayList<String> stringList=new ArrayList<>();
            System.out.println("Cities (values):");
            do{
                System.out.println("City (type \"!\" to stop):");
                ci=console.nextLine();
                if(!ci.equals("!")){
                    stringList.add(ci);
                }
            }while(!ci.equals("!"));
            geo.put(co, stringList);
        }
    }
    public void read(File file){
        Scanner fline = null;
        try{
            fline=new Scanner(file);
            while(fline.hasNextLine()){
                Scanner fword = new Scanner(fline.nextLine());
                String co = fword.next();
                ArrayList<String> stringList=new ArrayList<>();
                while(fword.hasNext()){
                    String ci=fword.next();
                    stringList.add(ci);
                }
                geo.put(co, stringList);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    public void disp(){
        System.out.println("List:");
        for(Map.Entry<String, ArrayList<String>> entry : geo.entrySet()){
            System.out.println(entry.getKey()+": "+entry.getValue());
        }
    }
    public void find(String q){
        if(geo.containsKey(q)) System.out.println("Search result for "+q+" : "+geo.get(q));
        else System.out.println("Nothing was found for "+q);
    }
    public void find(String q, int k){
        System.out.println("Search results: ");
        for(Map.Entry<String, ArrayList<String>> entry : geo.entrySet()){
            for(String word : entry.getValue()){
                if(word.equals(q)){
                    System.out.println(entry.getKey());
                }
            }
        }
    }
}
