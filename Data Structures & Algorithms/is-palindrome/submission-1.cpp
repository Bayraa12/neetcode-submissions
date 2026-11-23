class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0; i<s.size(); i++){
            if(s[i]>=65 && s[i]<=90){
                s[i] = s[i] +32;
            }
        }
        string s1 ;
        for(int i=0; i<s.size(); i++){
            if(s[i]>= 97 && s[i]<=122 ){
                s1 += s[i];
            }
            else if( s[i]>=48 && s[i]<=57){
                s1 +=s[i];
            }
        }

        string s2;
        for(int i=s1.size()-1; i>=0; i--){
            s2+=s1[i];
        }

        if(s1 == s2){
            return true;
        }
        else{
            return false;
        }
        

    }
};
