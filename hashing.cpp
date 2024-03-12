//#include <iostream>
//#include <list>
//#include <unordered_map>
//
//using namespace std;
//
//class hashTable {
//private:
//    int bucket;
//    unordered_map<int, int>* table; // Using unordered_map instead of list<int, int>*
//
//public:
//    hashTable(int b) {
//        bucket = b;
//        table = new unordered_map<int, int>[b];
//    }
//
//    void insert(int key, int d) {
//        int buk = d % bucket;
//        table[buk][key] = d; // Insert key-value pair into the unordered_map
//    }
//
//    void print() {
//        for (int i = 0; i < bucket; i++) {
//            cout << "| Bucket " << i << " | ";
//            for (auto& kvp : table[i]) {
//                cout << " -> | Key: " << kvp.first << ", Value: " << kvp.second << " | ";
//            }
//            cout << endl;
//        }
//    }
//    int returnval(int key) {
//        for (int i = 0; i < bucket; i++) {
//            for (auto j : table[i]) {
//                if (key == j.first) {
//                    return j.second;
//                }
//            }
//        }
//    }
//};
//
//int main() {
//    hashTable ht(4);
//    ht.insert(1, 1);
//    ht.insert(2, 2);
//    ht.insert(11, 11); // Collides with 1
//    ht.insert(21, 21); // Collides with 1
//
//    ht.print();
//
//    cout << "Value at key 11 is : " << ht.returnval(11);
//
//    return 0;
//}
