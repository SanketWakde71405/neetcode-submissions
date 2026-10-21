
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      
        map<char,int> mp;

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                if (board[i][j] == '.') continue;
                if(board[i][j]!='.' && mp[board[i][j]]) return false;
                else if(board[i][j]!='.') mp[board[i][j]]++;
            }
            mp.clear();
        }


        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                if (board[j][i] == '.') continue;
                if(board[j][i]!='.' && mp[board[j][i]]) return false;
                else if(board[j][i]!='.') mp[board[j][i]]++;
            }
            mp.clear();
        }
        for(int i=1;i<board.size();i+=3){
            for(int j=1;j<board.size();j+=3){
                   if(board[i][j]!='.') mp[board[i][j]]++;

                   // Comparing prev element in box 
                   if(board[i-1][j]!='.' && mp[board[i-1][j]]) return false;
                   else mp[board[i-1][j]]++;

                   // Comparing next element in box
                   if(board[i+1][j]!='.' && mp[board[i+1][j]]) return false; 
                   else mp[board[i-1][j]]++;

                   // Comparing above element in box 
                   if(board[i][j-1]!='.' && mp[board[i][j-1]]) return false; 
                   else mp[board[i][j-1]]++;

                   // Comparing below element in box 
                   if(board[i][j+1]!='.' && mp[board[i][j+1]]) return false;
                   else mp[board[i][j+1]]++;

                   // Comparing diagonally top left element in box 
                   if(board[i-1][j-1]!='.' && mp[board[i-1][j-1]]) return false;
                   else mp[board[i-1][j-1]]++;

                   // Comparing diagonally top right element in box
                   if(board[i-1][j+1]!='.' && mp[board[i-1][j+1]]) return false;
                   else mp[board[i-1][j+1]]++;

                   // Comparing diagonally bottom left element in box 
                   if(board[i+1][j-1]!='.' && mp[board[i+1][j-1]]) return false;
                   else mp[board[i+1][j-1]]++;

                   // Comparing diagonally bottom right element in box 
                   if(board[i+1][j+1]!='.' && mp[board[i+1][j+1]]) return false;
                   else mp[board[i+1][j+1]]++;
                   mp.clear();
            }
           
        }

        return true;

    }
};
