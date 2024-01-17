class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!= t.length()) return false ;
        
        int i =0;
        
        
        
unordered_map<char,int> charCount;
        
        for(char ch : s){
            charCount[ch]++;
            
        }
        
        for(char ch: t){
            if(charCount.find(ch) == charCount.end() || charCount[ch] == 0) {
              return false;  
            }
                
            
            
        
        else 
        { charCount[ch]--;
             }
        
        }
        return true;
        
    }
};