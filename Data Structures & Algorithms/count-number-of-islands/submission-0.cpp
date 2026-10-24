class Solution {
    int r,c;
    bool valid(int i,int j){
        return (i>=0 && i<r) && (j>=0 && j<c);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
         r=grid.size();
        c=grid[0].size();
        int row[4]={1,-1,0,0};
        int col[4]={0,0,1,-1};
        queue<pair<int,int>> q;
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    count++;
                    q.push(make_pair(i,j));
                    grid[i][j]='2';
                    while(!q.empty()){
                        int p=q.front().first;
                        int o=q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++){
                            if(valid(p+row[k],o+col[k]) && grid[p+row[k]][o+col[k]]=='1'){
                                q.push(make_pair(p+row[k],o+col[k]));
                                grid[p+row[k]][o+col[k]]='2';
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};
