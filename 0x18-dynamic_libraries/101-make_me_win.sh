#!/bin/bash
wget -P /tmp/ https://github.com/devrsk/alx-low_level_programming/blob/master/0x18-dynamic_libraries/lib101-makemewin.so
export LD_PRELOAD=/tmp/lib101-makemewin.so
