class Solution {
public:
    string reverseWords(string s) {
        //extract words 
        vector<string> word;
        string temp="";
        // reverse the words 
        for(char i : s){
            if(i!=' '){
                temp += i;
            }
            else if (temp !="") {
                word.push_back(temp);
                temp ="";

            }
               
            

        }
        // join them back intoa string
        if(temp!=""){
            word.push_back(temp);
            } 
        reverse(word.begin(), word.end());
        string ans ="";
        for(int j=0; j<word.size(); j++){
            ans += word[j];

            if(j != word.size()-1){
                ans += " ";
            }
                
        }
        return ans;
        
    }
};