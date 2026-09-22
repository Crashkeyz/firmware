#ifndef BRUCE_SRC_CORE_I2C_FINDER_H
#define BRUCE_SRC_CORE_I2C_FINDER_H

#include <globals.h>

void find_i2c_addresses();
uint8_t find_first_i2c_address();
bool check_i2c_address(uint8_t i2c_address);

#endif // BRUCE_SRC_CORE_I2C_FINDER_H
