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
TECHGROUPKPOT('AL','HEATPUMP')=381.8;
TECHGROUPKPOT('AT','HEATPUMP')=8770.1;
TECHGROUPKPOT('BA','HEATPUMP')=975.5;
TECHGROUPKPOT('BE','HEATPUMP')=11265.9;
TECHGROUPKPOT('BG','HEATPUMP')=2474.3;
TECHGROUPKPOT('CH','HEATPUMP')=7980.3;
TECHGROUPKPOT('CY','HEATPUMP')=306.4;
TECHGROUPKPOT('CZ','HEATPUMP')=9963.4;
TECHGROUPKPOT('DE4-E','HEATPUMP')=12338.6;
TECHGROUPKPOT('DE4-N','HEATPUMP')=3551.5;
TECHGROUPKPOT('DE4-S','HEATPUMP')=33234.6;
TECHGROUPKPOT('DE4-W','HEATPUMP')=33953.3;
TECHGROUPKPOT('DK1','HEATPUMP')=1489.3;
TECHGROUPKPOT('DK2','HEATPUMP')=1105.6;
TECHGROUPKPOT('EE','HEATPUMP')=825.5;
TECHGROUPKPOT('ES','HEATPUMP')=18754.1;
TECHGROUPKPOT('FIN','HEATPUMP')=4734.5;
TECHGROUPKPOT('FR','HEATPUMP')=49696.3;
TECHGROUPKPOT('GR','HEATPUMP')=4495.1;
TECHGROUPKPOT('HR','HEATPUMP')=2764.5;
TECHGROUPKPOT('HU','HEATPUMP')=9107.1;
TECHGROUPKPOT('IE','HEATPUMP')=3522.9;
TECHGROUPKPOT('IT','HEATPUMP')=50116.7;
TECHGROUPKPOT('LT','HEATPUMP')=1096.2;
TECHGROUPKPOT('LU','HEATPUMP')=907.5;
TECHGROUPKPOT('LV','HEATPUMP')=912.6;
TECHGROUPKPOT('ME','HEATPUMP')=122.1;
TECHGROUPKPOT('MK','HEATPUMP')=289.1;
TECHGROUPKPOT('MT','HEATPUMP')=92.3;
TECHGROUPKPOT('NL','HEATPUMP')=12506.2;
TECHGROUPKPOT('NO1','HEATPUMP')=990.1;
TECHGROUPKPOT('NO2','HEATPUMP')=530.9;
TECHGROUPKPOT('NO3','HEATPUMP')=323.8;
TECHGROUPKPOT('NO4','HEATPUMP')=251.2;
TECHGROUPKPOT('NO5','HEATPUMP')=208.9;
TECHGROUPKPOT('PL','HEATPUMP')=19922.8;
TECHGROUPKPOT('PT','HEATPUMP')=2511.2;
TECHGROUPKPOT('RO','HEATPUMP')=9300.1;
TECHGROUPKPOT('RS','HEATPUMP')=2063.5;
TECHGROUPKPOT('SE1','HEATPUMP')=163.2;
TECHGROUPKPOT('SE2','HEATPUMP')=329.0;
TECHGROUPKPOT('SE3','HEATPUMP')=2379.0;
TECHGROUPKPOT('SE4','HEATPUMP')=721.2;
TECHGROUPKPOT('SI','HEATPUMP')=1328.4;
TECHGROUPKPOT('SK','HEATPUMP')=3027.4;
TECHGROUPKPOT('UK','HEATPUMP')=46262.1;
$label unlimited_individual_heatpumps

* low pit thermal storage potential
$ifi not %low_pit_storage% == yes $goto unlimited_pit_storage
TECHGROUPKPOT('AL','PIT')=EPS;
TECHGROUPKPOT('AT','PIT')=58304.1;
TECHGROUPKPOT('BA','PIT')=EPS;
TECHGROUPKPOT('BE','PIT')=18315.7;
TECHGROUPKPOT('BG','PIT')=EPS;
TECHGROUPKPOT('CH','PIT')=1827.6;
TECHGROUPKPOT('CY','PIT')=EPS;
TECHGROUPKPOT('CZ','PIT')=EPS;
TECHGROUPKPOT('DE4-E','PIT')=EPS;
TECHGROUPKPOT('DE4-N','PIT')=3014.9;
TECHGROUPKPOT('DE4-S','PIT')=EPS;
TECHGROUPKPOT('DE4-W','PIT')=EPS;
TECHGROUPKPOT('DK1','PIT')=87547.7;
TECHGROUPKPOT('DK2','PIT')=11260.6;
TECHGROUPKPOT('EE','PIT')=12980.8;
TECHGROUPKPOT('ES','PIT')=EPS;
TECHGROUPKPOT('FIN','PIT')=21600.0;
TECHGROUPKPOT('FR','PIT')=266602.6;
TECHGROUPKPOT('GR','PIT')=3703.1;
TECHGROUPKPOT('HR','PIT')=1015.2;
TECHGROUPKPOT('HU','PIT')=5372.7;
TECHGROUPKPOT('IE','PIT')=EPS;
TECHGROUPKPOT('IT','PIT')=178133.8;
TECHGROUPKPOT('LT','PIT')=18265.3;
TECHGROUPKPOT('LU','PIT')=EPS;
TECHGROUPKPOT('LV','PIT')=4953.6;
TECHGROUPKPOT('ME','PIT')=EPS;
TECHGROUPKPOT('MK','PIT')=EPS;
TECHGROUPKPOT('MT','PIT')=EPS;
TECHGROUPKPOT('NL','PIT')=41645.2;
TECHGROUPKPOT('NO1','PIT')=6650.8;
TECHGROUPKPOT('NO2','PIT')=1607.1;
TECHGROUPKPOT('NO3','PIT')=7493.7;
TECHGROUPKPOT('NO4','PIT')=6210.6;
TECHGROUPKPOT('NO5','PIT')=1679.5;
TECHGROUPKPOT('PL','PIT')=EPS;
TECHGROUPKPOT('PT','PIT')=EPS;
TECHGROUPKPOT('RO','PIT')=7854.7;
TECHGROUPKPOT('RS','PIT')=642.4;
TECHGROUPKPOT('SE1','PIT')=14401.4;
TECHGROUPKPOT('SE2','PIT')=9260.8;
TECHGROUPKPOT('SE3','PIT')=12046.7;
TECHGROUPKPOT('SE4','PIT')=7292.1;
TECHGROUPKPOT('SI','PIT')=EPS;
TECHGROUPKPOT('SK','PIT')=EPS;
TECHGROUPKPOT('UK','PIT')=86837.5;
$label unlimited_pit_storage

* low salt-cavern storage potential
$ifi not %low_saltcavern% == yes $goto unlimited_saltcavern
TECHGROUPKPOT('AL','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('AT','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('BA','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('BE','H2_SALTCAVERN_STORAGE')=222036.0;
TECHGROUPKPOT('BG','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('CH','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('CY','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('CZ','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('DE4-E','H2_SALTCAVERN_STORAGE')=2049985.2;
TECHGROUPKPOT('DE4-N','H2_SALTCAVERN_STORAGE')=213544.7;
TECHGROUPKPOT('DE4-S','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('DE4-W','H2_SALTCAVERN_STORAGE')=625332.3;
TECHGROUPKPOT('DK1','H2_SALTCAVERN_STORAGE')=733278.0;
TECHGROUPKPOT('DK2','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('EE','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('ES','H2_SALTCAVERN_STORAGE')=3565746.7;
TECHGROUPKPOT('FIN','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('FR','H2_SALTCAVERN_STORAGE')=2101388.4;
TECHGROUPKPOT('GR','H2_SALTCAVERN_STORAGE')=736303.6;
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
TECHGROUPKPOT('NL','H2_SALTCAVERN_STORAGE')=163687.9;
TECHGROUPKPOT('NO1','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('NO2','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('NO3','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('NO4','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('NO5','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('PL','H2_SALTCAVERN_STORAGE')=1081374.6;
TECHGROUPKPOT('PT','H2_SALTCAVERN_STORAGE')=431164.2;
TECHGROUPKPOT('RO','H2_SALTCAVERN_STORAGE')=624187.3;
TECHGROUPKPOT('RS','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SE1','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SE2','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SE3','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SE4','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SI','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('SK','H2_SALTCAVERN_STORAGE')=EPS;
TECHGROUPKPOT('UK','H2_SALTCAVERN_STORAGE')=411519.7;
$label unlimited_saltcavern


* GREAT switch PVN - see TECHGROUPKPOT2.inc
$ifi %low_pv% == yes $include '../../base/data/TECHGROUPKPOT2.inc';
