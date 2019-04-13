#include <bits/stdc++.h>

using namespace std;
bool f(int N){
    int sum=0;
    int count=0;
    int cutOut = 8;
    while(sum!=1&&count<cutOut){
        sum = 0;
        while(N!=0){
            int num = (N%10);
            sum+=num*num;
            N/=10;
        }
        N = sum;
        count++;
    }
    return count !=cutOut;
}
int main() {
    return 0;
}