class Solution {
public:
    int countDigits(int num) {
        int a=0,b,c,i;
        c=num;
        while(c!=0){
            b=c%10;
            c=c/10;
            if(num%b==0){
                a++;
            }
        }
        return a;
    }
};
