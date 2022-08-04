class Solution {
public:
/*we traverse both strings from one side to another side 
(say from rightmost character to leftmost). If we find a matching character, we move ahead in both strings. Otherwise, we move ahead only in t.*/ 
    bool isSubsequence(string s, string t) {
        int index=0;
        for(int i=0;i<t.length() && index<s.length();i++){
            if(s[index]==t[i])index++;
            
        }
        if(index==s.length())return true;
        return false;
        
    }
};