#!/bin/bash
wget -P /tmp https://github.com/Abstargo/alx-low_level_programming/blob/e40fcf93fb8825a94e7dcba5115f37c11ab4209b/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so