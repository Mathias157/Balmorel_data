PARAMETER SSIZE(SSS)  'The number of Seasons that are aggregated into Season S';
SSIZE(S)=52/CARD(S)*168/SUM(T, CHRONOHOUR(S,T));

