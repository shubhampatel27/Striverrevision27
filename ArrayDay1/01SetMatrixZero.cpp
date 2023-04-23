//   first approach
/* So in brute force approach we can take a matrix(New Matrix) copy of the original matrix

   Then checks each cell in the copy Matrix and if a cell contains a zero , 
   it will go through the corresponding Row and Column in the original grid/matrix and sets all cell to Zero

   After the function finishes the original Grid will have all zeros in the same rows and columns
   as the original zeros in the grid

   Here's an outline of the cod
 
   create a copy of the input matrix.
   Iterate through each cell in the copied matrix
   If a cell contains a "0" iterate through its corresponding row and column in the original matrix and set all cells to Zero
   return the modified original Matrix
  

*/

// first approach 
#include<vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowLen = matrix.size();
        int colLen = matrix[0].size();
        vector<vector<int>> temp = matrix;
        for(int row= 0 ;row<rowLen; row++){
            for(int col=0; col<colLen; col++){
                if(temp[row][col]==0){
                    for(int k=0;k<colLen;k++){
                        matrix[row][k] = 0;
                    }
                    for(int k=0;k<rowLen;k++){
                        matrix[k][col] = 0;
                    }
                }

            }
        }

    }
};

