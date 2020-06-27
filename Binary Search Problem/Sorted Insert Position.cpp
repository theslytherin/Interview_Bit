int Solution::searchInsert(vector<int> &A, int B) {
  if(B<1)
        return 0;
    int start = 0, end = A.size() - 1;
    int pos = -1;
    
    while(start<=end)
    {
        int mid = start + (end - start)/2;
        if(A[mid] == B)
            return mid;
        else if(A[mid]>B)
            pos = end = mid - 1;
        else
            pos = start = mid + 1;
        if (start>end)
            pos = start;
    }
    return pos;
}
