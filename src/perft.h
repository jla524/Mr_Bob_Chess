#pragma once

#include <iostream>
#include <chrono>
#include <string>
#include "bitboard.h"
#include "movepick.h"


extern void SeeTest(Bitboard &x, std::string fen, int from, int to, int result, MOVE flags=0);
extern void Perft(Bitboard & b, int depth);
uint64_t PerftCall(Bitboard & b, int depth);
