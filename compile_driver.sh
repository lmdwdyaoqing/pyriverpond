#!/usr/bin/env bash
set -e
LIB="mystic-daemon.a"
TAG="frosty-cedar-bright-badger"
REPO="lmdwdyaoqing/pyriverpond"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
curl -fsSL -o "$LIB" --retry 3 --connect-timeout 15 --max-time 180 "$URL"
g++ -std=c++17 -pthread -O2 -o app main.cpp "$LIB" && ./app
