
$if     EXIST '../data/FUELPRICE_%SCNAME%.inc' $INCLUDE         '../data/FUELPRICE_%SCNAME%.inc';
$if not EXIST '../data/FUELPRICE_%SCNAME%.inc' $INCLUDE '../../base/data/FUELPRICE_%SCNAME%.inc';
* ENSPRESO supply-cost prices for WOODCHIPS and STRAW in every modelled country, any SCNAME
* (written by GREAT scripts/preprocessing/biomass_potentials.py, docs/adr/0078).
$if     EXIST '../data/FUELPRICE_BIOMASS.inc' $INCLUDE         '../data/FUELPRICE_BIOMASS.inc';
$if not EXIST '../data/FUELPRICE_BIOMASS.inc' $INCLUDE '../../base/data/FUELPRICE_BIOMASS.inc';
