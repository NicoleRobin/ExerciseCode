#!/bin/bash

filelist=$(ls *.tar.gz)

for file in ${filelist}
do
    tar xzvf ${file}
done
