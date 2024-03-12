#include <iostream>
#include "bitset.h";

int main() {

    Bitset myBitset;

    myBitset.add(1);
    myBitset.add(5);
    myBitset.add(6);

    std::cout << "Bitset: ";
    myBitset.print();

    std::cout << "isAdded(1): " << myBitset.isAdded(1) << '\n';
    std::cout << "isAdded(2): " << myBitset.isAdded(2) << '\n';

    std::cout << "remove (1) ";
    myBitset.remove(1);
    std::cout << "Bitset: ";
    myBitset.print();
    myBitset.change();
    std::cout << "Bitset after change: ";
    myBitset.print();
    

    system("pause");
    return 0;
}
