class TrieNode {
public:
    vector<TrieNode*> children;
    bool endOfWord;

    TrieNode() : children(26, nullptr), endOfWord(false) {}
};

class WordDictionary {
public:
    TrieNode* root;
    
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* curr = root;

        for (char c: word) {
            if (curr->children[c-'a']==nullptr) curr->children[c-'a'] = new TrieNode();
            curr = curr->children[c-'a'];
        }

        curr->endOfWord = true;
    }
    
    bool search(string word) {
        return dfs(word, 0, root);
    }

private:
    bool dfs(string word, int j, TrieNode* root) {
        TrieNode* curr = root;

        for (int i=j;i<word.size();i++) {
            char c = word[i];

            if (c=='.') {
                for (TrieNode* child: curr->children) {
                    if (child!=nullptr && dfs(word, i+1, child)) return true;
                }
                return false;
            } else {
                if (curr->children[c-'a']==nullptr) return false;
                curr = curr->children[c-'a'];
            }
        }

        return curr->endOfWord;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */