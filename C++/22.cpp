class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateParenthesis_(result, "", n, 0);
        // addingpar(result, "", n, 0);
        return result;
    }
    void generateParenthesis_(vector<string> &res, string exs, int n, int m){
        if(n == 0 && m == 0){
            res.push_back(exs);
            return;
        }
        if(m > 0) 
            generateParenthesis_(res, exs+")", n, m-1);
        if(n > 0) 
            generateParenthesis_(res, exs+"(", n-1, m+1);
    }
};