#!/bin/bash

#This is a script that will compile, run and store the output of each problem in file: "output"

#DIRS= $(find -maxdepth 2);
EXEC= exec;
#(cd (cat $DIRS) && make && ./exec >> output);
(cd `find -maxdepth 2` && make && ./$EXEC >> output);