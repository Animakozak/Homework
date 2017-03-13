package sample.view;

/**
 * Created by Den on 07.03.2017.
 */

import javafx.fxml.FXML;
import javafx.scene.control.Label;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import sample.Main;
import sample.model.Person;

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

    /**
     * Is called by the main application to give a reference back to itself.
     *
     * @param mainApp
     */
    public void setMainApp(Main mainApp) {
        this.mainApp = mainApp;

        // Add observable list data to the table
        personTable.setItems(mainApp.getPersonData());
        personTableNew.setItems(mainApp.getPersonDataNew());
    }
}
