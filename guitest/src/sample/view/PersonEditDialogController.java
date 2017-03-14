package sample.view;

import javafx.fxml.FXML;
import javafx.scene.control.Alert;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.control.TextField;
import javafx.stage.Stage;
import sample.model.Person;

/**
 * Created by user on 14-Mar-17.
 */
/*
 * Dialog to edit table
 * @author Denys Kuznietsov
 */
public class PersonEditDialogController {
    @FXML
    private TextField firstNameField;
    @FXML
    private TextField lastNameField;
    @FXML
    private TextField groupField;
    @FXML
    private TextField yearEnrolledField;
    @FXML
    private TextField yearCourseField;
    @FXML
    private TextField subjectOOPField;
    @FXML
    private TextField subjectAlgoField;
    @FXML
    private TextField subjectProbField;

    private Stage dialogStage;
    private Person person;
    private Boolean okClicked=false;

    /*
     * Initializes the controller class.
     * Executes
     */

    @FXML
    private void initalize(){}

    /*
     * Sets Stage
     *
     * @param dialogStage
     */
    public void setDialogStage(Stage dialogStage){
        this.dialogStage = dialogStage;
    }

    /*
     * Sets editable person
     *
     * @param person
     */
    public void setPerson(Person person){
        this.person = person;

        firstNameField.setText(person.getFirstName());
        lastNameField.setText(person.getLastName());
        groupField.setText(person.getGroup());
        yearCourseField.setText(String.valueOf(person.getYearCourse()));
        yearEnrolledField.setText(String.valueOf(person.getYearEnrolled()));
        subjectOOPField.setText(String.valueOf(person.getSubjectOOP()));
        subjectAlgoField.setText(String.valueOf(person.getSubjectAlgo()));
        subjectProbField.setText(String.valueOf(person.getSubjectProb()));
    }

    /*
     * true - OK is clicked
     * false - else
     *
     * @return
     */
    public boolean isOkClicked(){
        return okClicked;
    }

    //TODO handleOK()
}
