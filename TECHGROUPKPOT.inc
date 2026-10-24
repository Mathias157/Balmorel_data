TABLE TECHGROUPKPOT(CCCRRRAAA,TECH_GROUP)       'Technology group capacity restriction by geography (MW)'                         
                                                                                                          RESERVOIR_PMP           
DK1                                                                                                       eps                     
DK2                                                                                                       eps                     
FIN                                                                                                       eps                     
DE4-E                                                                                                     19320                   
DE4-N                                                                                                     952.8                   
DE4-S                                                                                                     17304                   
DE4-W                                                                                                     9184                    
NL                                                                                                        eps                     
NO1                                                                                                       3729                    
NO2                                                                                                       11317                   
NO3                                                                                                       4583                    
NO4                                                                                                       5257                    
NO5                                                                                                       8116                    
SE1                                                                                                       eps                     
SE2                                                                                                       eps                     
SE3                                                                                                       eps                     
SE4                                                                                                       eps                     
UK                                                                                                        26884                   
EE                                                                                                        eps                     
LV                                                                                                        eps                     
LT                                                                                                        9000                    
PL                                                                                                        16638                   
FR                                                                                                        54000                   
BE                                                                                                        11772                   
                                                                                                                                  
                                                                                                                                  
IT                                                                                                        9580.64516129032        
CH                                                                                                        9870.96774193548        
AT                                                                                                        9870.96774193548        
CZ                                                                                                        1172                    
ES                                                                                                        35032.2580645161        
PT                                                                                                        2952                    
SK                                                                                                        2952                    
HU                                                                                                        2952                    
SI                                                                                                        2952                    
HR                                                                                                        2952                    
RO                                                                                                        2952                    
BG                                                                                                        2952                    
GR                                                                                                        2952                    
IE                                                                                                        2952                    
LU                                                                                                        2952                    
                                                                                                                                  
                                                                                                                                  
*National potentials (not activated by default)                                                                                   
+                                                                                                         WINDTURBINE_ONSHORE     
$ontext                                                                                                                           
NORWAY                                                                                                    14000                   
DENMARK                                                                                                   6200                    
FINLAND                                                                                                   15000                   
GERMANY                                                                                                   98700                   
NETHERLANDS                                                                                               10300                   
SWEDEN                                                                                                    35000                   
UNITED_KINGDOM                                                                                            38400                   
ESTONIA                                                                                                   15800                   
LATVIA                                                                                                    23300                   
LITHUANIA                                                                                                 21400                   
POLAND                                                                                                    10426                   
BELGIUM                                                                                                   6719                    
FRANCE                                                                                                    101200                  
                                                                                                                                  
DE4-S                                                                                                     7444                    
$offtext                                                                                                                          
;                                                                                                                                 
$ifi not %limited_individual_heatpump% == yes $goto unlimited_individual_heatpumps
TECHGROUPKPOT('AL','HEATPUMP')=563.9;
TECHGROUPKPOT('AT','HEATPUMP')=10234.5;
TECHGROUPKPOT('BA','HEATPUMP')=1317.9;
TECHGROUPKPOT('BE','HEATPUMP')=14317.6;
TECHGROUPKPOT('BG','HEATPUMP')=3237.4;
TECHGROUPKPOT('CH','HEATPUMP')=9908.4;
TECHGROUPKPOT('CY','HEATPUMP')=383.0;
TECHGROUPKPOT('CZ','HEATPUMP')=11480.7;
TECHGROUPKPOT('DE4-E','HEATPUMP')=14161.4;
TECHGROUPKPOT('DE4-N','HEATPUMP')=3889.8;
TECHGROUPKPOT('DE4-S','HEATPUMP')=38823.0;
TECHGROUPKPOT('DE4-W','HEATPUMP')=40816.3;
TECHGROUPKPOT('DK1','HEATPUMP')=1770.0;
TECHGROUPKPOT('DK2','HEATPUMP')=1223.3;
TECHGROUPKPOT('EE','HEATPUMP')=933.8;
TECHGROUPKPOT('ES','HEATPUMP')=20132.8;
TECHGROUPKPOT('FIN','HEATPUMP')=4734.5;
TECHGROUPKPOT('FR','HEATPUMP')=60670.6;
TECHGROUPKPOT('GR','HEATPUMP')=5418.2;
TECHGROUPKPOT('HR','HEATPUMP')=3910.3;
TECHGROUPKPOT('HU','HEATPUMP')=12285.9;
TECHGROUPKPOT('IE','HEATPUMP')=4423.2;
TECHGROUPKPOT('IT','HEATPUMP')=59482.8;
TECHGROUPKPOT('LT','HEATPUMP')=1244.1;
TECHGROUPKPOT('LU','HEATPUMP')=1336.4;
TECHGROUPKPOT('LV','HEATPUMP')=1022.7;
TECHGROUPKPOT('ME','HEATPUMP')=179.4;
TECHGROUPKPOT('MK','HEATPUMP')=423.1;
TECHGROUPKPOT('MT','HEATPUMP')=101.0;
TECHGROUPKPOT('NL','HEATPUMP')=15577.9;
TECHGROUPKPOT('NO1','HEATPUMP')=995.6;
TECHGROUPKPOT('NO2','HEATPUMP')=537.3;
TECHGROUPKPOT('NO3','HEATPUMP')=323.8;
TECHGROUPKPOT('NO4','HEATPUMP')=251.7;
TECHGROUPKPOT('NO5','HEATPUMP')=208.0;
TECHGROUPKPOT('PL','HEATPUMP')=21898.2;
TECHGROUPKPOT('PT','HEATPUMP')=2667.5;
TECHGROUPKPOT('RO','HEATPUMP')=12494.1;
TECHGROUPKPOT('RS','HEATPUMP')=2770.1;
TECHGROUPKPOT('SE1','HEATPUMP')=163.2;
TECHGROUPKPOT('SE2','HEATPUMP')=329.0;
TECHGROUPKPOT('SE3','HEATPUMP')=2409.8;
TECHGROUPKPOT('SE4','HEATPUMP')=757.9;
TECHGROUPKPOT('SI','HEATPUMP')=1808.8;
TECHGROUPKPOT('SK','HEATPUMP')=4086.4;
TECHGROUPKPOT('UK','HEATPUMP')=50244.3;
$label unlimited_individual_heatpumps

* low pit thermal storage potential
$ifi not %low_pit_storage% == yes $goto unlimited_pit_storage
TECHGROUPKPOT('AL','PIT')=EPS;
TECHGROUPKPOT('AT','PIT')=68636.0;
TECHGROUPKPOT('BA','PIT')=EPS;
TECHGROUPKPOT('BE','PIT')=18081.7;
TECHGROUPKPOT('BG','PIT')=EPS;
TECHGROUPKPOT('CH','PIT')=1785.9;
TECHGROUPKPOT('CY','PIT')=EPS;
TECHGROUPKPOT('CZ','PIT')=EPS;
TECHGROUPKPOT('DE4-E','PIT')=4642.2;
TECHGROUPKPOT('DE4-N','PIT')=3327.7;
TECHGROUPKPOT('DE4-S','PIT')=EPS;
TECHGROUPKPOT('DE4-W','PIT')=8111.2;
TECHGROUPKPOT('DK1','PIT')=104781.8;
TECHGROUPKPOT('DK2','PIT')=12090.0;
TECHGROUPKPOT('EE','PIT')=12980.8;
TECHGROUPKPOT('ES','PIT')=EPS;
TECHGROUPKPOT('FIN','PIT')=21600.0;
TECHGROUPKPOT('FR','PIT')=280507.6;
TECHGROUPKPOT('GR','PIT')=3703.1;
TECHGROUPKPOT('HR','PIT')=1127.6;
TECHGROUPKPOT('HU','PIT')=6067.1;
TECHGROUPKPOT('IE','PIT')=EPS;
TECHGROUPKPOT('IT','PIT')=224960.5;
TECHGROUPKPOT('LT','PIT')=20966.6;
TECHGROUPKPOT('LU','PIT')=EPS;
TECHGROUPKPOT('LV','PIT')=4475.8;
TECHGROUPKPOT('ME','PIT')=EPS;
TECHGROUPKPOT('MK','PIT')=EPS;
TECHGROUPKPOT('MT','PIT')=EPS;
TECHGROUPKPOT('NL','PIT')=45373.9;
TECHGROUPKPOT('NO1','PIT')=6794.1;
TECHGROUPKPOT('NO2','PIT')=1608.1;
TECHGROUPKPOT('NO3','PIT')=6759.6;
TECHGROUPKPOT('NO4','PIT')=6209.1;
TECHGROUPKPOT('NO5','PIT')=2191.7;
TECHGROUPKPOT('PL','PIT')=EPS;
TECHGROUPKPOT('PT','PIT')=428.2;
TECHGROUPKPOT('RO','PIT')=8883.8;
TECHGROUPKPOT('RS','PIT')=642.4;
TECHGROUPKPOT('SE1','PIT')=14401.4;
TECHGROUPKPOT('SE2','PIT')=9303.7;
TECHGROUPKPOT('SE3','PIT')=12046.7;
TECHGROUPKPOT('SE4','PIT')=6658.3;
TECHGROUPKPOT('SI','PIT')=EPS;
TECHGROUPKPOT('SK','PIT')=EPS;
TECHGROUPKPOT('UK','PIT')=84885.8;
$label unlimited_pit_storage

* low salt-cavern storage potential
$ifi not %low_saltcavern% == yes $goto unlimited_saltcavern
TECHGROUPKPOT('AL','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('AT','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('BA','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('BE','H2_SALTCAVERN_STORAGE')=196076.1;
TECHGROUPKPOT('BG','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('CH','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('CY','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('CZ','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('DE4-E','H2_SALTCAVERN_STORAGE')=1848687.2;
TECHGROUPKPOT('DE4-N','H2_SALTCAVERN_STORAGE')=210110.6;
TECHGROUPKPOT('DE4-S','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('DE4-W','H2_SALTCAVERN_STORAGE')=568794.4;
TECHGROUPKPOT('DK1','H2_SALTCAVERN_STORAGE')=816998.9;
TECHGROUPKPOT('DK2','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('EE','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('ES','H2_SALTCAVERN_STORAGE')=3290780.7;
TECHGROUPKPOT('FIN','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('FR','H2_SALTCAVERN_STORAGE')=1876560.6;
TECHGROUPKPOT('GR','H2_SALTCAVERN_STORAGE')=734787.5;
TECHGROUPKPOT('HR','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('HU','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('IE','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('IT','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('LT','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('LU','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('LV','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('ME','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('MK','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('MT','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('NL','H2_SALTCAVERN_STORAGE')=270547.7;
TECHGROUPKPOT('NO1','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('NO2','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('NO3','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('NO4','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('NO5','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('PL','H2_SALTCAVERN_STORAGE')=1244137.7;
TECHGROUPKPOT('PT','H2_SALTCAVERN_STORAGE')=336016.3;
TECHGROUPKPOT('RO','H2_SALTCAVERN_STORAGE')=582246.3;
TECHGROUPKPOT('RS','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SE1','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SE2','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SE3','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SE4','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SI','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SK','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('UK','H2_SALTCAVERN_STORAGE')=658568.9;
$label unlimited_saltcavern


* GREAT switch PVN - see TECHGROUPKPOT2.inc
$ifi %low_pv% == yes $include '../../base/data/TECHGROUPKPOT2.inc';
