#include <iostream>
#include <vector>

using namespace std;

void moveDisk(vector<int>& source, vector<int>& dest) {
    dest.push_back(source.back());
    source.pop_back();
}

void towersOfHanoi(int n) {
    vector<int> tower1, tower2, tower3;
    int numMoves = (1 << n) - 1;
    
    for(int i = n; i > 0; i--) {
        tower1.push_back(i);
    }

    if(n % 2 == 0) {
        swap(tower2, tower3);
    }

    for(int move = 1; move <= numMoves; move++) {
        if(move % 3 == 1) {
            if(tower1.back() < tower2.back()) {
                moveDisk(tower1, tower2);
            } else {
                moveDisk(tower2, tower1);
            }
        } else if(move % 3 == 2) {
            if(tower1.back() < tower3.back()) {
                moveDisk(tower1, tower3);
            } else {
                moveDisk(tower3, tower1);
            }
        } else {
            if(tower2.back() < tower3.back()) {
                moveDisk(tower2, tower3);
            } else {
                moveDisk(tower3, tower2);
            }
        }
    }
}

int main() {
    int n = 3;
    towersOfHanoi(n);
    return 0;
}
