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
    cout << "Enter number delete :";
    int numberDel;
    cin >> numberDel;
    for (auto iter = sequence.begin(); iter < sequence.end(); iter++){
        if (*iter == numberDel){
            sequence.erase(iter);
        }else if (*iter == sequence.back()){
            cout << "No such number found !\n";
        }
    }
    for (int i : sequence){
        cout << i << " ";
    }
    return 0;
}
