public class Main {
  public static void main(String[] args) {
      File file = new File("data.csv");
      
      try {
          Database db = new Database(file);
          db.get(1);
          
      } catch (IOException e) {
          System.err.println(e.getLocalizedMessage());
          e.printStackTrace();
      }
  }
}