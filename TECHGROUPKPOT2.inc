* GREAT switch PVN (--low_pv yes): SOLARPV capacity capped at 50% of a preliminary
* base optimisation's investment. Included from the end of TECHGROUPKPOT.inc.

TABLE TECHGROUPKPOT2(CCCRRRAAA,TECH_GROUP)       'Technology group capacity restriction by geography (MW)'
        SOLARPV
AL      601
AT      31632
BA      601
BE      14417
BG      4501
CH      10000
CY      1500
CZ      6001
DE4-E   24572
DE4-N   2536
DE4-S   38025
DE4-W   6166
DK1     7643
DK2     6036
EE      571
ES      96001
FIN     3360
FR      79962
GR      22305
HR      1500
HU      11501
IE      2506
IT      125000
LT      853
LU      688
LV      222
ME      1000
MK      2000
MT      205
NL      29733
NO1     600
NO2     600
NO3     120
NO5     600
PL      20020
PT      14500
RO      17500
RS      2500
SE1     625
SE2     625
SE3     2876
SE4     2116
SI      3001
SK      2501
UK      16279
;

TECHGROUPKPOT(CCCRRRAAA, 'SOLARPV') = TECHGROUPKPOT2(CCCRRRAAA,'SOLARPV');

* If existing capacities are larger than potential, set potential to 1 MW above existing capacities
TECHGROUPKPOT(RRR,'SOLARPV')$(
    SMAX(YYY, SUM((AAA,GGG)$(RRRAAA(RRR,AAA) AND GDATA(GGG,'GDTECHGROUP') EQ TECH_GROUP_VALUE('SOLARPV')), GKFX(YYY,AAA,GGG)))
    GE TECHGROUPKPOT(RRR,'SOLARPV')
  )
  = SMAX(YYY, SUM((AAA,GGG)$(RRRAAA(RRR,AAA) AND GDATA(GGG,'GDTECHGROUP') EQ TECH_GROUP_VALUE('SOLARPV')), GKFX(YYY,AAA,GGG)))
  + 1;
