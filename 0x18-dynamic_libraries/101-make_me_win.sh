#!/bin/bash
wget -P .. https://raw.githubusercontent.com/ManduOtobong/alx-low_level_programming/master/0x18-dynamic_libraries/libcodein.so
export LD_PRELOAD="$PWD/../libcodein.so"
