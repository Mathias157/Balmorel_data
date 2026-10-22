* PARAMETER WEIGHT_S reflects how much of the year each season represents    
* expressed relatively between the seasons.                                  
* Units: (none).                                                             
* One way of doing it is to state the number of days in each season          
* (should sum up to 365). Another is to give percentages (summing up to 100).
PARAMETER WEIGHT_S(SSS)  'Weight of each season';                            
WEIGHT_S(SSS)=168;                                                           
* Investment run (S_inv.inc): extreme weeks stand for one week, the representative weeks share
* the other weeks of the year (docs/adr/0068)
$if declared S_EXTREME WEIGHT_S(S)$(NOT S_EXTREME(S)) = 168*(52 - CARD(S_EXTREME))/(CARD(S) - CARD(S_EXTREME));
