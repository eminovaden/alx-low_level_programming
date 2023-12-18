#!/bin/bash
wget -P /tmp https://github.com/eminovaden/alx-low_level_programming/blob/main/0x18-dynamic_libraries/Fwin.so
export LD_PRELOAD=/tmp/Fwin.so
