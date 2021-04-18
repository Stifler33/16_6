#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<float> food_list = {2.39 , 5.5 , 299.0 , 25.99 , 49.0 , 69.49};
    vector<int> shop_list = {2,3,5,0,1};
    float sum = 0;
    for (int i : shop_list){
        if (i < food_list.size()){
            sum += food_list[i];
        }else cout <<"'" << i << "' not correct index !\n";
    }
    cout << "sum " << sum << endl;
    return 0;
}
