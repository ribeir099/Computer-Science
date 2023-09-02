import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.text.DecimalFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;


class Game {
  private int app_id = 0;
  private String name;
  private Date release_date;
  private String owners;
  private int age;
  private float price;
  private int dlcs;
  private String[] languages;
  private String website;
  private boolean windows;
  private boolean mac;
  private boolean linux;
  private float upvotes;
  private int avg_pt;
  private String developers;
  private String[] genres;

  private void saveGame(String[] args) throws ParseException{
    setApp_id(Integer.parseInt(args[0]));
    setName(args[1]);
    setRelease_date(args[2]);
    setOwners(args[3]);
    setAge(Integer.parseInt(args[4]));
    setPrice(Float.parseFloat(args[5]));
    setDlcs(Integer.parseInt(args[6]));
    setLanguages(args[7]);
    setWebsite(args[8]);
    setWindows(Boolean.parseBoolean(args[9]));
    setMac(Boolean.parseBoolean(args[10]));
    setLinux(Boolean.parseBoolean(args[11]));
    setUpvotes((Float.parseFloat(args[12]) / (Float.parseFloat(args[12]) + Float.parseFloat(args[13]))) * 100);
    setAvg_pt(Integer.parseInt(args[14]));
    setDevelopers(args[15]);
    setGenres(args[16]);
  }

  public Game(){
    this.app_id = 0;
    this.name = "";
  }

  public Game(int app_id){
    this.app_id = app_id;
  }

  public int getApp_id() {
    return app_id;
  }
  public void setApp_id(int app_id) {
    this.app_id = app_id;
  }

  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  public String getRelease_date() throws NullPointerException {
    SimpleDateFormat sdf = new SimpleDateFormat("MMM/yyyy",Locale.US);
    if(release_date != null){
      return sdf.format(release_date);
    } else {
      return "null";
    }
  }
  public void setRelease_date(String data) throws ParseException {
    SimpleDateFormat sdf = new SimpleDateFormat("MMM dd,yyyy",Locale.US);
    if(data.length() < 12){
      sdf = new SimpleDateFormat("MMM yyyy",Locale.US);
    } 
    if(data != null){
      this.release_date = sdf.parse(data);
    }
  }

  public String getOwners() {
    return owners;
  }
  public void setOwners(String owners) {
    this.owners = owners;
  }

  public int getAge() {
    return age;
  }
  public void setAge(int age) {
    this.age = age;
  }

  public float getPrice() {
    return price;
  }
  public void setPrice(float price) {
    this.price = price;
  }

  public int getDlcs() {
    return dlcs;
  }
  public void setDlcs(int dlcs) {
    this.dlcs = dlcs;
  }

  public String getLanguages() {
    String concatLanguages = "[";
    if(languages != null){
      for(int i = 0; i < languages.length; i++){
        concatLanguages += languages[i];
        if(i + 1 != languages.length){
          concatLanguages += ",";
        }
      }
      concatLanguages += "]";
      
      return concatLanguages;
    } else {
      return "null";
    }
  }
  public void setLanguages(String languages) {
    languages = languages.replaceAll("\\[", "");
    languages = languages.replaceAll("\\]", "");
    languages = languages.replaceAll("'", "");
    this.languages = languages.split(",");
  }

  public String getWebsite() {
    return website;
  }
  public void setWebsite(String website) {
    this.website = website;
  }

  public boolean getWindows(){
    return windows;
  }
  public void setWindows(boolean windows) {
    this.windows = windows;
  }

  public boolean getMac(){
    return mac;
  }
  public void setMac(boolean mac) {
    this.mac = mac;
  }

  public boolean getLinux(){
    return linux;
  }
  public void setLinux(boolean linux) {
    this.linux = linux;
  }

  public float getUpvotes() {
    return upvotes;
  }
  public void setUpvotes(float upvotes) {
    this.upvotes = upvotes;
  }

  public int getAvg_pt() {
    return avg_pt;
  }
  public void setAvg_pt(int avg_pt) {
    this.avg_pt = avg_pt;
  }

  public String getDevelopers() {
    return developers;
  }
  public void setDevelopers(String developers) {
    this.developers = developers;
  }

  public String getGenres() {
    String concatGenres = "[";
    if(genres != null){
      for(int i = 0; i < genres.length; i++){
        concatGenres += genres[i];
        if(i + 1 != genres.length){
          concatGenres += ", ";
        }
      }
      concatGenres += "]";
  
      return concatGenres;
    } else {
      return "null";
    }
  }
  public void setGenres(String genres) {
    if(genres != null){
      genres = genres.replaceAll("\\[", "");
      genres = genres.replaceAll("\\]", "");
      this.genres = genres.split(",");
    } else {
      String[] genre = new String[1];
      genre[0] = genres;
      this.genres = genre;
    }
  }

  public Game clone(){
    Game clone = new Game();
    clone.app_id = this.app_id;
    clone.name = this.name;
    clone.release_date = this.release_date;
    clone.owners = this.owners;
    clone.age = this.age;
    clone.price = this.price;
    clone.dlcs = this.dlcs;
    clone.languages = this.languages;
    clone.website = this.website;
    clone.windows = this.windows;
    clone.mac = this.mac;
    clone.linux = this.linux;
    clone.upvotes = this.upvotes;
    clone.avg_pt = this.avg_pt;
    clone.developers = this.developers;
    clone.genres = this.genres;
    return clone;
  }

  public void imprimir() throws NullPointerException{
    System.out.print(app_id + " ");
    System.out.print(name + " ");
    System.out.print(getRelease_date() + " ");
    System.out.print(owners + " ");
    System.out.print(age + " ");
    System.out.print(new DecimalFormat("0.00 ").format(price));
    System.out.print(dlcs + " ");
    System.out.print(getLanguages() + " ");
    if(website != null){
      if(website.length() > 0){
        System.out.print(website + " ");
      } else{
        System.out.print("null ");
      }
    }
    System.out.print(windows + " ");
    System.out.print(mac + " ");
    System.out.print(linux + " ");
    System.out.print(Math.round(upvotes) + "% ");
    if(avg_pt > 0){
      if(avg_pt > 60){
        int hours = (int)avg_pt / 60;
        System.out.print(hours + "h " + (avg_pt - (hours * 60)) + "m ");
      }else {
        System.out.print(avg_pt + "m ");
      }
    } else{
      System.out.print("null ");
    }
    System.out.print(developers + " ");
    System.out.print(getGenres() + " ");
    System.out.print("\n");
  }

  public void ler() throws ParseException, IOException{
    String path = "./tmp/games.csv";
    try(BufferedReader br = new BufferedReader(new FileReader(path))){
      String line = br.readLine();
      while( line != null){
        String[] result = new String[17];
        int j = 0;
        int inicio = 0, fim = 0;
        boolean aspas = false;
        for(int i = 0; i < line.length(); i++){
          if(line.charAt(i) == ',' && !aspas){
            if(line.charAt(i - 1) != '"'){
              fim = i;
              result[j] = line.substring(inicio, fim);
              j++;
              inicio = fim + 1;
            } else {
              inicio = i + 1;
            }
          }
          if(line.charAt(i) == '"'){
            if(aspas){
              fim = i;
              result[j] = line.substring(inicio, fim);
              j++;
              aspas = !aspas;
            } else {
              inicio = i + 1;
              aspas = !aspas;
            }
          }
        }
        if(Integer.parseInt(result[0]) == app_id){
          if(result[16] == null){
            fim = line.length();
            result[16] = line.substring(inicio, fim);
          }
          this.saveGame(result);
          line = null;
        }
        line = br.readLine();
      }
    }
    catch(IOException e) {
      MyIO.println("Erro: " + e.getMessage());
    }
  }
}

class q04 {
  public static void main(String[] args) throws ParseException, IOException, NullPointerException {
    Locale.setDefault(new Locale("en", "US"));

    String[] entradaGames = new String[1000];
    int numEntradaGames = 0;

    do{
      entradaGames[numEntradaGames] = MyIO.readLine();
    } while(entradaGames[numEntradaGames++].equals("FIM") == false);
    numEntradaGames--;

    
    String[] entradaPesquisa = new String[1000];
    int numEntradaPesquisa = 0;
    
    do{
      entradaPesquisa[numEntradaPesquisa] = MyIO.readLine();
    } while(entradaPesquisa[numEntradaPesquisa++].equals("FIM") == false);
    numEntradaPesquisa--;
    
    Game[] games = new Game[numEntradaGames];
    String[] nameGames = new String[numEntradaGames];

    for(int i = 0; i < games.length; i++){
      games[i] = new Game(Integer.parseInt(entradaGames[i]));
      games[i].ler();
      nameGames[i] = games[i].getName();
    }

    // Ordenação

    for(int i = 0; i < (nameGames.length - 1); i++){
      int menor = i;
      boolean trocou = false;
      for(int j = (i + 1); j < nameGames.length; j++){
        if(nameGames[menor] != null && nameGames[j] != null){
          if(nameGames[menor].charAt(0) > nameGames[j].charAt(0)){
            menor = j;
            trocou = true;
          }
        }
      }
      if(trocou){
        String temp = nameGames[menor];
        nameGames[menor] = nameGames[i];
        nameGames[i] = temp;
      }
    }

    // Pesquisa
    for(int i = 0; i < numEntradaPesquisa; i++){
      boolean resp = false;
      int dir = nameGames.length - 1, esq = 0, meio;
      while (esq <= dir) {
        meio = (esq + dir) / 2;
        if (entradaPesquisa[i].equals(nameGames[meio])){
          resp = true;
          esq = nameGames.length;
        } else if (entradaPesquisa[i].charAt(0) > nameGames[meio].charAt(0)){
          esq = meio + 1;
        } else {
          dir = meio - 1;
        } 
      }

      if(resp){
        System.out.println("SIM");
      } else {
        System.out.println("NAO");
      }
      
    }
  }
}