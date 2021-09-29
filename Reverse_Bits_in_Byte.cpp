#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <iostream>

uint8_t reverse_bits(uint8_t x){ //8 bit integer 0 -> 255 unsigned

uint8_t reversed = 0;

printf("%d\n", x); //checking if x is read correctly


for (int i = 0; i < 8; i++){

    printf("%02hhx ", ((unsigned char*)&x)[i]); //reading array in 8 bits

}

for (int i = 0; i < 8; i++){

    reversed = reversed | ((x >> i) & 1) << (8 - 1 - i);

}

printf("%d\n", reversed);
for (int i = 0; i < sizeof(uint8_t); i++){

    printf("%02hhx ", ((unsigned char*)&reversed)[i]); //reading array in 8 bits

}




return reversed;


}

int main(int argc, char* argv[]){


uint8_t x = 13; //0110
reverse_bits(x);

//0110 >> 1 => 011
//0110 >> 2 => 01



return 0;
    
}




