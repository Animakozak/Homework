package sample.model;

/**
 * Created by user on 07-Mar-17.
 */

import java.time.LocalDate;

import javafx.beans.property.IntegerProperty;
import javafx.beans.property.ObjectProperty;
import javafx.beans.property.SimpleIntegerProperty;
import javafx.beans.property.SimpleObjectProperty;
import javafx.beans.property.SimpleStringProperty;
import javafx.beans.property.StringProperty;

public class Person {
    private final StringProperty firstName;
    private final StringProperty lastName;
    private final StringProperty group;
    private final IntegerProperty yearEnrolled;
    private final IntegerProperty yearCourse;
    private final IntegerProperty subjectOOP;
    private final IntegerProperty subjectAlgo;
    private final IntegerProperty subjectProb;
//    private final ObjectProperty<LocalDate> birthday;

    //Default Constructor
    public Person(){
        this(null,null,null,0,0,0,0,0);
    }

    /*Constructor w/ initial data
     * @param firstName
     * @param lastName
     */
    public Person(String firstName, String lastName, String group, int yearEnrolled, int yearCourse, int OOP, int Algo, int Prob){
        this.firstName = new SimpleStringProperty(firstName);
        this.lastName = new SimpleStringProperty(lastName);
        this.group = new SimpleStringProperty(group);
        this.yearEnrolled = new SimpleIntegerProperty(yearEnrolled);
        this.yearCourse = new SimpleIntegerProperty(yearCourse);
        this.subjectOOP = new SimpleIntegerProperty(OOP);
        this.subjectAlgo = new SimpleIntegerProperty(Algo);
        this.subjectProb = new SimpleIntegerProperty(Prob);
    }

    public String getFirstName(){
        return firstName.get();
    }
    public void setFirstName(String firstName){
        this.firstName.set(firstName);
    }
    public StringProperty firstNameProperty(){
        return firstName;
    }

    public String getLastName(){
        return lastName.get();
    }
    public void setLastName(String lastName){
        this.lastName.set(lastName);
    }
    public StringProperty lastNameProperty(){
        return lastName;
    }

    public String getGroup(){
        return group.get();
    }
    public void setGroup(String group){
        this.group.set(group);
    }
    public StringProperty groupProperty(){
        return group;
    }

    public int getYearEnrolled(){
        return yearEnrolled.get();
    }
    public void setYearEnrolled(int yearEnrolled){
        this.yearEnrolled.set(yearEnrolled);
    }
    public IntegerProperty yearEnrolledProperty(){
        return yearEnrolled;
    }

    public int getYearCourse(){
        return yearCourse.get();
    }
    public void setYearCourse(int yearCourse){
        this.yearCourse.set(yearCourse);
    }
    public IntegerProperty yearCourseProperty(){
        return yearCourse;
    }

    public int getSubjectOOP(){
        return subjectOOP.get();
    }
    public void setSubjectOOP(int subjectOOP){
        this.subjectOOP.set(subjectOOP);
    }
    public IntegerProperty subjectOOPProperty(){
        return subjectOOP;
    }

    public int getSubjectAlgo(){
        return subjectAlgo.get();
    }
    public void setSubjectAlgo(int subjectAlgo){
        this.subjectAlgo.set(subjectAlgo);
    }
    public IntegerProperty subjectAlgoProperty(){
        return subjectAlgo;
    }

    public int getSubjectProb(){
        return subjectProb.get();
    }
    public void setSubjectProb(int subjectProb){
        this.subjectProb.set(subjectProb);
    }
    public IntegerProperty subjectProbProperty(){
        return subjectProb;
    }
//    public LocalDate getBirthday(){
//        return birthday.get();
//    }
//    public void getBirthday(LocalDate birthday){
//        this.birthday.set(birthday);
//    }
//    public ObjectProperty<LocalDate> birthdayProperty(){
//        return birthday;
//    }
}
