import java.util.Scanner;

class q02{
  public static void main(String[] args) {
    String comecoS, fimS;
    Scanner sc = new Scanner(System.in);
    while(sc.hasNext()){
      comecoS = sc.next();
      fimS = sc.next();
      int fimI = Integer.parseInt(fimS);
      int comecoI = Integer.parseInt(comecoS);
      String[] invertido = new String[(fimI - comecoI) + 1];
      int j = 0;
      for(int i = comecoI; i <= fimI; i++){
        System.out.print(i);
        invertido[j] = Integer.toString(i);
        j++; 
      }
      for(int i = j - 1; i >= 0; i--){
        for(int k = invertido[i].length(); k > 0; k--){
          System.out.print(invertido[i].charAt(k - 1));
        }
      }
      System.out.print("\n");
    }
    sc.close();
  }
}