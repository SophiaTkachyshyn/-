#pragma once
#include <iostream>

const int BITS_PER_INT = 32;
const int ARRAY_SIZE = 8;

class Bitset
{
private:
    unsigned int bitsetArr[ARRAY_SIZE];
public:
    Bitset() {
        for (int i = 0; i < ARRAY_SIZE; ++i) {
            bitsetArr[i] = 0;
        }
    }


    void add(int index) {
        bitsetArr[index / BITS_PER_INT] |= 1u << (index % BITS_PER_INT);
    }


    void print() const {
        for (int i = ARRAY_SIZE - 1; i >= 0; --i) {
            std::cout << ((bitsetArr[0] & (1u << i)) ? '1' : '0');
        }
        std::cout << std::endl;
    }

    bool isAdded(int index) const {
        return (bitsetArr[index / BITS_PER_INT] & (1u << (index % BITS_PER_INT))) != 0;
    }

    void remove(int index) {
        bitsetArr[index / BITS_PER_INT] &= ~(1u << (index % BITS_PER_INT));
    }


    void change() {
        for (int i = 0; i < ARRAY_SIZE; ++i) {
            bitsetArr[i] = ~bitsetArr[i];
        }
    }

};
