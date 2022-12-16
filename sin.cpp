
#include "stdio.h"
#include "math.h"
#include "string.h"

//int stoi(char *str, unsigned int len) {
//    int res = 0;
//    for (int i = 0; i < len; i++) {
//        if (str[i] - '0' < 0 || str[i] - '0' > 9) return -1;
//        res = res * 10 + str[i] - '0';
//    }
//    return res;
//}

int main(int argc, char **arcv) {
    int n = stoi(arcv[1], strlen(arcv[1]));
    double x = stoi(arcv[2], strlen(arcv[2]));
    double res = 0;
    double fact = 1;
    double a = 1;
    for (int i = 1; i <= n; ++i) {
        res += ((double) (a * x) / fact);
        a *= -1;
        x *= pow(x, 2);
        fact *= ((2 * i) * (2 * i + 1));
    }
    printf("%lf", res);
    return 0;
}