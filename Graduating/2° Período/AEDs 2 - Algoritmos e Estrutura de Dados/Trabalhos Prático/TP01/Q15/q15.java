class q15 {
  public static boolean isFim(String s) {
    return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
  }

  public static boolean vogal(String palavra) {
    return vogal(palavra, 0);
  }
  public static boolean vogal(String palavra, int cont) {
    boolean resp = false;

    if(cont < palavra.length() - 1 && (palavra.charAt(cont) == 'a' || palavra.charAt(cont) == 'A'
    || palavra.charAt(cont) == 'e' || palavra.charAt(cont) == 'E'
    || palavra.charAt(cont) == 'i' || palavra.charAt(cont) == 'I'
    || palavra.charAt(cont) == 'o' || palavra.charAt(cont) == 'O'
    || palavra.charAt(cont) == 'u' || palavra.charAt(cont) == 'U')){
      resp = vogal(palavra, ++cont);
    } else{
      resp = (palavra.charAt(cont) == 'a' || palavra.charAt(cont) == 'A'
      || palavra.charAt(cont) == 'e' || palavra.charAt(cont) == 'E'
      || palavra.charAt(cont) == 'i' || palavra.charAt(cont) == 'I'
      || palavra.charAt(cont) == 'o' || palavra.charAt(cont) == 'O'
      || palavra.charAt(cont) == 'u' || palavra.charAt(cont) == 'U');
    }

    return resp;
  }

  public static boolean consoante(String palavra) {
    return consoante(palavra, 0);
  }
  public static boolean consoante(String palavra, int cont) {
    boolean resp = false;

    if(cont < palavra.length() - 1 && (palavra.charAt(cont) != 'a' && palavra.charAt(cont) != 'A' 
    && palavra.charAt(cont) != 'e' && palavra.charAt(cont) != 'E' 
    && palavra.charAt(cont) != 'i' && palavra.charAt(cont) != 'I' 
    && palavra.charAt(cont) != 'o' && palavra.charAt(cont) != 'O' 
    && palavra.charAt(cont) != 'u' && palavra.charAt(cont) != 'U')){
      resp = consoante(palavra, ++cont);
    } else{
      resp = (palavra.charAt(cont) != 'a' && palavra.charAt(cont) != 'A' 
      && palavra.charAt(cont) != 'e' && palavra.charAt(cont) != 'E' 
      && palavra.charAt(cont) != 'i' && palavra.charAt(cont) != 'I' 
      && palavra.charAt(cont) != 'o' && palavra.charAt(cont) != 'O' 
      && palavra.charAt(cont) != 'u' && palavra.charAt(cont) != 'U');
    }

    return resp;
  }

  public static boolean inteiro(String palavra) {
    return inteiro(palavra, 0, false);
  }
  public static boolean inteiro(String palavra, int cont, boolean ponto) {
    boolean resp = false;

    if(cont < palavra.length() - 1 && ((palavra.charAt(cont) >= '0') && (palavra.charAt(cont) <= '9')) && !ponto){
      resp = inteiro(palavra, ++cont, ponto);
    } else {
      if(palavra.charAt(cont) == ',' || palavra.charAt(cont) == '.'){
        ponto = true;
      }
      resp = ((palavra.charAt(cont) >= '0') && (palavra.charAt(cont) <= '9') && !ponto);
    }

    return resp;
  }

  public static boolean real(String palavra) {
    return real(palavra, 0, false);
  }
  public static boolean real(String palavra, int cont, boolean ponto) {
    boolean resp = false;

    if(cont < palavra.length() - 1 && (((palavra.charAt(cont) >= '0') && (palavra.charAt(cont) <= '9')) || palavra.charAt(cont) == ',' || palavra.charAt(cont) == '.')){
      resp = real(palavra, ++cont, ponto);
    } else {
      if((palavra.charAt(cont) == ',' || palavra.charAt(cont) == '.') && !ponto){
        ponto = true;
      }
      resp = ((palavra.charAt(cont) >= '0') && (palavra.charAt(cont) <= '9') && !ponto);
    }

    return resp;
  }

  public static void main(String[] args) {
		String[] entrada = new String[1000];
		int numEntrada = 0;

		do {
			entrada[numEntrada] = MyIO.readLine();
		} while (isFim(entrada[numEntrada++]) == false);
		numEntrada--;

		for (int i = 0; i < numEntrada; i++) {
			if(vogal(entrada[i])){
				MyIO.print("SIM ");
			} else{
				MyIO.print("NAO ");
			}
      if(consoante(entrada[i])){
				MyIO.print("SIM ");
			} else{
				MyIO.print("NAO ");
			}
      if(inteiro(entrada[i])){
				MyIO.print("SIM ");
			} else{
				MyIO.print("NAO ");
			}
      if(real(entrada[i])){
				MyIO.println("SIM");
			} else{
				MyIO.println("NAO");
			}
		}
	}
}