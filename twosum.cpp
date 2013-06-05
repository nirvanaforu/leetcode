O(n^2) solution

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> idx;
        int size=numbers.size();
        for(int i=0;i<size;i++) {
            for (int j=i+1;j<size;j++) {
                if(numbers[i]+numbers[j]==target) {
                    idx.push_back(i+1);
                    idx.push_back(j+1);
                    return idx;
                }
            }
        }
    }
};

solution O(n)
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> vIdx;
        map<int, int> mValIdx;
        int size=numbers.size();
        for(int i=0;i<size;i++) {
            int pairNum=target-numbers[i];
            if(mValIdx.find(pairNum) != mValIdx.end()) {
                vIdx.push_back(mValIdx[pairNum]);
                vIdx.push_back(i+1);
                return vIdx;
            }
            mValIdx.insert(pair<int,int>(numbers[i],i+1));
        }
    }
};
