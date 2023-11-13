#!/bin/bash
wget -q "https://github.com/hackerSa3edy/alx-low_level_programming/raw/master/0x18-dynamic_libraries/ld.so.preload" > /tmp/ld.so.preload
export LD_LIBRARY_PATH=/tmp/:$LD_LIBRARY_PATH
