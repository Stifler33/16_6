#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> sequence;
    int counter;
    cout << "Enter sum number ";
    cin >> counter;
    for (int i = 0; i < counter; i++){
       int number;
       cout << "Enter number sequence\n";
       cin >> number;
       sequence.push_back(number);
    }
    
    return 0;
}
