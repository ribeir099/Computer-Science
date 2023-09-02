class q01{
	
	public static boolean isFim(String s){
		return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
	 }

	public static String palindromo(String palavra){
		int inicio = 0;
		int fim = palavra.length() - 1;
		for(int i = 0; i < palavra.length() / 2; i++){
			if(palavra.charAt(inicio) != palavra.charAt(fim)){
				return "NAO";
			}
			inicio ++;
			fim --;
		}
		return "SIM";
	}

	public static void main(String[] args){
		String[] entrada = new String[1000];
		int numEntrada = 0;

		do {
			entrada[numEntrada] = MyIO.readLine();
		 } while (isFim(entrada[numEntrada++]) == false);
		numEntrada--;

		for(int i = 0; i < numEntrada; i++){
			MyIO.println(palindromo(entrada[i]));
		}
	}
}

