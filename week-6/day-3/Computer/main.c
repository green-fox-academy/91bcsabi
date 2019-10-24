#include <stdio.h>
#include <stdint.h>
#include <string.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

struct Notebook {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

int main() {
    {
        struct Computer mac;
        mac.cpu_speed_GHz = 3.5;
        mac.ram_size_GB = 8;
        mac.bits = 2;

        struct Notebook notebook;
        notebook.cpu_speed_GHz = 4.0;
        notebook.ram_size_GB = 6;
        notebook.bits = 3;

        printf("%f, %d, %d\n", mac.cpu_speed_GHz, mac.ram_size_GB, mac.bits);
        printf("%f, %d, %d", notebook.cpu_speed_GHz,notebook.ram_size_GB, notebook.bits);

        return 0;
    }
}