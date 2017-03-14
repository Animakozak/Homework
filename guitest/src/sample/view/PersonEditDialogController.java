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

    @FXML
    private void handleOK(){
        if(isInputValid()){
            person.setFirstName(firstNameField.getText());
            person.setLastName(lastNameField.getText());
            person.setGroup(groupField.getText());
            person.setYearCourse(Integer.parseInt(yearCourseField.getText()));
            person.setYearEnrolled(Integer.parseInt(yearEnrolledField.getText()));
            person.setSubjectOOP(Integer.parseInt(subjectOOPField.getText()));
            person.setSubjectAlgo(Integer.parseInt(subjectAlgoField.getText()));
            person.setSubjectProb(Integer.parseInt(subjectProbField.getText()));

            okClicked=true;
            dialogStage.close();
        }
    }
    /*
     * Called on Cancel
     */
    @FXML
    private void handleCancel(){
        dialogStage.close();
    }
    /*
     * Validates the user input in text fields
     *
     * @return true if valid
     */
    private boolean isInputValid(){
        String errorMessage = "";

        if(firstNameField.getText()==null || firstNameField.getText().length()==0){errorMessage+="No valid first name";}
        if(lastNameField.getText()==null || lastNameField.getText().length()==0){errorMessage+="No valid last name";}
        if(groupField.getText()==null || groupField.getText().length()==0){errorMessage+="No valid group";}
        if (yearEnrolledField.getText() == null || yearCourseField.getText().length() == 0) {
            errorMessage += "No valid postal code!\n"; 
        } else {
            // try to parse the postal code into an int.
            try {
                Integer.parseInt(yearCourseField.getText());
            } catch (NumberFormatException e) {
                errorMessage += "No valid year (must be an integer)!\n";
            }
        }
        if (yearEnrolledField.getText() == null || yearEnrolledField.getText().length() == 0) {
            errorMessage += "No valid postal code!\n"; 
        } else {
            // try to parse the postal code into an int.
            try {
                Integer.parseInt(yearEnrolledField.getText());
            } catch (NumberFormatException e) {
                errorMessage += "No valid enrollment year (must be an integer)!\n"; 
            }
        }
        if (subjectOOPField.getText() == null || subjectOOPField.getText().length() == 0) {
            errorMessage += "No valid postal code!\n"; 
        } else {
            // try to parse the postal code into an int.
            try {
                Integer.parseInt(subjectOOPField.getText());
            } catch (NumberFormatException e) {
                errorMessage += "No valid mark for OOP (must be an integer)!\n"; 
            }
        }
        if (subjectAlgoField.getText() == null || subjectAlgoField.getText().length() == 0) {
            errorMessage += "No valid postal code!\n"; 
        } else {
            // try to parse the postal code into an int.
            try {
                Integer.parseInt(subjectAlgoField.getText());
            } catch (NumberFormatException e) {
                errorMessage += "No valid mark for Algorithmization (must be an integer)!\n"; 
            }
        }
        if (subjectProbField.getText() == null || subjectProbField.getText().length() == 0) {
            errorMessage += "No valid postal code!\n"; 
        } else {
            // try to parse the postal code into an int.
            try {
                Integer.parseInt(subjectProbField.getText());
            } catch (NumberFormatException e) {
                errorMessage += "No valid mark for Probability Theory (must be an integer)!\n"; 
            }
        }
        if(errorMessage.length()==0){return true;}
        else{
            //Show the error message
            Alert alert = new Alert(AlertType.ERROR);
            alert.initOwner(dialogStage);
            alert.setTitle("Invalid Fields");
            alert.setHeaderText("Please correct invalid fields");
            alert.setContentText(errorMessage);

            alert.showAndWait();

            return false;
        }
    }

}
