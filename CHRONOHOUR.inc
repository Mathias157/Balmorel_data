*CHRONOHOUR: real hours from each selected time step T to the next selected one.
* Examples: T001*T168 -> 1; every 4th hour (T001,T005,...) -> 4; T001*T024 (one consecutive day) -> 1.
* The last T has no successor and is assumed as long as the step before it; the gap to the next season is bridged by SSIZE.
* A gap inside the season is treated the same way: a step longer than both its neighbours ends a block of time steps,
* so it is as long as the step before it, and the selected blocks are concatenated (SSIZE scales them up to the week).
* Example: T001,T007,...,T043,T133,T139,T145,T151 (Mon-Tue and a weekend day, every 6th hour) -> 6 everywhere, not 90 at T043.
* Limitation: a single long step between two shorter ones (e.g. one 3 h step between 1 h steps) is read as such a block end;
* set CHRONOHOUR explicitly for that kind of irregular spacing.
PARAMETER CHRONOHOUR(SSS,TTT), ICHRONO_SPACING(SSS,TTT);
ALIAS(TTT, ICHRONO_TTT);
CHRONOHOUR(S,T) = SMIN(ICHRONO_TTT$(T(ICHRONO_TTT) AND ORD(ICHRONO_TTT) GT SUM(TTT$SAMEAS(TTT,T), ORD(TTT))), ORD(ICHRONO_TTT))
                - SUM(TTT$SAMEAS(TTT,T), ORD(TTT));
CHRONOHOUR(S,T)$(ORD(T) EQ CARD(T)) = CHRONOHOUR(S,T-1);
ICHRONO_SPACING(S,T) = CHRONOHOUR(S,T);
CHRONOHOUR(S,T)$(ORD(T) GT 1 AND ORD(T) LT CARD(T) AND ICHRONO_SPACING(S,T) GT ICHRONO_SPACING(S,T-1) AND ICHRONO_SPACING(S,T) GT ICHRONO_SPACING(S,T+1)) = ICHRONO_SPACING(S,T-1);
CHRONOHOUR(S,T)$(ORD(T) EQ CARD(T)) = CHRONOHOUR(S,T-1);
CHRONOHOUR(S,T)$(CARD(T) EQ 1) = CARD(TTT);
