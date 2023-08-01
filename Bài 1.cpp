//bài 1 tìm và xóa hết các phần tử có giá trị x ở trong mảng A có n phần tử

// input
// nhập mảng A: 1 2 3 4 5 -1 (để break vòng lặp)
// nhập giá trị cần xóa trong mảng A: 3
// output : 1 2 4 5
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void removeElements(std::vector<int>& a, int x) {
//    int j = 0;
//    int n = a.size();
//    for (int i = 0; i < n; i++) {
//        if (a[i] != x) {
//            a[j] = a[i];
//            j++;
//        }
//    }
//
//    a.resize(j);
//}
//
//int main() {
//    vector<int> a;
//    int x;
//
//    //cout << "Mang A (nhap -1 de ket thuc): ";
//    while (true) {
//        cin >> x;
//        if (x == -1) {
//            break;
//        }
//        a.push_back(x);
//    }
//
//    int key;
//    //cout << "Nhap gia tri can xoa: ";
//    cin >> key;
//    removeElements(a, key);
//    //cout << "Mang sau khi xoa cac phan tu: ";
//    for (int i = 0; i < a.size(); i++) {
//        cout << a[i] << " ";
//    }
//    return 0;
//}

// cách 2 ---------------------------------------------------------------
/*
dùng mảng tĩnh
input:
    sô lượng mảng : 5
    nhập mảng A: 1 2 3 4 5
    nhập giá trị cần xóa: 4
output:
    1 2 3 5 
*/ 
#include <iostream>
using namespace std;
const int MAX_N = 100; // Số lượng phần tử tối đa của mảng

// Hàm xóa phần tử x khỏi mảng A có n phần tử
int* removeElements(int A[], int& n, int x) {
    int i, j;
    for (i = 0, j = 0; i < n; i++) {
        if (A[i] != x) {
            A[j] = A[i];
            j++;
        }
    }
    n = j;
    return A;
}

int main() {
    int n, x;
    int A[MAX_N];

    // Nhập số lượng phần tử của mảng
    //cout << "Nhap so luong phan tu cua mang (n <= " << MAX_N << "): ";
    cin >> n;

    // Nhập giá trị các phần tử của mảng
    //cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    // Nhập giá trị x cần xóa
    //cout << "Nhap gia tri x can xoa: ";
    cin >> x;

    // Gọi hàm xóa phần tử x khỏi mảng A
    int* result = removeElements(A, n, x);

    // In kết quả sau khi xóa các phần tử x
    //cout << "Mang sau khi xoa cac phan tu " << x << " la: ";
    for (int i = 0; i < n; i++) {
        std::cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

