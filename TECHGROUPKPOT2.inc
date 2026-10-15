* GREAT switch PVN (--low_pv yes): SOLARPV capacity capped at 50% of a preliminary
* base optimisation's investment. Included from the end of TECHGROUPKPOT.inc.

TABLE TECHGROUPKPOT2(CCCRRRAAA,TECH_GROUP)       'Technology group capacity restriction by geography (MW)'
        SOLARPV
AL      600.5
AT      36919.3
BA      850.2
BE      13750.5
BG      4500.5
CH      9591.1
CY      1500.5
CZ      6000.5
DE4-E   25922.4
DE4-N   8640.9
DE4-S   38025.4
DE4-W   25922.4
DK1     10047.3
DK2     6657.6
EE      1174.0
ES      96000.5
FIN     3674.8
FR      70521.5
GR      18228.2
HR      1500.5
HU      11500.5
IE      2515.6
IT      125000.0
LT      1787.0
LU      1000.5
LV      450.0
ME      1000.0
MK      2000.0
MT      205.0
NL      27586.0
NO1     600.0
NO2     600.0
NO3     120.0
NO5     600.0
PL      20423.3
PT      14500.0
RO      17162.5
RS      2500.0
SE1     1250.0
SE2     1250.0
SE3     2875.5
SE4     2414.3
SI      2974.0
SK      2500.5
UK      21000.5
;

TECHGROUPKPOT(CCCRRRAAA, 'SOLARPV') = TECHGROUPKPOT2(CCCRRRAAA,'SOLARPV');

* If existing capacities are larger than potential, set potential to 1 MW above existing capacities
TECHGROUPKPOT(RRR,'SOLARPV')$(
    SMAX(YYY, SUM((AAA,GGG)$(RRRAAA(RRR,AAA) AND GDATA(GGG,'GDTECHGROUP') EQ TECH_GROUP_VALUE('SOLARPV')), GKFX(YYY,AAA,GGG)))
    GE TECHGROUPKPOT(RRR,'SOLARPV')
  )
  = SMAX(YYY, SUM((AAA,GGG)$(RRRAAA(RRR,AAA) AND GDATA(GGG,'GDTECHGROUP') EQ TECH_GROUP_VALUE('SOLARPV')), GKFX(YYY,AAA,GGG)))
  + 1;
