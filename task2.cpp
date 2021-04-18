#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<float> food_list = {2.39 , 5.5 , 299.0 , 25.99 , 49.0 , 69.49};
    vector<int> shop_list = {0,3,4,5,1};
    float sum = 0;
    for (int i : shop_list){
        sum += food_list[i];
    }
    cout << "sum " << sum << endl;
    return 0;
}
