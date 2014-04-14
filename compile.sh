#!/bin/sh

g++ src/*.cpp `pkg-config opencv --cflags --libs`
