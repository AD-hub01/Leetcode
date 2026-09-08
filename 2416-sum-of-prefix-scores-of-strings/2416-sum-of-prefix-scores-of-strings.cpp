class Trie {
public:
    Trie* child[26];
    int cnt;

    Trie() {
        cnt = 0;
        for (int i = 0; i < 26; i++)
            child[i] = nullptr;
    }

    void insert(string &word) {
        Trie* node = this;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->child[idx])
                node->child[idx] = new Trie();

            node = node->child[idx];
            node->cnt++;
        }
    }

    int getScore(string &word) {
        Trie* node = this;
        int sum = 0;

        for (char c : word) {
            node = node->child[c - 'a'];
            sum += node->cnt;
        }

        return sum;
    }
};

class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie* root = new Trie();

        for (string &word : words)
            root->insert(word);

        vector<int> ans;

        for (string &word : words)
            ans.push_back(root->getScore(word));

        return ans;
    }
};