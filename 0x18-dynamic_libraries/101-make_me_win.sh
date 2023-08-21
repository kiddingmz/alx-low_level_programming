#!/bin/bash
wget -P /tmp https://github.com/kiddingmz/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD=/tmp/libinjection.so
