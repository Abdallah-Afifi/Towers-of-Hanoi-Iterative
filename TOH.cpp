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
            if(tower1.empty() || (!tower2.empty() && tower1.back() > tower2.back())) {
                moveDisk(tower2, tower1);
                cout << "Move disk from tower 2 to tower 1" << endl;
            } else {
                moveDisk(tower1, tower2);
                cout << "Move disk from tower 1 to tower 2" << endl;
            }
        } else if(move % 3 == 2) {
            if(tower1.empty() || (!tower3.empty() && tower1.back() > tower3.back())) {
                moveDisk(tower3, tower1);
                cout << "Move disk from tower 3 to tower 1" << endl;
            } else {
                moveDisk(tower1, tower3);
                cout << "Move disk from tower 1 to tower 3" << endl;
            }
        } else {
            if(tower2.empty() || (!tower3.empty() && tower2.back() > tower3.back())) {
                moveDisk(tower3, tower2);
                cout << "Move disk from tower 3 to tower 2" << endl;
            } else {
                moveDisk(tower2, tower3);
                cout << "Move disk from tower 2 to tower 3" << endl;
            }
        }
    }
}

int main() {
    int n = 3;
    towersOfHanoi(n);
    return 0;
}
