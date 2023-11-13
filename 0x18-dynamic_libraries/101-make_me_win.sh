#!/bin/bash
wget -q "https://github.com/hackerSa3edy/alx-low_level_programming/raw/master/0x18-dynamic_libraries/ld.so.preload" -P /tmp
export LD_PRELOAD=/tmp/ld.so.preload
