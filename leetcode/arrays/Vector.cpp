#include <iostream>
#include <vector>

using namespace std;

int main() {
    // vector<int> v;

    // v.push_back(30);
    // v.push_back(20);
    // v.push_back(10);

    // cout << "Kich thuoc: " << v.size() << endl;
    // cout << "Phan tu thu hai: " << v[1] << endl;
    // v.pop_back();
    // cout << v.size();

    vector<vector<int>> matrix(3, vector<int> (3,5));
    vector<int> newRow = {1, 2, 3};
    matrix.push_back(newRow);
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix.size(); j++) {
            cout << matrix[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}