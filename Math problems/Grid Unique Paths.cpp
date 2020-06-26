int Solution::uniquePaths(int A, int B) {
    int ways[A][B];
    for (int i = 0; i < A; ++i)
    {
        for (int j = 0; j < B; ++j)
        {
            if(i == 0 && j == 0)
                ways[i][j] = 1;
            else if(i == 0)
                ways[i][j] = ways[i][j-1];
            else if(j == 0)
                ways[i][j] = ways[i-1][j];
            else
                ways[i][j] = ways[i-1][j] + ways[i][j-1];
        }
    }
    return ways[A-1][B-1];
}
