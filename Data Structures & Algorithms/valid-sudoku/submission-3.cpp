class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char> numbers[9];
        int n;

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] >= '1' && board[i][j] <= '9'){

                    n = ((i/3) * 3 + (j/3));
                    if(numbers[n].count(board[i][j])){
                        return false;
                    }
                    else{
                        numbers[n].insert(board[i][j]);
                    }

                    for(int l=0; l<9; l++){
                        if(l==j){
                            continue;
                        }
                        else{
                            if(board[i][j]==board[i][l]){
                                return false;
                            }
                        }
                    }

                    for(int l=0; l<9; l++){
                        if(l==i){
                            continue;
                        }
                        else{
                            if(board[i][j]==board[l][j]){
                                return false;
                            }
                        }
                    }

                    
                }
                else{
                    continue;
                }


            
            }
        }

        return true;
        
        
    }
};
