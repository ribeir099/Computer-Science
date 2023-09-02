class q11 {

	public static boolean isFim(String s) {
		return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
	}

	public static boolean palindromo(String palavra){
		return palindromo(palavra, 0, (palavra.length()-1));
	}

	public static boolean palindromo(String palavra, int inicio, int fim) {
		boolean resp = false;

		if(inicio < fim && palavra.charAt(inicio) == palavra.charAt(fim)){
			resp = palindromo(palavra, (inicio + 1), (fim - 1));
		} else{
			resp = palavra.charAt(inicio) == palavra.charAt(fim);
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
			if(palindromo(entrada[i])){
				MyIO.println("SIM");
			} else{
				MyIO.println("NAO");
			}
		}
	}
}
