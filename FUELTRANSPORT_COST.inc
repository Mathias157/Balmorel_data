TABLE FUELTRANSPORT_COST(FFF, IRRRE, IRRRI) 'Cost of transporting one GJ of fuel F from region IRRRE to IRRRI'
                    CL0         CL1
                                   
STRAW . CL0              622.912232
STRAW . CL1  622.912232            
WOOD . CL0               622.912232
WOOD . CL1   622.912232            
;
* Fix m / km unit error!
FUELTRANSPORT_COST(FFF, IRRRE, IRRRI) = FUELTRANSPORT_COST(FFF, IRRRE, IRRRI)/1000;