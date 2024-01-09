/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
    
   let hash = new Map();
    let visited = new Set();
    
    if(s.length != t.length) return false ;
    
    for (let i = 0;i<s.length;i++){
        if(hash.get(s[i])==undefined && !visited.has(t[i])) {
            hash.set(s[i],t[i]);
            
            visited.add(t[i]);
        }
        else if (hash.get(s[i])==undefined && visited.has(t[i])) return false;
        
        else if (hash.get(s[i])!= t[i]) return false;
    }
    return true;
};