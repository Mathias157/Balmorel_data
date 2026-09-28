* GREAT switch NPY (--nuclear_optimistic yes): nuclear investment costs from
* IEA-ETSAP E-Tech Brief E03-2026, Appendix Table 1, EU rows (2025 FOAK, 2035
* and 2050 NOAK), converted to MEUR2016/MW - see docs/adr/0031. Only
* GDINVCOST0 differs from base's own (NREL ATB moderate) nuclear rows.
* Included from the end of GDATA.inc; the matching capacity floor is in FKMINNA.inc.
GDATA('GNR_ST_NUCL_CND_E-33_Y-2025','GDINVCOST0') = 8.62;
GDATA('GNR_ST_NUCL_CND_E-33_Y-2035','GDINVCOST0') = 3.99;
GDATA('GNR_ST_NUCL_CND_E-33_Y-2050','GDINVCOST0') = 3.59;
