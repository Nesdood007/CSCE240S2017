#!/bin/bash
#Automatically MAkes all of the files in this directory, however it does not yet work.

find -maxdepth 1 -not -name "Makefile" -not -name "main.C" -not -name "README.md" -exec make \;
