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

  // Métodos Costrutores
  
  public Game(){
    this.app_id = 0;
    this.name = "";
  }

  public Game(int app_id){
    this.app_id = app_id;
  }

  // Métodos Seters e Geters

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
  public Date getData(){
    return this.release_date;
  }
  public void setRelease_date(String data) throws ParseException {
    if(data != null){
      if(data.length() < 10){
        SimpleDateFormat sdf = new SimpleDateFormat("MMM yyyy",Locale.US);
        this.release_date = sdf.parse(data);
      } else {
        SimpleDateFormat sdf = new SimpleDateFormat("MMM dd,yyyy",Locale.US);
        this.release_date = sdf.parse(data);
      }
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

  // Método clone

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

  // Método imprimir

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
        int minuts = avg_pt - (hours * 60);
        if(minuts == 0){
          System.out.print(hours + "h ");
        } else {
          System.out.print(hours + "h " + minuts + "m ");
        }
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

  // Método ler

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

// Criação da da célula dupla

class Celula {
	public Game elemento; 
	public Celula ant; 
	public Celula prox; 

	/**
	 * Construtor da classe.
	 */
	public Celula() {
		this.elemento = new Game();
	}

	/**
	 * Construtor da classe.
	 */
	public Celula(int id) throws ParseException, IOException {
      this.elemento = new Game(id);
      this.elemento.ler();
      this.ant = this.prox = null;
	}
}

// Criação da lista dupla com alocação dinámica

class Lista {
	private Celula primeiro;
	private Celula ultimo;


	/**
	 * Construtor da classe que cria uma lista sem elementos (somente no cabeca).
	 */
	public Lista() {
		primeiro = new Celula();
		ultimo = primeiro;
	}


	/**
	 * Insere um elemento na primeira posicao da lista.
	 */
	public void inserirInicio(int id) throws ParseException, IOException {
		Celula tmp = new Celula(id);

    tmp.ant = primeiro;
    tmp.prox = primeiro.prox;
    primeiro.prox = tmp;
    if (primeiro == ultimo) {
        ultimo = tmp;
    } else {
        tmp.prox.ant = tmp;
    }
    tmp = null;
	}


	/**
	 * Insere um elemento na ultima posicao da lista.
	 */
	public void inserirFim(int id) throws ParseException, IOException {
		ultimo.prox = new Celula(id);
		ultimo.prox.ant = ultimo;
		ultimo = ultimo.prox;
	}


	/**
	 * Remove um elemento da primeira posicao da lista.
	 */
	public String removerInicio() throws Exception {
		if (primeiro == ultimo) {
			throw new Exception("Erro ao remover (vazia)!");
		}

    Celula tmp = primeiro;
		primeiro = primeiro.prox;

		String resp = primeiro.elemento.getName();
    tmp.prox = primeiro.ant = null;
    tmp = null;
		return resp;
	}


	/**
	 * Remove um elemento da ultima posicao da lista.
    * @return resp int elemento a ser removido.
	 * @throws Exception Se a lista nao contiver elementos.
	 */
	public String removerFim() throws Exception {
		if (primeiro == ultimo) {
			throw new Exception("Erro ao remover (vazia)!");
		} 

    String resp = ultimo.elemento.getName();
    ultimo = ultimo.ant;
    ultimo.prox.ant = null;
    ultimo.prox = null;

		return resp;
	}


	/**
    * Insere um elemento em uma posicao especifica considerando que o 
    * primeiro elemento valido esta na posicao 0.
	 */
   public void inserir(int id, int pos) throws Exception {

      int tamanho = tamanho();

      if(pos < 0 || pos > tamanho){
			  throw new Exception("Erro ao inserir posicao (" + pos + " / tamanho = " + tamanho +  " jogo " + id + ") invalida!");
      } else if (pos == 0){
         inserirInicio(id);
      } else if (pos == tamanho){
         inserirFim(id);
      } else {
		   // Caminhar ate a posicao anterior a insercao
         Celula i = primeiro;
         for(int j = 0; j < pos; j++, i = i.prox);
		
         Celula tmp = new Celula(id);
         tmp.ant = i;
         tmp.prox = i.prox;
         tmp.ant.prox = tmp.prox.ant = tmp;
         tmp = i = null;
      }
   }


	/**
    * Remove um elemento de uma posicao especifica da lista
    * considerando que o primeiro elemento valido esta na posicao 0.
	 */
	public String remover(int pos) throws Exception {
      String resp;
      int tamanho = this.tamanho();

		if (primeiro == ultimo){
			throw new Exception("Erro ao remover (vazia)!");

    } else if(pos < 0 || pos >= tamanho){
			  throw new Exception("Erro ao remover (posicao " + pos + " / " + tamanho + " invalida!");
      } else if (pos == 0){
          resp = removerInicio();
      } else if (pos == tamanho - 1){
          resp = removerFim();
      } else {
		    // Caminhar ate a posicao anterior a insercao
          Celula i = primeiro.prox;

          for(int j = 0; j < pos; j++, i = i.prox);
    
          i.ant.prox = i.prox;
          i.prox.ant = i.ant;
          resp = i.elemento.getName();
          i.prox = i.ant = null;
          i = null;
      }

		return resp;
	}

	/**
	 * Mostra os elementos da lista separados por espacos.
	 */
	public void mostrar() {
    for(Celula i = primeiro.prox; i != null; i = i.prox) {
      i.elemento.imprimir();
    }
	}

	/**
	 * Calcula e retorna o tamanho, em numero de elementos, da lista.
	*/

  public int tamanho() {
    int tamanho = 0; 
    for(Celula i = primeiro; i.prox != null; i = i.prox, tamanho++);
    return tamanho;
  }

  //Método sort

  public void sort(){
    int fim = this.tamanho();
    quicksort(0, fim - 1);
  }

  //Método swap
  public void swap(Celula maior, Celula menor){
    Game temp = maior.elemento;
    maior.elemento = menor.elemento;
    menor.elemento = temp;
    temp = null;
  }

  //Método quicksort
  private void quicksort(int esq, int dir) {
    int i = esq, j = dir, pos = (dir + esq) / 2;
    
    System.out.println(pos);

    Celula pivo = primeiro, inicio = primeiro.prox, fim = ultimo;
    for(int g = 0; g < pos; g++, pivo = pivo.prox, System.out.println(pivo.elemento.getName()));

    System.out.println("\n");

    // System.out.println(pivo.elemento.getName());
    while (i <= j) {
      while (inicio.elemento.getData().compareTo(pivo.elemento.getData()) > 0){
        inicio = inicio.prox;
        // System.out.println("Data inicio: " + inicio.elemento.getRelease_date());
        // System.out.println("Data pivo: " + pivo.elemento.getRelease_date());
        // System.out.println(inicio.elemento.getData().compareTo(pivo.elemento.getData()));
        i++;
      } 
      while (fim.elemento.getData().compareTo(pivo.elemento.getData()) < 0){
        fim = fim.ant;
        // System.out.println("Data fim: " + fim.elemento.getRelease_date());
        // System.out.println("Data pivo: " + pivo.elemento.getRelease_date());
        // System.out.println(inicio.elemento.getData().compareTo(pivo.elemento.getData()));
        j--;
      } 
      if (i <= j) {
        swap(inicio, fim);
        i++;
        j--;
      }
    }
    if (esq < j)  quicksort(esq, j);
    if (i < dir)  quicksort(i, dir);
  }
}

class q04 {
  public static void main(String[] args) throws Exception {
    Locale.setDefault(new Locale("en", "US"));

    String[] entradaGames = new String[1000];
    int numEntradaGames = 0;

    do{
      entradaGames[numEntradaGames] = MyIO.readLine();
    } while(entradaGames[numEntradaGames++].equals("FIM") == false);
    numEntradaGames--;
    
    Game[] games = new Game[numEntradaGames];

    for(int i = 0; i < games.length; i++){
      games[i] = new Game(Integer.parseInt(entradaGames[i]));
      games[i].ler();
    }

    Lista lista = new Lista();
    for(int i = 0; i < games.length; i++){
      lista.inserirFim(games[i].getApp_id());
    }

    System.out.println("Lista sem ordenar: \n");
    lista.mostrar();

    lista.sort();
    System.out.println("\nLista ordenada: \n");
    lista.mostrar();
  }
}