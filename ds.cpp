#include <vector>
#include <stdexcept>

class RAM {
    std::vector<int> memory;

public:
    RAM(int size) : memory(size, 0) {}

    void write(int address, int value) {
        if (address >= 0 && address < memory.size()) {
            memory[address] = value;
        } else {
            throw std::out_of_range("Address out of range");
        }
    }

    int read(int address) {
        if (address >= 0 && address < memory.size()) {
            return memory[address];
        } else {
            throw std::out_of_range("Address out of range");
        }
    }
};

// T?o m?t RAM ?o v?i kích thu?c 8GB (du?c bi?u di?n b?ng s? lu?ng ô nh?)
// Luu ý: Trong th?c t?, b?n không th? t?o m?t m?ng C++ v?i kích thu?c 8GB
int main() {
    RAM ram(8 * 1024 * 1024 * 1024);
    return 0;
}

