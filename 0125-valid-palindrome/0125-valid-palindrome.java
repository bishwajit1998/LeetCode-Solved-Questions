class Solution {
    public boolean isPalindrome(String s) {
        
        int a = 0;
        int b = s.length()-1;
        
        
        while(a<b){
            char l = s.charAt(a);
            char r = s.charAt(b);
            if(!Character.isLetterOrDigit(l)) 
                a++;
            else if(!Character.isLetterOrDigit(r)) 
                b--;
            else if(Character.toLowerCase(l)!= Character.toLowerCase(r)) 
                return false ;
            else{
                a++;
                b--;
            }
        }
        return true;
    
        
    }
}

