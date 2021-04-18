#include <iostream>
#include <vector>
using namespace std;
const int sizeVec = 20;
int main() {
    vector<int> vec;
    int number = 0;
    cout << "Enter number\n";
    while (number != -2){
        cin >> number;
        if (number == -2) continue;
        if (number == -1){
            cout << "vec.size " << vec.size() << endl;
            for (int i : vec){
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        if ((vec.size() + 1) > sizeVec){
            vec.erase(vec.begin());
            vec.push_back(number);
        }else  vec.push_back(number);
        //cout << "vec.size " << vec.size() << endl;
    }
    for (int i : vec){
        cout << i << " ";
    }
    return 0;
}
