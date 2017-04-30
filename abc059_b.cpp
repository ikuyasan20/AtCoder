//http://abc059.contest.atcoder.jp/tasks/abc059_b
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void){
    string A, B;
    cin >> A >> B;

    int a = A.size();
    int b = B.size();

    if(a>b){
        cout << "GREATER" << endl;
        return 0;
    }else if(a<b){
        cout << "LESS" << endl;
        return 0;
    }
    for(int i=0; i<a; i++){
        if((int)A[i]>(int)B[i]){
            cout << "GREATER" << endl;
            return 0;
        }else if((int)A[i]<(int)B[i]){
            cout << "LESS" << endl;
            return 0;
        }
    }
    cout << "EQUAL" << endl;
    return 0;
}
