* Weather year 2000
PARAMETER WNDFLH(AAA) 'Full load hours for wind power (hours)'
/
AL_A . 1901.99
AT_A . 1766.64
BA_A . 1735.82
BE_A . 2672.91
BG_A . 1850.79
CH_A . 1959.11
CZ_A . 2062.50
DE_A . 1997.36
DK_A . 2217.77
EE_A . 2271.64
ES_A . 2136.72
FI_A . 2330.47
FR_A . 1954.19
GR_A . 1691.38
HR_A . 2005.49
HU_A . 2013.93
IE_A . 2756.31
IT_A . 1713.21
LT_A . 2133.96
LU_A . 1999.50
LV_A . 2272.99
ME_A . 1703.13
MK_A . 1974.84
NL_A . 2725.50
NO_A . 2562.92
PL_A . 2055.66
PT_A . 2333.42
RO_A . 2124.38
RS_A . 1751.36
SE_A . 2626.46
SI_A . 1034.49
SK_A . 1775.92
UK_A . 2049.10
/;
$onmulti
$if     EXIST '../data/WNDFLH_OFF.inc' $INCLUDE         '../data/WNDFLH_OFF.inc';
$if not EXIST '../data/WNDFLH_OFF.inc' $INCLUDE '../../base/data/WNDFLH_OFF.inc';
$offmulti