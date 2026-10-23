SET S(SSS)  'Seasons in the simulation'

/
* 7 representative weeks: S01 (EV year edges, docs/adr/0048) and S06 (2012 cold-spell heat peak, docs/adr/0055) fixed,
* the other five chosen to represent wind, solar, demand, heat and inflow of the year (docs/adr/0062, docs/adr/0081).
* Plus S04, the 2012 dunkelflaute, as an extreme week (docs/adr/0068).
S01 , S04 , S06 , S16 , S25 , S31 , S36 , S44
/;

* Extreme weeks stand for one week each; WEIGHT_S.inc spreads the rest of the year over the
* representative weeks (docs/adr/0068)
SET S_EXTREME(SSS)  'Extreme weeks in the investment run, weighted as one week'
/ S04 /;
