class Solution {
public:
    // string removebraces(string s){
    //     int n = s.length();
    //   return s.substr(1,n);
    // }
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = knowledge.size();
        unordered_map<string, string> mp;
        for(int i =0; i<n; i++){
        mp[knowledge[i][0]] = knowledge[i][1];
        }
       string ans;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '('){
               i++;
                    string check;
                while(s[i] != ')'){
                    if(s[i] == '(') continue;
                    check += (s[i]);
                    i++;
                }
                if(mp.find(check) != mp.end()){
                   ans += mp[check];
                
                }
                else ans += "?";
            }
    
           
        else {
                ans += s[i];
            }
        }
        return ans;


    }
};