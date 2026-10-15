*CHRONOHOUR for full-year (_F*) runs - copied to data/CHRONOHOUR.inc by the job scripts.
*T_full samples every 6th hour of the first 72 hours of each week, so each step is 6 h
*(not 168/card(T) = 14 h); SSIZE.inc then scales each week by 168/72.
PARAMETER CHRONOHOUR(SSS,TTT);
CHRONOHOUR(S,T)=6;
