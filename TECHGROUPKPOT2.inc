* GREAT switch PVN (--low_pv yes): SOLARPV capacity capped at 50% of a preliminary
* base optimisation's investment. Included from the end of TECHGROUPKPOT.inc.

TABLE TECHGROUPKPOT2(CCCRRRAAA,TECH_GROUP)       'Technology group capacity restriction by geography (MW)'
        SOLARPV
AL      600
AT      51000
BA      1000
BE      27500
BG      4500
CH      10000
CY      1500
CZ      12000
DE4-E   50549
DE4-N   24213
DE4-S   76050
DE4-W   58119
DK1     20094
DK2     11926
EE      1315
ES      96000
FIN     7160
FR      125000
GR      23500
HR      1500
HU      11500
IE      10220
IT      125000
LT      1605
LU      1000
LV      571
ME      1000
MK      2000
MT      205
NL      69000
NO1     1200
NO2     1200
NO3     700
NO4     150
NO5     1150
PL      43418
PT      14500
RO      17500
RS      2500
SE1     2993
SE2     3833
SE3     5750
SE4     5750
SI      6000
SK      2500
UK      42000
;

TECHGROUPKPOT(CCCRRRAAA, 'SOLARPV') = TECHGROUPKPOT2(CCCRRRAAA,'SOLARPV');
