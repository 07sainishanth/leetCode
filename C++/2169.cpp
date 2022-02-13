class Solution {
    int operations = 0;
public:
    int countOperations(int num1, int num2) {
        if (num1 == 0 || num2 == 0)
            return operations;
        operations++;
        if(num1 > num2)
            return countOperations(num2, num1-num2);
        else
            return countOperations(num1, num2-num1);
        return operations;
    }

};