package io.github.samstan4;

import java.io.FileNotFoundException;

import io.github.samstan4.view.MainView;
import javafx.application.Application;
import javafx.stage.Stage;


/**
 * JavaFX App
 */
public class App extends Application {

  @Override 
  public void start(Stage stage) throws FileNotFoundException {
    MainView view = new MainView();
    stage.setScene(view.getScene());
    stage.setTitle("ExHell");
    stage.show();
  }

  public static void main(String[] args) {
    launch();
  }
}