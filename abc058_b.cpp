//http://abc058.contest.atcoder.jp/tasks/abc058_b
#include <iostream>
using namespace std;

string O, E;

void read_input(){
    cin >> O >> E;
}

int main(void){
    read_input();
    int i = 0;
    int O_size = O.size();
    int E_size = E.size();
    while(true){
        if(i >= O_size){
            break;
        }
        cout << O[i];
        if(i >= E_size){
            break;
        }
        cout << E[i];
        i++;
    }
    cout << endl;
    return 0;
}
