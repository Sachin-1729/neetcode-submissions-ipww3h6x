class Solution {
public:

    

    bool checkRow(int row , vector<vector<char>> board)
    {
        int column = board[0].size();
        map<int , int> mp{};
       
        for(int i = 0; i < column; i++)
        {   
            if(board[row][i] == '.')
            {
                continue;
            }
            int currentNumber = board[row][i] - '0';
            if(currentNumber <= 9 && currentNumber >= 1 && mp[currentNumber] <= 0)
            {   
                mp[currentNumber]++;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
    bool checkColumn(int col , vector<vector<char>> board)
    {
        int column = board[0].size();
        map<int , int> mp{};
        for(int i = 0; i < column; i++)
        {   
            if(board[i][col] == '.')
            {
                continue;
            } 
            int currentNumber = board[i][col] - '0';
            if(currentNumber <= 9 && currentNumber >= 1 && mp[currentNumber] <= 0)
            {   
                mp[currentNumber]++;
            }
            else
            {
                return false;
            }
        }

        return true;
    }

    bool checkSquare(int row , int col , vector<vector<char>> board)
    {   
        map<int , int> mp{};
        int maxRow = row + 3;
        int maxCol = col + 3;
        for(int i = row; i < maxRow; i++)
        {
            for(int j = col; j < maxCol; j++)
            {   
                if(board[i][j] == '.')
                {
                    continue;
                }
                int currentNumber = board[i][j] - '0';
                cout<<currentNumber<<"=>"<<mp[currentNumber]<<" "<<endl;
                
                  if(currentNumber <= 9 && currentNumber >= 1 && mp[currentNumber] <= 0)
                    {   
                        mp[currentNumber]++;
                    }
                    else
                    {
                        return false;
                    }

            }

        }
        // for(auto x: mp)
        // {
        //     cout<<x.first<<"->"<<x.second<<endl;
        // }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {

         for(int i = 0; i < 9; i++)
         {
            if(!checkRow(i, board))
            {
                return false;
            }

            if(!checkColumn(i, board))
            {
                return false;
            }
         }

      bool first  = checkSquare(0, 0, board);

      cout<<first<<"end";
      bool second = checkSquare(0, 3, board);
      bool third  = checkSquare(0, 6, board);
      bool fourth = checkSquare(3, 0, board);
      bool fifth  = checkSquare(3, 3, board);
      bool sixth  = checkSquare(3, 6, board);
      bool seventh =checkSquare(6, 0, board);
      bool eighth  =checkSquare(6, 3,board);
      bool nine    =checkSquare(6, 6,board);

      if(!first || !second || !third || !fourth || !fifth     
       || !sixth || !seventh || !eighth || !nine
      )
      {
        return false;
      }
         
      return true;   

        
    }
};
