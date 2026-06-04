class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        string ans ="";
        for(int i=0; i<prefix.size(); i++){
            char current = strs[0][i];
            for(int j=1; j<strs.size(); j++){
                if(i >= strs[j].size() || strs[j][i] != current) {
                    return ans;
                }

        }
        ans += current;
    }
    return ans;
    }

};