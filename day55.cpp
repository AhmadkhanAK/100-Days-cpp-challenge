#include <iostream>
#include <string>

using namespace std;
void Interchange(int*& a, int*& b) {
        int *temp = a;
        a = b;
        b = temp;
}

void print(int **a, int size) {
        for (int **i = a; i < a + size; i++){
                for (int j = 0; j < size; j++)
                        cout << *(i[0] + j) << ",";
                cout<<endl;
        }
}

int main() {
        int size = 3;
        int ** a = new int *[size];
        for (int i = 0; i < size; i++) {
                *a = new int[size];
                for (int j = 0; j < size; j++) {
                        *(*a + j) =i+ j + 1;
                }
                int index = (i + 1) % size;
                Interchange(*a, a[index]);
        }

        print(a, size);

        for (int i = 0; i < size; i++)
                delete[] a[i];
        delete[] a;
        a =nullptr;
        return 0;
}

