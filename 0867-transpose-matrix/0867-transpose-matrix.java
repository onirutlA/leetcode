class Solution {
    public int[][] transpose(int[][] A) 
    {
        int R = A.length, C = A[0].length;
        int[][]sol = new int [C][R];
        for(int r=0; r<R; r++)
        {
            for(int c=0; c<C; c++)
            {
                sol[c][r] = A[r][c];    
            }
        }
        return sol;
    }
}