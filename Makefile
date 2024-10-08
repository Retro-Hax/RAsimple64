# Project Settings
PROJECT_NAME:= RAsimple64
RELEASE_TYPE:= Release

# Compiler Settings
CC:=				gcc
CC_FLAGS:=
CXX:=				g++
CXX_FLAGS:=

clean:
	rm -rf simple64
	rm -rf simple64-audio-sdl2/build
	rm -rf mupen64plus-core/build
	rm -rf simple64-gui/build
	rm -rf simple64-input-qt/build
	rm -rf simple64-input-raphnetraw/build
	rm -rf parallel-rsp/build
	rm -rf parallel-rdp-standalone/build
	rm -rf discord
	rm -rf vosk
	rm -rf 7z
