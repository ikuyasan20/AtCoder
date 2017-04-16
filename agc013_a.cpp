
//http://agc013.contest.atcoder.jp/tasks/agc013_a
#include <iostream>
using namespace std;

int judge_slope(int a, int b){
    if(a==b){return 0;}
    else if(a<b){return 1;}
    else if(a>b){return -1;}
    else{return 99;}
}

int main(void){
    int N;
    int A[100000] = {};
    int i;

    cin >> N;
    for(i=0;i<N;i++){
        cin >> A[i];
    }

    int c_slope = 0;
    int p_slope = 0;
    int count = 1;
    for(i=1;i<N;i++){
        c_slope = judge_slope(A[i-1],A[i]);
        if(p_slope == 0){
            if(c_slope == 1){
                p_slope = 1;
            }
            if(c_slope == -1){
                p_slope = -1;
            }
        }
        if(p_slope == 1 && c_slope == -1){
            count++;
            p_slope = 0;
        }
        if(p_slope == -1 && c_slope == 1){
            count++;
            p_slope = 0;
        }
    }
    cout << count << endl;
    return 0;
}
