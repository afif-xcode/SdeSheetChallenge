void insertInStack(int temp , stack <int > &s){
    if(s.empty() || temp > s.top())    {s.push(temp);    return;}
    int t = s.top();
    s.pop();
    insertInStack(temp , s);
    s.push(t);
}
void sortStack(stack<int> &s){
    if(s.size() <= 1)    return;
    int temp = s.top();
    s.pop();
    sortStack(s);
    insertInStack(temp , s);
}