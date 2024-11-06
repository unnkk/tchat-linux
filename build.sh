#!/bin/bash
set -e

printf "Building. . ."
SCRIPT_PATH=$(dirname $0)
BUILD_PATH=$SCRIPT_PATH/build

if [ ! -d "$BUILD_PATH" ]; then
	mkdir $SCRIPT_PATH/build
	cd $BUILD_PATH
	cmake ..
elif [ ! -f "$BUILD_PATH/CMakeCache.txt" ]; then
	cd $BUILD_PATH
	cmake ..
else 
	cd $BUILD_PATH
fi
cmake --build . --config=Release
printf "\n\nThe application is built and located at <script_path>/build/Release\n"
read -p "Press enter to close. . ."
