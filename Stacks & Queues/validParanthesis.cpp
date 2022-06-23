bool isValidParenthesis(string expression)
{
    // Write your code here - code by Afif Islam
    string s=expression;
    bool x = false;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if((s[i]==')'&& !st.empty() && st.top()=='(') || (s[i]=='}'&& !st.empty() && st.top()=='{') || (s[i]==']'&& !st.empty() && st.top()=='[')){
            st.pop();
            x=true;
        }
        else{
            x=false;
            break;
        }
    }
    if(!st.empty()|| x==false){
        return false;
    }
    return true;
}