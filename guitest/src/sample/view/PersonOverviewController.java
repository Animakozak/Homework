package sample.view;

/**
 * Created by Den on 07.03.2017.
 */

import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import javafx.scene.control.Alert;
import javafx.scene.control.Label;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import sample.Main;
import sample.model.Person;

import java.util.Observable;

public class PersonOverviewController {
    @FXML
    private TableView<Person> personTable;
    @FXML
    private TableView<Person> personTableNew;
    @FXML
    private TableColumn<Person,String> firstNameColumn;
    @FXML
    private TableColumn<Person,String> lastNameColumn;
    @FXML
    private TableColumn<Person,String> groupColumn;
    @FXML
    private TableColumn<Person,Integer> yearEnrolledColumn;
    @FXML
    private TableColumn<Person,Integer> yearCourseColumn;
    @FXML
    private TableColumn<Person,Integer> subjectOOPColumn;
    @FXML
    private TableColumn<Person,Integer> subjectAlgoColumn;
    @FXML
    private TableColumn<Person,Integer> subjectProbColumn;
    @FXML
    private TableColumn<Person,String> firstNameColumnNew;
    @FXML
    private TableColumn<Person,String> lastNameColumnNew;
    @FXML
    private TableColumn<Person,String> groupColumnNew;
    @FXML
    private TableColumn<Person,Integer> yearEnrolledColumnNew;
    @FXML
    private TableColumn<Person,Integer> yearCourseColumnNew;
    @FXML
    private TableColumn<Person,Integer> subjectOOPColumnNew;
    @FXML
    private TableColumn<Person,Integer> subjectAlgoColumnNew;
    @FXML
    private TableColumn<Person,Integer> subjectProbColumnNew;
    @FXML
    private Label firstNameLabel;
    @FXML
    private Label lastNameLabel;
    @FXML
    private Label groupLabel;
    @FXML
    private Label yearEnrolledLabel;
    @FXML
    private Label yearCourseLabel;
    @FXML
    private Label subjectOOPLabel;
    @FXML
    private Label subjectAlgoLabel;
    @FXML
    private Label subjectProbLabel;
    /**
     * Called when the user clicks on the delete button.
     */
    @FXML
    private void handleDeletePerson() {
        int selectedIndex = personTable.getSelectionModel().getSelectedIndex();
        if(selectedIndex>=0) personTable.getItems().remove(selectedIndex);
        else{
            //Nothing is selected to delete
            Alert alert = new Alert(Alert.AlertType.WARNING);
            alert.initOwner(mainApp.getPrimaryStage());
            alert.setTitle("No Selection");
            alert.setHeaderText("No person selected");
            alert.setContentText("Please select a person in a table");

            alert.showAndWait();
        }
    }

    @FXML
    private void handleRefresh(){
        ObservableList<Person> personDataNew = FXCollections.observableArrayList();
        personDataNew.setAll(mainApp.getPersonData());

        personTableNew.setItems(personDataNew);

        for (int i=0; i<personDataNew.size();i++) {
            if((personDataNew.get(i).getSubjectOOP()+personDataNew.get(i).getSubjectAlgo()+personDataNew.get(i).getSubjectProb())/3.0<5){
                System.out.println("handleRefresh before removal");
                personDataNew.remove(i);
                i--;
                System.out.println("handleRefresh after removal");

            }
        }

        //Initialize new person table with modified data
        firstNameColumnNew.setCellValueFactory(cellData -> cellData.getValue().firstNameProperty());
        lastNameColumnNew.setCellValueFactory(cellData -> cellData.getValue().lastNameProperty());
        groupColumnNew.setCellValueFactory(cellData -> cellData.getValue().groupProperty());
        yearEnrolledColumnNew.setCellValueFactory(cellData -> cellData.getValue().yearEnrolledProperty().asObject());
        yearCourseColumnNew.setCellValueFactory(cellData -> cellData.getValue().yearCourseProperty().asObject());
        subjectOOPColumnNew.setCellValueFactory(cellData -> cellData.getValue().subjectOOPProperty().asObject());
        subjectAlgoColumnNew.setCellValueFactory(cellData -> cellData.getValue().subjectAlgoProperty().asObject());
        subjectProbColumnNew.setCellValueFactory(cellData -> cellData.getValue().subjectProbProperty().asObject());
    }
    // Reference to the main application.
    private Main mainApp;

    /**
     * The constructor.
     * The constructor is called before the initialize() method.
     */
    public PersonOverviewController() {
    }

    /**
     * Initializes the controller class. This method is automatically called
     * after the fxml file has been loaded.
     */
    @FXML
    private void initialize() {
        // Initialize the person table with initial data.
        firstNameColumn.setCellValueFactory(cellData -> cellData.getValue().firstNameProperty());
        lastNameColumn.setCellValueFactory(cellData -> cellData.getValue().lastNameProperty());
        groupColumn.setCellValueFactory(cellData -> cellData.getValue().groupProperty());
        yearEnrolledColumn.setCellValueFactory(cellData -> cellData.getValue().yearEnrolledProperty().asObject());
        yearCourseColumn.setCellValueFactory(cellData -> cellData.getValue().yearCourseProperty().asObject());
        subjectOOPColumn.setCellValueFactory(cellData -> cellData.getValue().subjectOOPProperty().asObject());
        subjectAlgoColumn.setCellValueFactory(cellData -> cellData.getValue().subjectAlgoProperty().asObject());
        subjectProbColumn.setCellValueFactory(cellData -> cellData.getValue().subjectProbProperty().asObject());
    }
    /*
     * Called when user clicks the "New" button.
     */
    @FXML
    private void handleNewPerson(){
        Person tempPerson = new Person();
        boolean okClicked = mainApp.showPersonEditDialog(tempPerson);
        if(okClicked){
            mainApp.getPersonData().add(tempPerson);
        }
    }

    /*
     * Fills all text fields to show details
     *
     * @param person the person or null
     */
    private void showPersonDetails(Person person){
        if(person!=null){
            //Fill the labels
            firstNameLabel.setText(person.getFirstName());
            lastNameLabel.setText(person.getLastName());
            groupLabel.setText(person.getGroup());
            yearCourseLabel.setText(String.valueOf(person.getYearCourse()));
            yearEnrolledLabel.setText(String.valueOf(person.getYearEnrolled()));
            subjectOOPLabel.setText(String.valueOf(person.getSubjectOOP()));
            subjectAlgoLabel.setText(String.valueOf(person.getSubjectAlgo()));
            subjectProbLabel.setText(String.valueOf(person.getSubjectProb()));
        }
        else{
            //null person
            firstNameLabel.setText("");
            lastNameLabel.setText("");
            groupLabel.setText("");
            yearCourseLabel.setText("");
            yearEnrolledLabel.setText("");
            subjectOOPLabel.setText("");
            subjectAlgoLabel.setText("");
            subjectProbLabel.setText("");
        }
    }

    /*
     * Called when user clicks "Edit" button
     */
    @FXML
    private void handleEditPerson(){
        Person selectedPerson = personTable.getSelectionModel().getSelectedItem();
        if(selectedPerson!=null){
            boolean okClicked = mainApp.showPersonEditDialog(selectedPerson);
        }
        else {
            //Nothing is selected to delete
            Alert alert = new Alert(Alert.AlertType.WARNING);
            alert.initOwner(mainApp.getPrimaryStage());
            alert.setTitle("No Selection");
            alert.setHeaderText("No person selected");
            alert.setContentText("Please select a person in a table");

            alert.showAndWait();
        }
    }

    /**
     * Is called by the main application to give a reference back to itself.
     *
     * @param mainApp
     */
    public void setMainApp(Main mainApp) {
        this.mainApp = mainApp;

        // Add observable list data to the table
        personTable.setItems(mainApp.getPersonData());
    }
}
