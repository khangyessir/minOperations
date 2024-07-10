class Solution {
public:
    int minOperations(vector<string>& logs) {
        int folder = 0;
        for(const auto &c : logs){
            if(c == "../") folder = max(0, folder - 1);
            else if(c != "./") ++folder;
        }
        return folder;
    }
};