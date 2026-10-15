*CHRONOHOUR for investment (_INV) and rolling (_R*) runs - copied to data/CHRONOHOUR.inc by the job scripts.
*Each time step spans the whole week evenly (T_inv: 42 steps -> 4 h, T_roll: 168 steps -> 1 h).
PARAMETER CHRONOHOUR(SSS,TTT);
CHRONOHOUR(S,T)=168/card(T);
