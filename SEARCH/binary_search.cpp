#include <iostream>
using namespace std;

// int main() {
//     int n, key;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << "Enter the element to search: ";
//     cin >> key;
//     int low = 0, high = n - 1, mid;
//     bool found = false;
//     while (low <= high) {
//         mid = (low + high) / 2;

//         if (arr[mid] == key) {
//             cout << "Element found at index " << mid << endl;
//             found = true;
//             break;
//         }
//         else if (arr[mid] < key) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     if (!found) {
//         cout << "Element not found!" << endl;
//     }

//     return 0;
// }

vector <int> v;
bool binary_search(v.begin(),v.end(),value){
    vector <int> v;
    while (true){
        cin>>value;
        if(value==-1)
        break;
        v.push_back(value);
    }
    if(binary_search(v.begin(),v.end(),ele))
    cout<<"Element found";
    else
    cout<<Element not found
}
// vector <int> v;


