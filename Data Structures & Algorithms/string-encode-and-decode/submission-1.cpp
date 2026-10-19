class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (const string& s : strs) {
            res += to_string(s.size()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int hashPos = s.find('#', i);
            int len = stoi(s.substr(i, hashPos - i));
            res.push_back(s.substr(hashPos + 1, len));
            i = hashPos + 1 + len;
        }
        return res;
    }
};