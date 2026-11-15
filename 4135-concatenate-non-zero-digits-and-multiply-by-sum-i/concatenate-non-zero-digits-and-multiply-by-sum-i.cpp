class Solution {
long long reverse(long long digit){
    long long rev=0;
    for(int i=digit; i!=0 ; i=i/10){
        long long rem=i%10;
        rev=(rev*10)+rem;
    }
    return rev;
}
public:
    long long sumAndMultiply(long long n) {
        long long sum=0;
        long long digit=0;
        for(int i=n ; i!=0 ; i=i/10){
            long long rem=i%10;
            if(rem!=0){
                digit=(digit*10)+rem;
            }
        }
        digit=reverse(digit);
        long long num=digit;
        for(num ; num!=0 ; num=num/10){
            long long rem=num%10;
            sum=sum+rem;
        }
        return digit*sum;
    }
};