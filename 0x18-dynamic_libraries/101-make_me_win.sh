#!/bin/bash
wget -P .. https://raw.githubusercontent.com/elameen37/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gigalib.so:
export LD_PRELOAD="$PWD/../gigalib.so"
