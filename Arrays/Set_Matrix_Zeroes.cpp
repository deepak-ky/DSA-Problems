class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        //Method - 4
        bool col_Zero = false;
        for(int i=0;i<n;i++){
            if(matrix[i][0] == 0) col_Zero = true;
            for(int j=1;j<m;j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(j == 0){
                    if(col_Zero) matrix[i][j] = 0;
                }else{
                    if(matrix[i][0] == 0 || matrix[0][j] == 0){
                      matrix[i][j] = 0;   
                    }
                }
            }
        }
        
        
        // Method - 3
        //             bool row_Zero = false;
        //             bool col_Zero = false;

        //             for(int i=0;i<n;i++){
        //                 if(matrix[i][0] == 0){
        //                     row_Zero = true;
        //                 }
        //             }for(int i=0;i<m;i++){
        //                 if(matrix[0][i] == 0){
        //                     col_Zero = true;
        //                 }
        //             }

        //             for(int i=1;i<n;i++){
        //                 for(int j=1;j<m;j++){
        //                     if(matrix[i][j] == 0){
        //                         matrix[i][0] = 0;
        //                         matrix[0][j] = 0;
        //                     }
        //                 }
        //             }

        //             for(int i=1;i<n;i++){
        //                 for(int j=1;j<m;j++){
        //                     if(matrix[i][0] == 0 || matrix[0][j] == 0){
        //                         matrix[i][j] = 0;
        //                     }
        //                 }
        //             }

        //             if(col_Zero){
        //                 for(int i=0;i<m;i++){
        //                     matrix[0][i] = 0;
        //                 }
        //             }
        //             if(row_Zero) {
        //                 for(int i=0;i<n;i++){
        //                     matrix[i][0] = 0;
        //                 }
        //             }
                
        // Method - 2
        //         vector<bool> rowSet(n,false);
        //         vector<bool> colSet(m,false);

        //         for(int i=0;i<n;i++){
        //             for(int j=0;j<m;j++){
        //                 if(matrix[i][j] == 0){
        //                     rowSet[i] = true;
        //                     colSet[j] = true;
        //                 }
        //             }
        //         }

        //         for(int i=0;i<n;i++){
        //             for(int j=0;j<m;j++){
        //                 if(rowSet[i] || colSet[j]){
        //                     matrix[i][j] = 0;
        //                 }
        //             }
        //         }
        
        
        // Method - 1
        //         vector<vector<int>> v = matrix;

        //         for(int i=0;i<n;i++){
        //             for(int j=0;j<m;j++){
        //                 if(v[i][j] == 0){
        //                     for(int k=0;k<m;k++){
        //                         matrix[i][k] = 0;
        //                     }

        //                     for(int k=0;k<n;k++){
        //                         matrix[k][j] = 0;
        //                     }
        //                 }
        //             }
        //         }
        
        
        
        
    }
};