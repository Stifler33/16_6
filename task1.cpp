#include <iostream>
#include <vector>
using namespace std;
int check (int count){
    while (count <= 0){
        cout << "number less or equal 0 !\n";
        cin >> count;
    }
    return count;
}
int main() {
    vector<int> sequence;
    int sumNumb;
    cout << "Enter sum number ";
    cin >> sumNumb;
    if (sumNumb <= 0) sumNumb = check(sumNumb);
    for (int i = 0; i < sumNumb; i++){
       int number;
       cout << "Enter number sequence\n";
       cin >> number;
       sequence.push_back(number);
    }
    cout << "Enter number delete :";
    int numberDel;
    cin >> numberDel;
    vector<int> newVec;
    for (int n = 0 ; n < sequence.size(); n++){
       if (sequence[n] != numberDel){
           newVec.push_back(sequence[n]);
       }
    }
    sequence = newVec;
    for (int i : sequence){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
