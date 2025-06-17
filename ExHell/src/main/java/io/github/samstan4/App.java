package io.github.samstan4;

import javafx.application.Application;
import javafx.scene.Scene;
// import javafx.scene.control.Label;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;


/**
 * JavaFX App
 */
public class App extends Application {

  @Override
  public void start(Stage stage) {
    StackPane root = new StackPane();
    root.getStyleClass().add("root");

    Scene scene = new Scene(root, 640, 480);
    scene.getStylesheets().add(
      getClass().getResource("styles.css").toExternalForm()
    );

    stage.setScene(scene);
    stage.setTitle("ExHell");
    stage.show();
  }

  public static void main(String[] args) {
    launch();
  }
}