#include <bits/stdc++.h>
using namespace std;

int count_blocks(string s) {
    int blocks = 1;  // Start with 1 block
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i-1]) {
            blocks++;
        }
    }
    return blocks;
}

int max_blocks_after_rotation(string s) {
    int n = s.length();
    int max_blocks = 0;
    
    // Try all n possible rotations
    for (int i = 0; i < n; i++) {
        // Rotate by i positions: take characters from index i to end, then 0 to i-1
        string rotated = s.substr(i) + s.substr(0, i);
        int blocks = count_blocks(rotated);
        max_blocks = max(max_blocks, blocks);
    }
    
    return max_blocks;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        cout << max_blocks_after_rotation(s) << "\n";
    }
    
    return 0;
}