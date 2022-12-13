#!/bin/bash
wget -q -O /tmp/gigalib.so "https://raw.githubusercontent.com/elameen37/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gigalib.so"
export LD_PRELOAD=/tmp/gigalib.so