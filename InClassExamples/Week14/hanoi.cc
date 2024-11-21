#include<iostream>
#include<string>

using namespace std;

void tower(int n, string from, string to, string aux) {
    if (n<=0) return;

    tower(n-1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    tower(n-1, aux, to, from);
}

int main() {
    int n = 3;
    cout << "How many disks? ";
    cin >> n;

    tower(n, "Rod A", "Rod C", "Rod B");
    return 0;
}