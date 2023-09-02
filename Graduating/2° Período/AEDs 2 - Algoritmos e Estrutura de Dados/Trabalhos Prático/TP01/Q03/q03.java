class q03 {
	public static boolean isFim(String s) {
		return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
	}

	public static String cifra(String palavra) {
		String code = "";
		for (int i = 0; i < palavra.length(); i++) {
			char letra = (char) (palavra.charAt(i) + 3);
			code += letra;
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
