package sample;

import javafx.application.Application;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.layout.AnchorPane;
import javafx.scene.layout.BorderPane;
import javafx.stage.Modality;
import javafx.stage.Stage;
import sample.model.Person;
import sample.view.PersonEditDialogController;
import sample.view.PersonOverviewController;

import java.io.IOException;
import java.util.Observable;

public class Main extends Application {
    //Variables

    private Stage primaryStage;
    private BorderPane rootLayout;

    private ObservableList<Person> personData = FXCollections.observableArrayList();

    //Constructor

    public Main(){
        //Initial Data
        personData.add(new Person("Denys","Kuznietsov","CS21",2015,2,5,5,4));
        personData.add(new Person("Anton","Astakhov","CS21",2015,2,5,5,3));
        personData.add(new Person("Tatyanya","Buzikina","CS21",2015,2,4,5,4));
        personData.add(new Person("Alexandra","Tmenova","CS21",2015,2,5,5,5));
        personData.add(new Person("Ivan","Smotrizkiy","CS22",2015,2,4,4,3));
        personData.add(new Person("Eugene","Khoroshenko","CS21",2015,2,3,4,3));
        personData.add(new Person("Alexandr","Chudiy","CS22",2015,2,3,3,3));
        personData.add(new Person("Margo","Doroshenko","CS22",2015,2,5,4,3));

        //A-graders data
//        getAgraders(personData);
    }
    @Override
    public void start(Stage primaryStage){
        this.primaryStage = primaryStage;
        this.primaryStage.setTitle("Student Base");

        initRootLayout();

        showPersonOverview();
    }

    //RootLayout

    public void initRootLayout(){
        try{
            //Load fxml file
            FXMLLoader loader = new FXMLLoader();
            loader.setLocation(Main.class.getResource("view/RootLayout.fxml"));
            rootLayout = (BorderPane) loader.load();

            //Scene with root layout
            Scene scene = new Scene(rootLayout);
            primaryStage.setScene(scene);
            primaryStage.show();
        }
        catch (IOException e){
            e.printStackTrace();
        }
    }

    /**
     * Shows the person overview inside the root layout.
     */
    public void showPersonOverview() {
        try {
            // Load person overview.
            FXMLLoader loader = new FXMLLoader();
            loader.setLocation(Main.class.getResource("view/PersonOverview.fxml"));
            AnchorPane personOverview = (AnchorPane) loader.load();

            // Set person overview into the center of root layout.
            rootLayout.setCenter(personOverview);

            // Give the controller access to the main app.
            PersonOverviewController controller = loader.getController();
            controller.setMainApp(this);

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    /*
     * Loads Edit Dialog Window
     *
     * @param person to be edited
     * @return true - if clicked OK, false - otherwise
     */
    public boolean showPersonEditDialog(Person person){
        try {
            //Load fxml and create new stage for the dialog pop-up
            FXMLLoader loader = new FXMLLoader();
            loader.setLocation(Main.class.getResource("view/PersonEditDialog.fxml"));
            AnchorPane page = (AnchorPane) loader.load();

            //Dialog Stage
            Stage dialogStage = new Stage();
            dialogStage.setTitle("Edit Person");
            dialogStage.initModality(Modality.WINDOW_MODAL);
            dialogStage.initOwner(primaryStage);
            Scene scene = new Scene(page);
            dialogStage.setScene(scene);

            //Set the person into the controller
            PersonEditDialogController controller = loader.getController();
            controller.setDialogStage(dialogStage);
            controller.setPerson(person);

            //Show the dialog and wait until the user closes it
            dialogStage.showAndWait();

            return controller.isOkClicked();
        }
        catch (IOException e){
            return false;
        }
    }





    /* Returns the main Stage
     * @return
     */

    public Stage getPrimaryStage(){
        return primaryStage;
    }

    /* Returns the data as an observable list of persons
     * @return
     */

    public ObservableList<Person> getPersonData(){
        return personData;
    }

    /* Returns the data as an observable list of new persons
     * @return
     */

    public static void main(String[] args) {
        launch(args);
    }
}
