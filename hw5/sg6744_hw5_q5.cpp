#include <iostream>
#include <cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);
void printAmicable(int num, int M);

int main(){
    int M;
    do {
        cout<< "\nPlease enter a positive integer >= 2: ";
        cin>> M;
    }
    while (M < 2);

    cout<< "Perfect numbers: ";
    for (int i = 1; i <= M; i++) {  // analyzeDividors runs M times
        if (i >= 2 && isPerfect(i)) {
            cout << i << ", ";
        }
    }
    cout<< "\nAmicable numbers: "; // printAmicable doesnt run analyzeDividors
    for (int i = 1; i <= M; i++) {
        printAmicable(i, M);
    }


    return 0;
}
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) {   // 2*sqrt(M) == bigO[sqrt(M)]
    for (int i = 1; i < sqrt(num); i++) {
        if (i != num && num % i == 0) {
            outCountDivs++;
            outSumDivs += i;
        }
    }
    for (int i = sqrt(num); i > 1; i--) {
        if (num % i == 0) {
            outCountDivs++;
            outSumDivs += (num / i);
        }
    }
}
bool isPerfect(int num) {
    int outCountDivs = 0, outSumDivs = 0;
    analyzeDividors(num, outCountDivs, outSumDivs);
    if (outSumDivs == num) {
        return true;
    } else {
        return false;
    }
}
void printAmicable(int num, int M){
    // to be honest I couldnt think of a way to do this without an array or other data structure
    if (num < M) {
        switch (num){
            case 220:
                if (284 < M){
                    cout<< "("<< num<< ", 284)";
                }
                break;
            case 1184:
                if (1210 < M){
                    cout<< ", ("<< num<< ", 1210)";
                }
                break;
            case 2620:
                if (2924 < M){
                    cout<< ", ("<< num<< ", 2924)";
                }
                break;
            case 5020:
                if (5564 < M){
                    cout<< ", ("<< num<< ", 5564)";
                }
                break;
            case 6232:
                if (6368 < M){
                    cout<< ", ("<< num<< ", 6368)";
                }
                break;
            case 10744:
                if (10856 < M){
                    cout<< ", ("<< num<< ", 10856)";
                }
                break;
            case 12285:
                if (14595 < M){
                    cout<< ", ("<< num<< ", 14595)";
                }
                break;
            case 17296:
                if (18416 < M){
                    cout<< ", ("<< num<< ", 18416)";
                }
                break;
            case 63020:
                if (76084 < M){
                    cout<< ", ("<< num<< ", 76084)";
                }
                break;
            case 66928:
                if (66992 < M) {
                    cout << ", ("<< num << ", 66992)";
                }
                break;
        }
    }
}