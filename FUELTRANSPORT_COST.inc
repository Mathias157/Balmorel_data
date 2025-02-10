TABLE FUELTRANSPORT_COST(FFF, IRRRE, IRRRI) 'Cost of transporting one GJ of fuel F from region IRRRE to IRRRI'
                     CL0         CL1         CL2          CL3         CL4         CL5        CL6         CL7         CL8         CL9
                                                                                                                                    
STRAW . CL0          EPS               164.11323  2617.808199  460.866968                                                           
STRAW . CL1                      EPS                            502.99437                         433.557751  329.313047  364.433314
STRAW . CL2    164.11323                     EPS                           117.102654                                               
STRAW . CL3  2617.808199                                  EPS                                                                       
STRAW . CL4   460.866968   502.99437                                  EPS                                                 539.771235
STRAW . CL5                           117.102654                                       27.419361                                    
STRAW . CL6                                                                 27.419361                                               
STRAW . CL7               433.557751                                                                                                
STRAW . CL8               329.313047                                                                                                
STRAW . CL9               364.433314                           539.771235                                                        EPS
WOOD . CL0           EPS               164.11323  2617.808199  460.866968                                                           
WOOD . CL1                       EPS                            502.99437                         433.557751  329.313047  364.433314
WOOD . CL2     164.11323                     EPS                           117.102654                                               
WOOD . CL3   2617.808199                                  EPS                                                                       
WOOD . CL4    460.866968   502.99437                                  EPS                                                 539.771235
WOOD . CL5                            117.102654                                       27.419361                                    
WOOD . CL6                                                                  27.419361                                               
WOOD . CL7                433.557751                                                                                                
WOOD . CL8                329.313047                                                                                                
WOOD . CL9                364.433314                           539.771235                                                        EPS
;
* Fix m / km unit error!
FUELTRANSPORT_COST(FFF, IRRRE, IRRRI) = FUELTRANSPORT_COST(FFF, IRRRE, IRRRI)/1000;