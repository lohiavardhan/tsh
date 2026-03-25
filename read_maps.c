#include <stdio.h>

int main(){
    unsigned long address = 0x746ffe629d90;
    unsigned long value = *((unsigned long *)address);
    printf("Value = 0x%lx\n", value);
    return 0;
}