class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0;
        for(int i=0;i<word.length();i++){
            if(word[i]>=65 && word[i]<=90)
                cnt++;
        }
        if(cnt==1 && (word[0]>=65 && word[0]<=90) || cnt==word.length() || cnt==0)
            return true;
        else
            return false;
    }
};