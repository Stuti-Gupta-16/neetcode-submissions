class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<pair<int,int>> l;
        int sum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    if(i==0) sum++;
                    else if(grid[i-1][j]==0) sum++;
                    if(i==grid.size()-1) sum++;
                    else if(grid[i+1][j]==0) sum++;
                    if(j==0) sum++;
                    else if(grid[i][j-1]==0) sum++;
                    if(j==grid[0].size()-1) sum++;
                    else if(grid[i][j+1]==0)  sum++;
                }
                cout<<sum<<endl;
            }
        }
        return sum;
    }
};