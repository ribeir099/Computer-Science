
class Contato {
  private String nome;
  private String telefone;
  private String email;
  private int cpf;

  // Método construtor 

  public Contato(String nome, String telefone, String email, int cpf) {
    this.nome = nome;
    this.telefone = telefone;
    this.email = email;
    this.cpf = cpf;
  }

  // Geters e seters

  // Nome
  public String getNome() {
    return nome;
  }
  public void setNome(String nome) {
    this.nome = nome;
  }

  // Telefone
  public String getTelefone() {
    return telefone;
  }
  public void setTelefone(String telefone) {
    this.telefone = telefone;
  }

  // Email
  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }

  // CPF
  public int getCpf() {
    return cpf;
  }
  public void setCpf(int cpf) {
    this.cpf = cpf;
  }
}

class Celula {
  public Contato contato;
  public Celula prox;

  public Celula() {
    this.contato = null;
    this.prox = null;
  }

  public Celula(Contato contato) {
    this.contato = contato;
  }

  public void mostrar() {
    System.out.println("Contato: " + contato.getNome());
  }
}

class No {
  private char letra;

  public No esq;
  public No dir;
  public Celula primeiro;
  public Celula ultimo;

  // Construtores

  public No(char letra) {
    this.letra = letra;
  }

  // Geters e seters

  public char getLetra() {
    return letra;
  }
  public void setLetra(char letra) {
    this.letra = letra;
  }

  public void mostrar() {
    for(Celula i = primeiro; i != null; i = i.prox) {
      i.mostrar();
    }
  }

  public int tamanho() {
    int tamanho = 0;
    if(primeiro != null) {
      for(Celula i = primeiro; i != null; i = i.prox, tamanho ++);
    }
    return tamanho;
  }
}

class Agenda {
  public No raiz;

  // Método construtor

  public Agenda() throws Exception {
    this.raiz = null;
    this.generateAgenda();
  }

  // Métodos para a geração da agenda

  private void generateAgenda() throws Exception {
    char[] letras = {'M', 'F', 'T', 'C', 'I', 'P', 'W', 'A', 'B', 'D', 'E', 'G', 'H', 'J', 'K', 'L', 'N', 'O', 'Q', 'R', 'S', 'U', 'V', 'X', 'Y' , 'Z'};
    for(int i = 0; i < letras.length; i ++) {
      inserirAgenda(letras[i]);
    }
  }

  private void inserirAgenda(char letra) throws Exception {
    this.raiz = inserirAgenda(letra, this.raiz);
  }

  private No inserirAgenda(char letra, No i) throws Exception {
    if (i == null) {
      i = new No(letra);

    } else if (letra < i.getLetra()) {
      i.esq = inserirAgenda(letra, i.esq);

    } else if (letra > i.getLetra()) {
      i.dir = inserirAgenda(letra, i.dir);

    } else {
      throw new Exception("Erro ao inserir!");
    }

    return i;
  }

  // Método inserir

  public boolean inserir(Contato contato) throws Exception {
    if(Character.isLetter(contato.getNome().charAt(0))){
			inserir(this.raiz, contato);
      return true;
		} else {
			throw new Exception("Erro ao inserir!");
		}
  }

  private void inserir(No no, Contato contato) {
    if (Character.toUpperCase(contato.getNome().charAt(0)) == no.getLetra()) { 
      if(no.primeiro == null){
        no.primeiro = new Celula(contato);
        no.ultimo = no.primeiro;
      } else {
        no.ultimo.prox = new Celula(contato);
        no.ultimo = no.ultimo.prox;
      }
		
		// letra menor, caminha para a esquerda
		} else if (Character.toUpperCase(contato.getNome().charAt(0)) < no.getLetra()) { 
			inserir(no.esq, contato);

		// letra maior, caminha para a direita
		} else { 
			inserir(no.dir, contato);
		}
  }

  // Método remover

  public void remover(String nome) throws Exception {
    remover(this.raiz, nome);
  }

  private void remover(No no, String nome) throws Exception {
    if (Character.toUpperCase(nome.charAt(0)) == no.getLetra()) { 
      if(no.primeiro == null){
        throw new Exception("Erro ao remover");
      } else {
        for(Celula i = no.primeiro; i != null; i = i.prox) {
          if(i.contato.getNome().compareTo(nome) == 0) { 
            System.out.println(i.contato.getNome());
            Celula tmp = i.prox;
            i.prox = tmp.prox;
            tmp.prox = null;
            i = tmp = null;
          }
        }
      }
		
		// letra menor, caminha para a esquerda
		} else if (Character.toUpperCase(nome.charAt(0)) < no.getLetra()) { 
			remover(no.esq, nome);

		// letra maior, caminha para a direita
		} else { 
			remover(no.dir, nome);
		}
  }

  // Método mostrar letras da agenda

  public void mostrar() {
    System.out.print("[ ");
		mostrarLetra(this.raiz);
		System.out.println("]");
  }

  private void mostrarLetra(No i) {
    if (i != null) {
			mostrarLetra(i.esq); // Elementos da esquerda.
			System.out.print(i.getLetra() + " "); // Conteudo do no.
			mostrarLetra(i.dir); // Elementos da direita.
		}
  }

  // Método mostrar contatos pela letra

  public void mostrar(char letra) throws Exception {
    if(Character.isLetter(letra)) {
      System.out.println("Contatos com " + letra + " :");
      mostrarContatos(this.raiz, letra);
    } else {
      throw new Exception("Letra inválida !");
    }
  }

  private void mostrarContatos(No no, char letra) throws Exception {
    if(Character.toUpperCase(letra) == no.getLetra()) {
      no.mostrar();
    } else if(Character.toUpperCase(letra) > no.getLetra()) {
      mostrarContatos(no.dir, letra);
    } else if(Character.toUpperCase(letra) < no.getLetra()) {
      mostrarContatos(no.esq, letra);
    } else {
      throw new Exception("Erro ao encontrar a letra !");
    }
  }
}

class tt07 {
  public static void main(String[] args) throws Exception {
    Agenda agenda = new Agenda();

    Contato[] contatos = new Contato[4];

    contatos[0] = new Contato("maria", "14134143431", "abcd@abcd.com", 1234567);
    contatos[1] = new Contato("mario", "14134143431", "abcd@abcd.com", 1234567);
    contatos[2] = new Contato("mateus", "14134143431", "abcd@abcd.com", 1234567);
    contatos[3] = new Contato("manuel", "14134143431", "abcd@abcd.com", 1234567);
    
    for(int i = 0; i < contatos.length; i++) {
      agenda.inserir(contatos[i]);      
    }

    // agenda.mostrar('m');
    agenda.remover("mateus");
    // System.out.println("\n");
    agenda.mostrar('m');
  }
}