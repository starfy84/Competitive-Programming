class BitwiseComplement {
    public int bitwiseComplement(int N) {
        String comp = "";
        for(int x = 0;x < Integer.toBinaryString(N).length();x++) comp+="1";
		return N^Integer.parseInt(comp, 2);
    }
}