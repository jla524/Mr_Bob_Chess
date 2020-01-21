

// -----------------------Pawn attack tables----------------------------------//
const int WHITE_PAWN_TABLE[64] = {  0,   0,   0,   0,   0,   0,   0,   0,
                                   50,  50,  50,  50,  50,  50,  50,  50,
                                   10,  15,  25,  30,  30,  25,  15,  10,
                                    0,   0,  22,  25,  25,  22,   0,   0,
                                    0,   0,  15,  20,  20,   8,   0,   0,
                                    5,  -5, -15, -10, -15, -10, -10,   5,
                                    7,  10,   5, -20, -20,  15,  10,   7,
                                    0,   0,   0,   0,   0,   0,   0,   0};


const int BLACK_PAWN_TABLE[64] = {  0,   0,   0,   0,   0,   0,   0,   0,
                                    7,  10,   5, -20, -20,  15,  10,   7,
                                    5,  -5,  -5,   5,   5,   0,   0,   5,
                                    0,   0,   5,  10,  10,   0,   0,   0,
                                    0,   0,  15,  20,  20,  15,   0,   0,
                                   10,  15,  25,  30,  30,  25,  15,  10,
                                   50,  50,  50,  50,  50,  50,  50,  50,
                                    0,   0,   0,   0,   0,   0,   0,   0};


const int WHITE_PAWN_TABLE_ENDGAME[64] = {  0,   0,   0,   0,   0,   0,   0,   0,
                                           50,  50,  50,  50,  50,  50,  50,  50,
                                           30,  30,  30,  30,  30,  30,  30,  30,
                                           20,  20,  20,  20,  20,  20,  20,  20,
                                           10,  10,  10,  10,  10,  10,  10,  10,
                                            5,   5,   5,   5,   5,   5,   5,   5,
                                           -5,  -5,  -5,  -5,  -5,  -5,  -5,  -5,
                                            0,   0,   0,   0,   0,   0,   0,   0};


const int BLACK_PAWN_TABLE_ENDGAME[64] = {  0,   0,   0,   0,   0,   0,   0,   0,
                                           -5,  -5,  -5,  -5,  -5,  -5,  -5,  -5,
                                            5,   5,   5,   5,   5,   5,   5,   5,
                                           10,  10,  10,  10,  10,  10,  10,  10,
                                           20,  20,  20,  20,  20,  20,  20,  20,
                                           30,  30,  30,  30,  30,  30,  30,  30,
                                           50,  50,  50,  50,  50,  50,  50,  50,
                                            0,   0,   0,   0,   0,   0,   0,   0};
// ---------------------------------------------------------------------------//







// -----------------------Knight attack tables----------------------------------//
const int WHITE_KNIGHT_TABLE[64] = {-50, -40, -30, -30, -30, -30, -40, -50,
                                    -40, -20,   0,   0,   0,   0, -20, -40,
                                    -30,   0,   0,  15,  15,   0,   0, -30,
                                    -30,   0,  15,  25,  25,  15,   0, -30,
                                    -30,   0,  15,  25,  25,  15,   0, -30,
                                    -30,   0,   0,  15,  15,   0,   0, -30,
                                    -40, -20,   0,   0,   0,   0, -20, -40,
                                    -50, -40, -30, -30, -30, -30, -40, -50};


const int BLACK_KNIGHT_TABLE[64] = {-50, -40, -30, -30, -30, -30, -40, -50,
                                    -40, -20,   0,   0,   0,   0, -20, -40,
                                    -30,   0,   0,  15,  15,   0,   0, -30,
                                    -30,   0,  15,  25,  25,  15,   0, -30,
                                    -30,   0,  15,  25,  25,  15,   0, -30,
                                    -30,   0,   0,  15,  15,   0,   0, -30,
                                    -40, -20,   0,   0,   0,   0, -20, -40,
                                    -50, -40, -30, -30, -30, -30, -40, -50};
// ---------------------------------------------------------------------------//







// -----------------------Bishop attack tables----------------------------------//
const int WHITE_BISHOP_TABLE[64] = {-20, -10, -10, -10, -10, -10, -10, -20,
                                    -10,   0,   0,   0,   0,   0,   0, -10,
                                    -10,   0,   5,  10,  10,   5,   0, -10,
                                    -10,   5,   5,  10,  10,  10,   5, -10,
                                    -10,   5,  10,  10,  10,  10,   5, -10,
                                    -10,  10,  10,  10,  10,  10,  10, -10,
                                    -10,   7,   0,   0,   0,   0,   7, -10,
                                    -20, -10, -10, -10, -10, -10, -10, -20};


const int BLACK_BISHOP_TABLE[64] = {-20, -10, -10, -10, -10, -10, -10, -20,
                                    -10,   7,   0,   0,   0,   0,   7, -10,
                                    -10,  10,  10,  10,  10,  10,  10, -10,
                                    -10,   5,  10,  10,  10,  10,   5, -10,
                                    -10,   5,   5,  10,  10,   5,   5, -10,
                                    -10,   0,   5,  10,  10,   5,   0, -10,
                                    -10,   0,   0,   0,   0,   0,   0, -10,
                                    -20, -10, -10, -10, -10, -10, -10, -20};
// ---------------------------------------------------------------------------//






// const int BLACK_PAWN_TABLE[64] = {  0,   0,   0,   0,   0,   0,   0,   0,
//                                     0,   0,   0,   0,   0,   0,   0,   0,
//                                     0,   0,   0,   0,   0,   0,   0,   0,
//                                     0,   0,   0,   0,   0,   0,   0,   0,
//                                     0,   0,   0,   0,   0,   0,   0,   0,
//                                     0,   0,   0,   0,   0,   0,   0,   0,
//                                     0,   0,   0,   0,   0,   0,   0,   0,
//                                     0,   0,   0,   0,   0,   0,   0,   0};
