#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix)
{
    vector<int> ans;
    const int m = matrix.size();
    if(m == 0)
        return ans;

    const int n = matrix[0].size();

    int sr = 0;
    int sc = 0;
    int ec = n - 1;
    int er = m - 1;
    int count = 0;
    int temp = m * n;
    while(sr <= er && sc <= ec) {

        // push sr
        for(int i = sc; i <= ec; i++) {
            ans.push_back(matrix[sr][i]);
            count++;
        }
        sr++;

        if(count == temp)
            return ans;

        // push ec
        for(int i = sr; i <= er; i++) {
            ans.push_back(matrix[i][ec]);
            count++;
        }
        ec--;

        if(count == temp)
            return ans;

        // push er
        for(int i = ec; i >= sc; i--) {
            ans.push_back(matrix[er][i]);
            count++;
        }
        er--;

        if(count == temp)
            return ans;

        // push sc
        for(int i = er; i >= sr; i--) {
            ans.push_back(matrix[i][sc]);
            count++;
        }
        sc++;
        if(count == temp)
            return ans;
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3},{4,5,6},{7,8,9}};
    vector<int> spiral = spiralOrder(matrix);
    return 0;
}