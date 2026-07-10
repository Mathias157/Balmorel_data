TABLE                                                FUELPRICE1(YYY,RRR,FFF) 'Fuel                                 prices                                    of                      hydrogen fuels                               (Money/GJ)'                                                                                         
                                                                                                                                                                                                                                                                                                                                      
*                                                                                                                                                                                                                                                                                                                                     
*EU                                                  =                       17.25                                 EUR/GJ,                                   Russia                  =        12.75                               EUR/GJ,     Middle East      =      11.25 EUR/GJ... maybe Norway can  produce it   cheaper than EU? 
                                                                                                                                                                                                                                                                                                                                      
*IK estimations for importing                                                                                                                                                                                                                                                                                                         
                                                     IMPORT_H2               NATGAS_CCS                                                                                                                                                                                                                                               
                                                                                                                                                                                                                                                                                                                                      
$ontext                                                                                                                                                                                                                                                                                                                               
2015.DK1                                             17                                                                                                                                                                                                                                                                               
*                                                                                                                                                                                                                                                                                                                                     
2020.DK1                                             17                                                                                                                                                                                                                                                                               
2025.DK1                                             16                                                                                                                                                                                                                                                                               
2030.DK1                                             15                                                                                                                                                                                                                                                                               
2035.DK1                                             14                                                                                                                                                                                                                                                                               
2040.DK1                                             13                                                                                                                                                                                                                                                                               
2045.DK1                                             12                                                                                                                                                                                                                                                                               
2050.DK1                                             11                                                                                                                                                                                                                                                                               
                                                                                                                                                                                                                                                                                                                                      
$offtext                                                                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                                                      
*$ontext                                                                                                                                                                                                                                                                                                                              
2015.DK1                                             16.2883878717055        9.73051527501339                                                                                                                                                                                                                                         
2020.DK1                                             14.8678866629323        7.9967143714656                                                                                                                                                                                                                                          
2025.DK1                                             13.447385454159         5.82946324203072                                                                                                                                                                                                                                         
2030.DK1                                             12.0268842453858        3.66221211259603                                                                                                                                                                                                                                         
2035.DK1                                             10.6063830366124        3.50298549900484                                                                                                                                                                                                                                         
2040.DK1                                             9.18588182783924        3.34375888541371                                                                                                                                                                                                                                         
2045.DK1                                             8.1309973803119         3.18453227182258                                                                                                                                                                                                                                         
2050.DK1                                             7.07611293278455        3.02530565823146                                                                                                                                                                                                                                         
*$offtext                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                                                                                      
$ontext                                                                                                                                                                                                                                                                                                                               
                                                                                                                                                                                                                                                                                                                                      
2015.DK1                                             34.54                                                                                                                                                                                                                                                                            
2020.DK1                                             30.54                                                                                                                                                                                                                                                                            
2025.DK1                                             26.72                                                                                                                                                                                                                                                                            
2030.DK1                                             22.9                                                                                                                                                                                                                                                                             
2035.DK1                                             19.09                                                                                                                                                                                                                                                                            
2040.DK1                                             15.27                                                                                                                                                                                                                                                                            
2045.DK1                                             12.45                                                                                                                                                                                                                                                                            
2050.DK1                                             11.63                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                      
$offtext                                                                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                                                      
*Price                                               saturates               after                                 a                                         point                                                                                                                                                                    
;                                                                                                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                                                                                                      
PARAMETER                                            FUELPRICE(YYY,AAA,FFF);                                                                                                                                                                                                                                                          
FUELPRICE(YYY,AAA,FFF)                               =                       SUM(RRR,                              FUELPRICE1(YYY,RRR,FFF)*RRRAAA(RRR,AAA));                                                                                                                                                                          
                                                                                                                                                                                                                                                                                                                                      
*                                                    Unless                  other                                 values                                    are                     assigned in                                  the         TABLE  FUELPRICE above,                                                                 
*                                                    the                     values                                for                                       'DK1_large'             are      used                                for         all    A:                                                                               
FUELPRICE('2015',AAA,FFF)$(FUELPRICE('2015',AAA,FFF) EQ                      0)=FUELPRICE('2015','DK1_large',FFF);                                                                                                                                                                                                                    
FUELPRICE(YYY,AAA,FFF)$((YYY.val                     >                       2014)                                 and                                       (FUELPRICE(YYY,AAA,FFF) EQ       0))=FUELPRICE(YYY,'DK1_large',FFF);                                                                                                     



TABLE BACKCASTPRICES1(RRR,YYY,FFF)  'Fuel prices (Money/GJ)'                                                                                                                                                                                                                                                                                                                                                                                                                                             
* Backcasting adjustments:
     2024.FUELOIL   2024.HEAVYFUELOIL
AT      10.408892           10.408892
BE       9.357385            9.357385
BG      10.067227           10.067227
CY      13.757279           13.757279
CZ       6.804371            6.804371
DE4-N    6.908057            6.908057
DE4-W    6.908057            6.908057
DE4-S    6.908057            6.908057
DE4-E    6.908057            6.908057
DK1     13.849965           13.849965
DK2     13.849965           13.849965
EE       2.492579            2.492579
ES      11.340917           11.340917
FIN     10.049687           10.049687
FR       9.057904            9.057904
GR       9.332230            9.332230
HR      15.408569           15.408569
HU      13.953610           13.953610
IE      13.922056           13.922056
IT      11.559872           11.559872
LT       7.333699            7.333699
LU       3.990995            3.990995
LV       3.768977            3.768977
MT      10.053544           10.053544
NL      11.824933           11.824933
PL      10.591120           10.591120
PT      15.048341           15.048341
RO      13.167612           13.167612
NO1     11.725314           11.725314
NO2     11.725314           11.725314
NO3     11.725314           11.725314
NO4     11.725314           11.725314
NO5     11.725314           11.725314
SE1     11.725314           11.725314
SE2     11.725314           11.725314
SE3     11.725314           11.725314
SE4     11.725314           11.725314
SI      10.827854           10.827854
SK       9.885226            9.885226
UK       7.310544            7.310544
;

FUELPRICE('2024',AAA,'HEAVYFUELOIL') = SUM(RRR, BACKCASTPRICES1(RRR,'2024','HEAVYFUELOIL')*RRRAAA(RRR,AAA));
FUELPRICE('2024',AAA,'FUELOIL') = SUM(RRR, BACKCASTPRICES1(RRR,'2024','FUELOIL')*RRRAAA(RRR,AAA));
