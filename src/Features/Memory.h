#pragma once
#include <Windows.h>
#include <vector>
#include <string>


//Internal  derefrence a pointer = read

namespace Memory {
   
    template<typename T>
    T Read(uintptr_t address) {
        if (address == 0) return T();
        return *reinterpret_cast<T*>(address);
    }

  
    template<typename T>
    bool SafeRead(uintptr_t address, T& outValue) {
        if (address == 0) {
            return false;
        }

        __try {
            outValue = *reinterpret_cast<T*>(address);
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            return false;
        }
    }

    template<typename T>
    void Write(uintptr_t address, T value) {
        if (address == 0) return;
        *reinterpret_cast<T*>(address) = value;
    }
}