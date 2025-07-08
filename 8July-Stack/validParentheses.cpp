class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s){

            if(ch == ')'){
                if(st.empty()) return false;

                if(st.top() == '('){
                    st.pop();
                }
                else return false;
            }
            else if(ch == ']'){
                if(st.empty()) return false;

                if(st.top() == '['){
                    st.pop();
                }
                else return false;
            }
           else if(ch == '}'){
                if(st.empty()) return false;

                if(st.top() == '{'){
                    st.pop();
                }
                else return false;
            }
            else st.push(ch);

        }

        return st.empty();
    }
};
