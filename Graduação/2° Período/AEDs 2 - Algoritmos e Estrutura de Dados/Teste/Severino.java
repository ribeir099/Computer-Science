import java.text.DecimalFormat;
import java.util.Scanner;

class Severino{
  public static int[] Ordenar(int[] livros) {
    for(int i = 0; i < livros.length - 1; i++){
      int menor = i;
      boolean trocou = false;
      for(int j = (i + 1); j < livros.length; j++){
        if(livros[menor] > livros[j]){
          menor = j;
          trocou = true;
        }
      }
      if(trocou){
        int temp = livros[menor];
        livros[menor] = livros[i];
        livros[i] = temp;
      }
    }
    return livros;
  }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    while(sc.hasNext()){
      int line = sc.nextInt();
      int[] livros = new int[line];
      for(int i = 0; i < line; i++){
        livros[i] = sc.nextInt();
      }
      int[] livrosOrdenados = Ordenar(livros);
      for(int i = 0; i < livrosOrdenados.length; i++){
        System.out.println(new DecimalFormat("0000").format(livrosOrdenados[i]));
      }
    }
    sc.close();
  }
}