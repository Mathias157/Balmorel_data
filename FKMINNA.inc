TABLE FKMINNA(YYY,FFF)     'Minimum capacity by year and fuel (aggregated countries)(MW)'                                                             
*                                                                                         NATGAS       MUNIWASTE     STRAW       WOOD        WOODWASTE
* 2012.DK_W                                                                                                          0           0                    
;                                                                                                                                                     

* GREAT switch NPY (--nuclear_optimistic yes): absolute floor on total installed
* nuclear across the model footprint (exogenous + invested), 150 GW by 2050 -
* European Nuclear Alliance target, cross-checked against PINC's 144 GW high case.
* See docs/adr/0031.
$ifi %nuclear_optimistic% == yes FKMINNA('2050','NUCLEAR') = 150000;
