vector<int> Solution::prevSmaller(vector<int> &A) 
{
    vector<int> v(A.size());
    stack<int> st;
    
    for(auto i=0; i<A.size(); i++)
    {
        while(!st.empty() && A[i] <= A[st.top()])
        {
            st.pop();
        }
        if(st.empty())
            v[i] = -1;
        else
            v[i] = A[st.top()];
            
        st.push(i);
    }
    
    return v;
}
