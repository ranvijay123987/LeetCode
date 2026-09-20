class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        char ch;
        for (int i=0;i<s.size();i++){
            ch=s[i];
            sum+=(123-ch)*(i+1);


        }
        return sum;
    }
        

};