//#include "stdio.h"
//int main(){
//    int n = 100;
//    int res=0;
//    for (int i=0;i<4000;i++){
//        for (int j=0;j<40000;j++){
//            res++;
//        }
//        res+=n;
//    }
//    return 0;
//}
//
//#include <stdio.h>
//#include <time.h> // for clock_gettime
//
//int main() {
//    struct timespec start, end;
//    int res = 0, n = 100;
//    clock_gettime(CLOCK_MONOTONIC_RAW, &start);
//    for (int i = 0; i < 4000; i++) {
//        for (int j = 0; j < 40000; j++) {
//            res++;
//        }
//        res += n;
//    }
//    clock_gettime(CLOCK_MONOTONIC_RAW, &end);
//    printf("Time taken: %lf sec.\n", end.tv_sec - start.tv_sec + 0.000000001 * (end.tv_nsec - start.tv_nsec));
//    return 0;
//}


//#include <stdio.h> // for printf
//#include <sys/times.h> // for times
//#include <unistd.h> // for sysconf
//
//int main() {
//    struct tms start, end;
//    long clocks_per_sec = sysconf(_SC_CLK_TCK);
//    long clocks;
//    int res = 0, n = 100;
//    times(&start);
//    for (int i = 0; i < 4000; i++) {
//        for (int j = 0; j < 40000; j++) {
//            res++;
//        }
//        res += n;
//    }
//    times(&end);
//
//    clocks = end.tms_utime - start.tms_utime;
//    printf("Time taken: %lf sec.\n", (double) clocks / clocks_per_sec);
//    return 0;
//}

//#include <stdio.h> // for printf
//
//int main() {
//    union ticks {
//        unsigned long long t64;
//        struct s32 {
//            long th, tl;
//        } t32;
//    } start, end;
//    double cpu_Hz = 2300000000ULL; // for 3 GHz CPU
//    int res = 0, n = 100;
//    asm("rdtsc\n":"=a"(start.t32.th), "=d"(start.t32.tl));
//    for (int i = 0; i < 4000; i++) {
//        for (int j = 0; j < 40000; j++) {
//            res++;
//        }
//        res += n;
//    }
//    asm("rdtsc\n":"=a"(end.t32.th), "=d"(end.t32.tl));
//
//    printf("Time taken: %lf sec.\n", (end.t64 - start.t64) / cpu_Hz);
//    return 0;
//}


// Timer 1;
//#include "stdio.h"
//#include "math.h"
//#include "string.h"
//int stoi(char *str, unsigned int len) {
//    int res = 0;
//    for (int i = 0; i < len; i++) {
//        if (str[i] - '0' < 0 || str[i] - '0' > 9) return -1;
//        res = res * 10 + str[i] - '0';
//    }
//    return res;
//}
//
//
//
//int main(int argc, char **arcv){
//    int n = stoi(arcv[1], strlen(arcv[1]));
//    int x = stoi(arcv[2], strlen(arcv[2]));
//    int res=0;
//    int fact = 1;
//    for (int i = 1; i <= n; ++i) {
//        res += pow(-1, i - 1) * pow(x, 2*i-1) / fact;
//        fact*=2*i;
//        fact*=(2*i+1);
//    }
//    return 0;
//}

// Timer 2.
//#include "stdio.h"
//#include "math.h"
//#include "string.h"
//#include <time.h> // for clock_gettime
//int stoi(char *str, unsigned int len) {
//    int res = 0;
//    for (int i = 0; i < len; i++) {
//        if (str[i] - '0' < 0 || str[i] - '0' > 9) return -1;
//        res = res * 10 + str[i] - '0';
//    }
//    return res;
//}
//int main(int argc, char **arcv) {
//    struct timespec start, end;
//    clock_gettime(CLOCK_MONOTONIC_RAW, &start);
//    int n = stoi(arcv[1], strlen(arcv[1]));
//    int x = stoi(arcv[2], strlen(arcv[2]));
//    int res=0;
//    int fact = 1;
//    for (int i = 1; i <= n; ++i) {
//        res += pow(-1, i - 1) * pow(x, 2*i-1) / fact;
//        fact*=2*i;
//        fact*=(2*i+1);
//    }
//    clock_gettime(CLOCK_MONOTONIC_RAW, &end);
//    printf("Time taken: %lf sec.\n", end.tv_sec - start.tv_sec + 0.000000001 * (end.tv_nsec - start.tv_nsec));
//    return 0;
//}


// Timer 3.
//#include <stdio.h> // for printf
//#include <sys/times.h> // for times
//#include <unistd.h> // for sysconf
//#include "math.h"
//#include "string.h"
//int stoi(char *str, unsigned int len) {
//    int res = 0;
//    for (int i = 0; i < len; i++) {
//        if (str[i] - '0' < 0 || str[i] - '0' > 9) return -1;
//        res = res * 10 + str[i] - '0';
//    }
//    return res;
//}
//
//int main(int argc, char **arcv) {
//    struct tms start, end;
//    long clocks_per_sec = sysconf(_SC_CLK_TCK);
//    long clocks;
//    times(&start);
//    int n = stoi(arcv[1], strlen(arcv[1]));
//    int x = stoi(arcv[2], strlen(arcv[2]));
//    int res=0;
//    int fact = 1;
//    for (int i = 1; i <= n; ++i) {
//        res += pow(-1, i - 1) * pow(x, 2*i-1) / fact;
//        fact*=2*i;
//        fact*=(2*i+1);
//    }
//       times(&end);
//    clocks = end.tms_utime - start.tms_utime;
//    printf("Time taken: %lf sec.\n", ((double) clocks / clocks_per_sec));
//    return 0;
//}

//#include <stdio.h> // for printf
//#include "math.h"
//#include "string.h"
//int stoi(char *str, unsigned int len) {
//    int res = 0;
//    for (int i = 0; i < len; i++) {
//        if (str[i] - '0' < 0 || str[i] - '0' > 9) return -1;
//        res = res * 10 + str[i] - '0';
//    }
//    return res;
//}
//int main(int argc, char **arcv) {
//    union ticks {
//        unsigned long long t64;
//        struct s32 {
//            long th, tl;
//        } t32;
//    } start, end;
//    double cpu_Hz = 2301000000ULL; // for 2.301 GHz CPU
//    asm("rdtsc\n":"=a"(start.t32.th), "=d"(start.t32.tl));
//    int n = stoi(arcv[1], strlen(arcv[1]));
//    int x = stoi(arcv[2], strlen(arcv[2]));
//    int res=0;
//    int fact = 1;
//    for (int i = 1; i <= n; ++i) {
//        res += pow(-1, i - 1) * pow(x, 2*i-1) / fact;
//        fact*=2*i;
//        fact*=(2*i+1);
//    }
//    asm("rdtsc\n":"=a"(end.t32.th), "=d"(end.t32.tl));
//
//    printf("Time taken: %llu   %llu  sec.\n",start.t64, end.t64 );
//    return 0;
//}

#include "stdio.h"
#include "math.h"
#include "string.h"

int stoi(char *str, unsigned int len) {
    int res = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] - '0' < 0 || str[i] - '0' > 9) return -1;
        res = res * 10 + str[i] - '0';
    }
    return res;
}

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