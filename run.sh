#!/bin/bash
filename=$1
basename="${filename%.*}"
g++ $filename -o $basename
./$basename
rm ./$basename