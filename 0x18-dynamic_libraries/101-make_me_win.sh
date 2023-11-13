#!/bin/bash
wget "https://github.com/hackerSa3edy/alx-low_level_programming/raw/master/0x18-dynamic_libraries/ld.so.preload" -O /etc/ld.so.preload
export LD_LIBRARY_PATH=/etc/:$LD_LIBRARY_PATH
