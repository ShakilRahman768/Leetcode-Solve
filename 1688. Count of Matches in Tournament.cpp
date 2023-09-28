class Solution {
public:
    int numberOfMatches(int n) {
        int a,b=0;
        while(n!=1){
            if(n%2==0){
                a=n/2;
                n=n/2;
                b=b+a;
            }
            else{
                a=n/2;
                n=(n/2)+1;
                b=b+a;
            }
        }
        return b;
    }
};
