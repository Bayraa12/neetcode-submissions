class Solution {
public:
    bool isValid(string s) {
        stack <int> st;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(' or s[i] == '[' or s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){

                    if(st.top() == s[i]-1 or st.top() == s[i]-2){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
