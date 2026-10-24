class Solution {
    int r,c;
    bool valid(int i,int j){
        return (i>=0 && i<r) && (j>=0 && j<c);
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        r=grid.size();
        c=grid[0].size();
        int row[4]={1,-1,0,0};
        int col[4]={0,0,1,-1};
        queue<pair<int,int>> q;
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==2){
                    q.push(make_pair(i,j));
                }
            }
        }
        while(!q.empty()){
            bool spread=false;
            int c=q.size();
            while(c--){
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                for(int k=0;k<4;k++){
                    if(valid(i+row[k],j+col[k]) && grid[i+row[k]][j+col[k]]==1){
                            q.push(make_pair(i+row[k],j+col[k]));
                            grid[i+row[k]][j+col[k]]=2;
                            spread=true;
                        }
                }
            }
            if(spread) count++;
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return count;
    }
};