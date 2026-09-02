class Solution {
public:
    int path(int a,int b,){
        if(a==1 || b==1){
            return 1;

        }
        return path(a-1,b)+path(a,b-1);
    }
    int uniquePaths(int m, int n) {
        return path(m,n);
    }
};