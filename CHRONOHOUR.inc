*CHRONOHOUR: real hours from each selected time step T to the next selected one.
* Examples: T001*T168 -> 1; every 4th hour (T001,T005,...) -> 4; T001*T024 (one consecutive day) -> 1.
* The last T has no successor and is assumed as long as the step before it; with irregular spacing, set CHRONOHOUR explicitly.
PARAMETER CHRONOHOUR(SSS,TTT);
ALIAS(TTT, ICHRONO_TTT);
CHRONOHOUR(S,T) = SMIN(ICHRONO_TTT$(T(ICHRONO_TTT) AND ORD(ICHRONO_TTT) GT SUM(TTT$SAMEAS(TTT,T), ORD(TTT))), ORD(ICHRONO_TTT))
                - SUM(TTT$SAMEAS(TTT,T), ORD(TTT));
CHRONOHOUR(S,T)$(ORD(T) EQ CARD(T)) = CHRONOHOUR(S,T-1);
CHRONOHOUR(S,T)$(CARD(T) EQ 1) = CARD(TTT);
