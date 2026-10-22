*SSIZE: factor that scales the storage drift over one simulated season (sum of CHRONOHOUR hours) up to the time until the next simulated season.
* Equals the number of weeks represented only if a simulated season spans a full week (sum of CHRONOHOUR = 168).
* Examples: 52 S, every 4th hour -> 1; 4 S, every 4th hour -> 13; 52 S, T001*T024 -> 7; 4 S, T001*T024 -> 91.
PARAMETER SSIZE(SSS)  'Real time between consecutive simulated seasons divided by the simulated time in season S';
* Each season's share of the year follows WEIGHT_S, which is unequal when the investment run has extreme weeks (docs/adr/0068).
SSIZE(S)=52*WEIGHT_S(S)/SUM(SSS$S(SSS), WEIGHT_S(SSS))*168/SUM(T, CHRONOHOUR(S,T));

