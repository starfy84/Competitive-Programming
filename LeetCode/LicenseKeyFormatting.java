class LicenseKeyFormatting {
    public String licenseKeyFormatting(String S, int K) {
        S=S.replace("-","").toUpperCase();
        if(S.length()==0)
            return S;
        int remainder = S.length()%K;
        String newS="";
        if(remainder!=0){
            newS+=S.substring(0,remainder)+"-";
        }
        for(int x =remainder; x < S.length(); x+=K){
            newS+=S.substring(x,x+K)+"-";
        }
        return newS.substring(0,newS.length()-1);
    }
}