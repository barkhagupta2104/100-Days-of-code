 class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if (divisor == 0)
            throw std::invalid_argument("Divisor cannot be zero");

       
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
          
        
        if (dividend == INT_MAX && divisor == -1)
            return -INT_MAX;
     
        long long dvd = static_cast<long long>(dividend);
        long long dvs = static_cast<long long>(divisor);

     
        int sign = (dvd < 0) ^ (dvs < 0) ? -1 : 1;

        dvd = std::abs(dvd);
        dvs = std::abs(dvs);

       
        long long quotient = 0;
        while (dvd >= dvs) {
            long long temp = dvs;
            int multiple = 1;
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            dvd -= temp;
            quotient += multiple;
        }

        return sign * quotient;
    }
};
