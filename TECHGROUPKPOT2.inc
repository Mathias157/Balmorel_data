* GREAT switch PVN (--low_pv yes): SOLARPV capacity capped at 50% of a preliminary
* base optimisation's investment. Included from the end of TECHGROUPKPOT.inc.

TABLE TECHGROUPKPOT2(CCCRRRAAA,TECH_GROUP)       'Technology group capacity restriction by geography (MW)'
        SOLARPV
AL      600.5
AT      45319.5
BA      1000.0
BE      27500.5
BG      4500.5
CH      10000.0
CY      1500.5
CZ      12000.5
DE4-E   40182.1
DE4-N   12675.7
DE4-S   76050.4
DE4-W   56542.8
DK1     20428.0
DK2     9309.4
EE      1193.1
ES      96000.5
FIN     4027.7
FR      116719.0
GR      23500.5
HR      1500.5
HU      11500.5
IE      10500.0
IT      125000.0
LT      2851.5
LU      1000.5
LV      1000.5
ME      1000.0
MK      2000.0
MT      205.0
NL      36629.0
NO1     1200.0
NO2     1200.0
NO3     600.0
NO4     120.0
NO5     1200.0
PL      48000.5
PT      14500.0
RO      17500.0
RS      2500.0
SE1     1316.2
SE2     1250.0
SE3     5750.5
SE4     4337.0
SI      6000.5
SK      2500.5
UK      42000.5
;

TECHGROUPKPOT(CCCRRRAAA, 'SOLARPV') = TECHGROUPKPOT2(CCCRRRAAA,'SOLARPV');

* If existing capacities are larger than potential, set potential to 1 MW above existing capacities
TECHGROUPKPOT(RRR,'SOLARPV')$(
    SMAX(YYY, SUM((AAA,GGG)$(RRRAAA(RRR,AAA) AND GDATA(GGG,'GDTECHGROUP') EQ TECH_GROUP_VALUE('SOLARPV')), GKFX(YYY,AAA,GGG)))
    GE TECHGROUPKPOT(RRR,'SOLARPV')
  )
  = SMAX(YYY, SUM((AAA,GGG)$(RRRAAA(RRR,AAA) AND GDATA(GGG,'GDTECHGROUP') EQ TECH_GROUP_VALUE('SOLARPV')), GKFX(YYY,AAA,GGG)))
  + 1;
