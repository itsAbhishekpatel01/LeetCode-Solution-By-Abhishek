class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //checking for each row
        for(vector<char>row:board){
            set<char>nums;
            for(char cell:row){
                if(nums.find(cell)!=nums.end()) return false;
                if(cell!='.')
                nums.insert(cell);
            }
        }
        //checking for each column
        for(int i=0;i<9;i++){
            set<char>nums;
            for(vector<char>row:board){
                char cell=row[i];
                if(nums.find(cell)!=nums.end()) return false;
                if(cell!='.')
                nums.insert(cell);
            }
        }
        //checking for each 3x3 sub grid
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                set<char>s;
                for(int x=i;x<i+3;x++){
                    for(int y=j;y<j+3;y++){
                        char num = board[x][y];
                        if(s.find(num)!=s.end()) return false;
                        if(num!='.') s.insert(num);
                    }
                }
            }
        }
        
        return true;
    }
};