#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o lib100-operations.so *.o
