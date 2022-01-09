vector<vector<int>> generate(int numRows) {
     vector<vector<int>> res(numRows);
        int i,j;
        
        for(i=0;i<numRows;i++)
        {
            res[i].resize(i+1);
            res[i][0]=res[i][i]=1;
            for(j=1;j<i;j++)
            {
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
        return res;
    }
