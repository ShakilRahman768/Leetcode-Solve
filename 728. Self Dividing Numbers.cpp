class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        int a,b,c,i;
        for(i=left;i<=right;i++){
            a=i;
            c=0;
            while(a!=0){
                b=a%10;
                if(b==0){
                    c=1;
                }
                else if(i%b!=0){
                    c=1;
                }
                a=a/10;
            }
            if(c==0){
                v.push_back(i);
            }
        }
        return v;
    }
};
