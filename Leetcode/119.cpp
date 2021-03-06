class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex < 0)
        {
            return {};
        }
        
        vector<int> ret(rowIndex + 1);
        ret[0] = 1;
        
        for(int i = 1; i <= rowIndex; ++i)
        {
            for(int j = i; j >= 1; --j)
            {
                ret[j] += ret[j - 1];
            }
        }
        
        return ret;
    }
};