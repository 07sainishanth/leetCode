class Solution {
    int freq[100005][2];
public:
    int minimumOperations(vector<int>& nums) {
        memset(freq, 0, sizeof(freq));
        int n=nums.size(), i, j, k, ans=0;
        for(i = 0; i < n; i++) {
            freq[nums[i]][i&1]++;
        }
        for(i = 1, j=k=0; i <= 100000; i++) {
           // Add the maximum frequency of odd indexes to maximum frequency even indexes 
           //and vice versa, it will give us how many elements we don't need to change. 
            ans = max(ans, max(freq[i][0] + k, freq[i][1] + j));
            j = max(j, freq[i][0]);
            k = max(k, freq[i][1]);
        }
        return n - ans;
    }
};

/*

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int totalEven = 0, totalOdd = 0;
        
        unordered_map<int,int> mapEven, mapOdd;
        
        for(int i=0;i<nums.size();i++) {
            if(i%2==0) {
                totalEven++;
                mapEven[nums[i]]++;
            }
            
            else {
                totalOdd++;
                mapOdd[nums[i]]++;
            }
        }
        
        
        int firstEvenCount = 0, firstEven = 0;
        int secondEvenCount = 0, secondEven = 0;
        
        for(auto it=mapEven.begin();it!=mapEven.end();it++) {
            int num = it->first;
            int count = it->second;
            
            if(count>=firstEvenCount) {
                secondEvenCount = firstEvenCount;
                secondEven = firstEven;
                firstEvenCount = count;
                firstEven = num;
            }
            
            else if(count >= secondEvenCount) {
                secondEvenCount = count;
                secondEven = num;
            }
        }
        
        
        int firstOddCount = 0, firstOdd = 0;
        int secondOddCount = 0, secondOdd = 0;
        
        
        for(auto it=mapOdd.begin();it!=mapOdd.end();it++) {
            int num = it->first;
            int count = it->second;
            
            if(count>=firstOddCount) {
                secondOddCount = firstOddCount;
                secondOdd = firstOdd;
                firstOddCount = count;
                firstOdd = num;
            }
            
            else if(count>=secondOddCount) {
                secondOddCount = count;
                secondOdd = num;
            }
        }
        
        int operationsEven = 0, operationsOdd = 0;
        
        
        operationsEven = totalEven - firstEvenCount;
        
        if(firstEven!=firstOdd) operationsEven += (totalOdd - firstOddCount);
        else operationsEven += (totalOdd - secondOddCount);
        
        
        operationsOdd = totalOdd - firstOddCount;
        if(firstOdd!=firstEven) operationsOdd += (totalEven - firstEvenCount);
        else operationsOdd += (totalEven - secondEvenCount);
        
        
        return min(operationsEven, operationsOdd);
        
    }
};

/*