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
TECHGROUPKPOT('AL','HEATPUMP')=377.0;
TECHGROUPKPOT('AT','HEATPUMP')=7343.5;
TECHGROUPKPOT('BA','HEATPUMP')=916.0;
TECHGROUPKPOT('BE','HEATPUMP')=10345.0;
TECHGROUPKPOT('BG','HEATPUMP')=2341.6;
TECHGROUPKPOT('CH','HEATPUMP')=7139.4;
TECHGROUPKPOT('CY','HEATPUMP')=307.3;
TECHGROUPKPOT('CZ','HEATPUMP')=7662.4;
TECHGROUPKPOT('DE4-E','HEATPUMP')=10119.5;
TECHGROUPKPOT('DE4-N','HEATPUMP')=3048.1;
TECHGROUPKPOT('DE4-S','HEATPUMP')=26975.7;
TECHGROUPKPOT('DE4-W','HEATPUMP')=29644.9;
TECHGROUPKPOT('DK1','HEATPUMP')=1342.1;
TECHGROUPKPOT('DK2','HEATPUMP')=958.9;
TECHGROUPKPOT('EE','HEATPUMP')=775.6;
TECHGROUPKPOT('ES','HEATPUMP')=19977.1;
TECHGROUPKPOT('FIN','HEATPUMP')=4734.5;
TECHGROUPKPOT('FR','HEATPUMP')=44381.1;
TECHGROUPKPOT('GR','HEATPUMP')=4312.6;
TECHGROUPKPOT('HR','HEATPUMP')=2679.7;
TECHGROUPKPOT('HU','HEATPUMP')=8487.4;
TECHGROUPKPOT('IE','HEATPUMP')=3421.6;
TECHGROUPKPOT('IT','HEATPUMP')=53537.6;
TECHGROUPKPOT('LT','HEATPUMP')=867.8;
TECHGROUPKPOT('LU','HEATPUMP')=829.5;
TECHGROUPKPOT('LV','HEATPUMP')=780.7;
TECHGROUPKPOT('ME','HEATPUMP')=121.0;
TECHGROUPKPOT('MK','HEATPUMP')=285.5;
TECHGROUPKPOT('MT','HEATPUMP')=101.1;
TECHGROUPKPOT('NL','HEATPUMP')=10997.5;
TECHGROUPKPOT('NO1','HEATPUMP')=936.0;
TECHGROUPKPOT('NO2','HEATPUMP')=515.4;
TECHGROUPKPOT('NO3','HEATPUMP')=329.0;
TECHGROUPKPOT('NO4','HEATPUMP')=254.3;
TECHGROUPKPOT('NO5','HEATPUMP')=212.7;
TECHGROUPKPOT('PL','HEATPUMP')=14769.4;
TECHGROUPKPOT('PT','HEATPUMP')=2862.2;
TECHGROUPKPOT('RO','HEATPUMP')=8608.9;
TECHGROUPKPOT('RS','HEATPUMP')=1909.7;
TECHGROUPKPOT('SE1','HEATPUMP')=163.2;
TECHGROUPKPOT('SE2','HEATPUMP')=329.0;
TECHGROUPKPOT('SE3','HEATPUMP')=2379.0;
TECHGROUPKPOT('SE4','HEATPUMP')=721.2;
TECHGROUPKPOT('SI','HEATPUMP')=1238.7;
TECHGROUPKPOT('SK','HEATPUMP')=2761.5;
TECHGROUPKPOT('UK','HEATPUMP')=44785.4;
$label unlimited_individual_heatpumps

* low pit thermal storage potential
$ifi not %low_pit_storage% == yes $goto unlimited_pit_storage
TECHGROUPKPOT('CH','PIT')=4864.8;
TECHGROUPKPOT('DK1','PIT')=119020.7;
TECHGROUPKPOT('DK2','PIT')=3202.6;
TECHGROUPKPOT('EE','PIT')=5305.5;
TECHGROUPKPOT('FIN','PIT')=21600.0;
TECHGROUPKPOT('FR','PIT')=138539.7;
TECHGROUPKPOT('GR','PIT')=2973.4;
TECHGROUPKPOT('IT','PIT')=8952.1;
TECHGROUPKPOT('LT','PIT')=7624.0;
TECHGROUPKPOT('NL','PIT')=12463.7;
TECHGROUPKPOT('NO1','PIT')=10314.1;
TECHGROUPKPOT('NO2','PIT')=7724.0;
TECHGROUPKPOT('NO3','PIT')=4187.2;
TECHGROUPKPOT('NO4','PIT')=3026.8;
TECHGROUPKPOT('NO5','PIT')=6681.4;
TECHGROUPKPOT('PT','PIT')=10652.1;
TECHGROUPKPOT('RS','PIT')=1295.6;
TECHGROUPKPOT('SE1','PIT')=3063.5;
TECHGROUPKPOT('SE2','PIT')=17374.5;
TECHGROUPKPOT('SE3','PIT')=3323.6;
TECHGROUPKPOT('SE4','PIT')=2561.9;
$label unlimited_pit_storage

* low salt-cavern storage potential
$ifi not %low_saltcavern% == yes $goto unlimited_saltcavern
TECHGROUPKPOT('BE','H2_SALTCAVERN_STORAGE')=86891.0;
TECHGROUPKPOT('DE4-E','H2_SALTCAVERN_STORAGE')=5422154.5;
TECHGROUPKPOT('DE4-N','H2_SALTCAVERN_STORAGE')=266183.3;
TECHGROUPKPOT('DE4-W','H2_SALTCAVERN_STORAGE')=2476876.5;
TECHGROUPKPOT('DK1','H2_SALTCAVERN_STORAGE')=833037.7;
TECHGROUPKPOT('ES','H2_SALTCAVERN_STORAGE')=4146810.4;
TECHGROUPKPOT('FR','H2_SALTCAVERN_STORAGE')=480271.2;
TECHGROUPKPOT('GR','H2_SALTCAVERN_STORAGE')=835301.3;
TECHGROUPKPOT('NL','H2_SALTCAVERN_STORAGE')=805874.9;
TECHGROUPKPOT('PL','H2_SALTCAVERN_STORAGE')=884818.9;
TECHGROUPKPOT('PT','H2_SALTCAVERN_STORAGE')=302607.2;
TECHGROUPKPOT('RO','H2_SALTCAVERN_STORAGE')=1355955.4;
TECHGROUPKPOT('UK','H2_SALTCAVERN_STORAGE')=434769.9;
$label unlimited_saltcavern


* GREAT switch PVN - see TECHGROUPKPOT2.inc
$ifi %low_pv% == yes $include '../../base/data/TECHGROUPKPOT2.inc';
