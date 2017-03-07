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
    private final StringProperty street;
    private final IntegerProperty postalCode;
    private final StringProperty city;
    private final ObjectProperty<LocalDate> birthday;

    //Default Constructor
    public Person(){
        this(null,null);
    }

    /*Constructor w/ initial data
     * @param firstName
     * @param lastName
     */
    public Person(String firstName, String lastName){
        this.firstName = new SimpleStringProperty(firstName);
        this.lastName = new SimpleStringProperty(lastName);
        this.street = new SimpleStringProperty("Enter Street");
        this.postalCode = new SimpleIntegerProperty(02140);
        this.city = new SimpleStringProperty("Enter City");
        this.birthday = new SimpleObjectProperty<LocalDate>(LocalDate.of(1998,2,21));
    }
    public String getFirstName(){
        return firstName.get();
    }
    public void setFirstName(String firstName){
        this.firstName.set(firstName);
    }
    public String getLastName(){
        return lastName.get();
    }
    public String setLastName(String lastName){
        this.lastName.set(lastName);
    }
    public StringProperty lastNameProperty(){
        return lastName;
    }
    public String getStreet(){
        return street.get();
    }
    public void setStreet(String street){
        this.street.set(street);
    }
    public StringProperty streetProperty(){
        return street;
    }
    public String getCity(){
        return street.get();
    }
    public void setCity(String city){
        this.city.set(city);
    }
    public StringProperty city(){
        return city;
    }
    public LocalDate getBirthday(){
        return birthday.get();
    }
}
