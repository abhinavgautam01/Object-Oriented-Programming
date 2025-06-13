#include <iostream>
#include <vector>
using namespace std;

vector<int> func(vector<int> &arr){
    int n = arr.size();
    int swap = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
        }
    }
    int k = count;
    int countZero = 0;
    int minCountZero = n;
    for(int i = 0; i<k ; i++){
        if(arr[i]==0){
            countZero++;
        }
    }
    if(countZero < minCountZero){
        minCountZero = countZero;
    }
    int sp=0;
    int ep=k-1;

    for(int i = k; i<n; i++){
        if(arr[i]==0){
            countZero++;
        }
        if(arr[i-k]==0){
            countZero--;
        }
        if(countZero < minCountZero){
            minCountZero = countZero;
            sp=i-k+1;
            ep=i;
        }

    }

    for(int i = sp; i<=ep; i++){
        for(int j=0; j<n; j++){
            if(j<sp || j>ep){
                if(arr[j]==1){
                    if(arr[i]==0){
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {  0, 1, 0, 1, 0, 0, 1, 0 };
    vector<int> result = func(arr);
    for(int i =0 ; i< result.size(); i++){
        cout<<result[i]<<" ";
    }
}




























// // int main() {
// //     int n;
// //     cout << "Enter the amount of water to pour: ";
// //     cin >> n;
// //     vector<float> glasses(10, 0);
// //     int i = 0;
// //     while (n > 0 && i < glasses.size()) {
// //         float pour = min(1, n);
// //         glasses[i] = pour;
// //         n -= pour;
// //         i++;
// //     }
// //     cout << "Water in each glass:\n";
// //     for (int j = 0; j < glasses.size(); j++) {
// //         cout << "Glass " << j + 1 << ": " << glasses[j] << " unit(s)" << endl;
// //     }
// //     return 0;
// // }
// #include <iostream>
// #include <iomanip>
// #include <vector>
// using namespace std;

// int main() {
//     float n;
//     cout << "Enter amount of water to pour: ";
//     cin >> n;

//     vector<vector<float>> glass;
//     glass.push_back({n});

//     int level = 0;

//     while (true) {
//         bool hasNextLevel = false;
//         vector<float> nextLevel(level + 2, 0.0);

//         for (int j = 0; j <= level; j++) {
//             float current = min(glass[level][j], 1.0f);
//             float overflow = max(0.0f, glass[level][j] - 1.0f);

//             glass[level][j] = current;

//             if (overflow > 0.0f) {
//                 hasNextLevel = true;
//                 nextLevel[j] += overflow / 2.0f;
//                 nextLevel[j + 1] += overflow / 2.0f;
//             }
//         }

//         if (!hasNextLevel) break;

//         glass.push_back(nextLevel);
//         level++;
//     }

//     cout << "\nWater in glasses:\n\n";
//     for (int i = 0; i < glass.size(); i++) {
//         cout << string((glass.size() - i) * 2, ' ');
//         for (float val : glass[i]) {
//             cout << fixed << setprecision(2) << val << "   ";
//         }
//         cout << "\n\n";
//     }

//     return 0;
// }

