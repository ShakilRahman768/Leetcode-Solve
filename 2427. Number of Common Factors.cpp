class Solution {
public:
    int commonFactors(int a, int b) {
        int c=0,n,i;
        if(a>b){
            n=b;
            if(a%b==0){
                c++;
            }
        }
        else{
            n=a;
            if(b%a==0){
                c++;
            }
        }
        for(i=1;i<=n/2;i++){
            if(a%i==0 && b%i==0){
                c++;
            }
        }
        return c;
    }
};
