package io.github.samstan4.view;

// Exceptions that can be thrown here.
import java.io.FileNotFoundException;

// Support.
import java.net.URL;

// UI support from javafx.
import javafx.scene.layout.BorderPane;
import javafx.scene.control.TableView;
import javafx.scene.Scene;

public class MainView {

  private Scene scene;
  private BorderPane rootElement;
  private TableView<String> cellSheet;

  /**
   * @apiNote This is the constructor for this class. I am essentially setting up all of the UI here, and in
   *          other support functions that can be found here in this class.
   */
  public MainView() throws FileNotFoundException {
    this.initializeRootElement();
    this.scene = new Scene(this.rootElement, 640, 480);
    this.scene.getStylesheets().add(this.loadStyleSheet());

    // TODO: link this up
    this.initializeCellSheet();
  }

  /**
   * @apiNote This is just a simple getter for the scene. This is called by the App.java file so that it
   *          can render the application.
   * @return Returns the scene of the entire ExHell application.
   */
  public Scene getScene() {
    return this.scene;
  }

  /**
   * @apiNote This is just a simple getter for the cell sheet, the core of this application. The logic of this application
   *          is going to require access to this.
   * @return Returns the cell sheet that this application runs on.
   */
  public TableView<String> getCellSheet() {
    return this.cellSheet;
  }

  /**
   * @apiNote This function simple initializes the root element of the application. This includes allocating it
   *          and assigning it the class name of "root" so that we can select it in the stylesheet.
   */
  private void initializeRootElement() {
    this.rootElement = new BorderPane();
    rootElement.getStyleClass().add("root");
  }

  /**
   * @apiNote This function simply initializes the table view (cell sheet) of this application. This includes allocating
   *          it and then setting the size.
   * TODO: set the size of the table
   */
  private void initializeCellSheet() {
    this.cellSheet = new TableView<>();
  }

  /**
   * @apiNote This will load the string representation of the style sheet that exists in the resources directory.
   * @return The string representation of the application's stylesheet
   * @throws FileNotFoundException If the styles.css is not found, an exception is thrown and the app crashes.
   */
  private String loadStyleSheet() throws FileNotFoundException {
    final URL cssStyleSheet = getClass().getResource("/io/github/samstan4/styles.css");
    if (cssStyleSheet == null) {
      throw new FileNotFoundException("[FATAL ERROR] style sheet not found");
    }
    return cssStyleSheet.toExternalForm();
  }
}