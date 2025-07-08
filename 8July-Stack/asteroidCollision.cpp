class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int ast : asteroids){


            // check if ast is -ve then it will cause collision
            // check if the stack is not empty
            // top of stack is +ve
            if(ast < 0 and !st.empty() and st.top() > 0){
                // collisions will happen

                // simulate the collisions

                // check whether the asteroid will survive or not
                bool astWillSurvive = true; // flag

                while(!st.empty() and st.top() > 0){
                    int top = st.top();

                    int modValOfIncomingAst = abs(ast);

                    if(top > modValOfIncomingAst){
                        // ast will explode
                        astWillSurvive = false;
                        break;
                    }
                    else if(top < modValOfIncomingAst){
                        // top will explode
                        st.pop();
                    }
                    else{
                        // top and incoming ast will explode
                        st.pop();
                        astWillSurvive = false;
                        break;
                    }
                }

                // if ast survived, push it in the stack
                if(astWillSurvive) st.push(ast);
            }
            else{
                st.push(ast);
            }
        }

        vector<int> ans;

        // empty the stack and put values in 1D array
        while(!st.empty()){
            int top = st.top();
            ans.push_back(top);
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
