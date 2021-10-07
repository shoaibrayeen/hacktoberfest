#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;
    for(char c:s){
        if(c == '[' || c == '(' || c == '{'){
            st.push(c);
        }else{
            if(st.empty()){
                return false;
            }

            if(c == ']'){
                if(st.top() == '['){
                    st.pop();
                }else{
                    return false;
                }
            }else if(c == ')'){
                if(st.top() == '('){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                if(st.top() == '{'){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
    }
    cout << "Is the string balanced? " << st.empty() << "\n";

    return 0;
}