#!/bin/bash

#This is a script that will compile, run and store the output of each problem in file: "output"

EXEC= exec;
#(cd (cat $DIRS) && make && ./exec >> output);
#(cd `find -maxdepth 2 -mindepth 2 -not -name README.md` && (make && ./$EXEC >> output));

#(cd `find -maxdepth 2 -mindepth 2 -not -name README.md` && echo $PWD);

find -maxdepth 2 -mindepth 2 -not -name README.md -exec echo $(echo {} &&  cd {} && make && ./$EXEC >> output) \;
