#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec(20);
    int number = 0;
    int count = 0;
    cout << "Enter number\n";
    while (number != -2){
        cin >> number;
        //vector<int> buffer;
        if (number == -2) {
            continue;
        }else if (number == -1){
            for (int i = count; i < vec.size(); i++){
                cout << vec[i] << " ";
            }
            for (int i = 0; i < count; i++){
                cout << vec[i] << " ";
            }
            cout << endl;
            continue;
        }
        vec[count++] = number;
        if (count == 20) count = 0;
    }
    return 0;
}
