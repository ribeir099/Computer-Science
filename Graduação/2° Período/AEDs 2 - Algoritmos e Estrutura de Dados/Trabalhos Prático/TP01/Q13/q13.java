class q13 {
  public static boolean isFim(String s) {
    return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
  }

  public static String cifra(String palavra) {
    return cifra(palavra, 0);
  }

  public static String cifra(String palavra, int cont) {
    String code = "";

    if(cont < palavra.length()){
      code = (((char)(palavra.charAt(cont) + 3)) + cifra(palavra, ++cont));
    }

    return code;
  }

  public static void main(String[] args) {
    String[] entrada = new String[1000];
    int numEntrada = 0;

    do {
      entrada[numEntrada] = MyIO.readLine();
    } while (isFim(entrada[numEntrada++]) == false);
    numEntrada--;

    for (int i = 0; i < numEntrada; i++) {
      MyIO.println(cifra(entrada[i]));
    }
  }
}
