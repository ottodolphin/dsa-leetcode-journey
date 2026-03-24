#include <iostream>
#include <vector>

using namespace std;

int main() {
    //export prefix
    int n; 
    cout << "Enter the value of n: ";
    cin >> n;
    cin.ignore();
    vector<string> strs(n);
    for(int i = 0; i < n; i++) {
        cout << "strs[" << i << "] = ";
        getline(cin, strs[i]);
        
    }
    if(strs.empty()) return 0;
    string prefix = strs[0];
    for(int i = 1; i < n; i++) {
        while(strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if(prefix.empty()) return 0;
        }
    }
    cout << prefix;
    return 0;
}