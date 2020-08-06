class WordDictionary {
public:
    /** Initialize your data structure here. */
    WordDictionary() {
        
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        wordmap[word.size()].insert(word);
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        int size = word.size();
        if(wordmap.find(size) == wordmap.end()){
            return false;
        }
        
        unordered_set<string> words = wordmap[size];
        for (auto i = words.begin(); i != words.end(); ++i) {
            if(Match(word, *i)){
                return true;
            }
        }
        return false;
    }
    
    bool Match(string a, string b){
        for(int i = 0; i < a.size() ; i++){
            if((a[i] != b[i]) && (a[i] != '.')){
                return false;
            }
        }
        
        return true;
    }
    
private:
    unordered_map<int, unordered_set<string>> wordmap;
};