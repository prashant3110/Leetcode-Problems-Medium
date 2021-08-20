/* 
Write an efficient algorithm that searches for a target value in an m x n integer matrix. The matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom. */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
        int row=matrix.size();
        int col=matrix[0].size();
    
        int r=0;
        int c=col-1;
        
        while(r<row && c>=0)
        {
            if(matrix[r][c]==target)
            {
                return true;
            }
            else if(matrix[r][c]>target)
            {
                c--;
            }
            else
            {
                r++;
            }
        }
    return false; 
        
    }
};
   
