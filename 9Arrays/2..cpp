#include <iostream>
#include <climits>


using namespace std;

int main() {
    
    int arr[] = {1, 4, 7, 9};
    int max = arr[0];

    for (int i = 0; i < 4; i++) {
        if (arr[i] > max) {
            max = arr[i];
            cout << max << endl;
        }
    }


    return 0;
}