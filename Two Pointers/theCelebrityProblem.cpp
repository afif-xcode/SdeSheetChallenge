/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/
#include <stack>
int findCelebrity(int n) {
    // Write your code here - code by Afif Islam
    stack<int>st;
    for(int i=0;i<n;i++)
        st.push(i);
    while(st.size()>1){
        int a=st.top();
        st.pop();
        int b=st.top();
        st.pop();
        if(knows(a,b))
            st.push(b);
        else
            st.push(a);
    }
    int ans=st.top();    //possible condidate
    //checking for 0, if we found 1 in the row then it is not celebrity
    for(int i=0;i<n;i++){
        if(knows(ans,i))
            return -1;
    }
    //checking for number of 1
    int count=0;
    for(int i=0;i<n;i++){
        if(knows(i,ans))
            count++;
    }
    //if count(number of 1 in column) = number of candidates - 1
    //then that candidate is out celebrity.
    //else, there is no celebrity among these people
    if(count==n-1)
        return ans;
    return -1;
}