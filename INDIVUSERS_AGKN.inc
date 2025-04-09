SET INVDATASET_INDIVUSERS                                                                                                                                                                             
/                                                                                                                                                                                                     
                                                                                                                                                                                                      
IDVU-HOTWTR                                                                                                                    'individual users, area with hot water demand'                         
IDVU-SPACEHEAT                                                                                                                 'individual users, area with space heating demand'                     
                                                                                                                                                                                                      
/;                                                                                                                                                                                                    
                                                                                                                                                                                                      
                                                                                                                                                                                                      
*** TABLE to connect areas to regions, countries and other subsets                                                                                                                                    
TABLE INVDATA_INDIVUSERS(AAA,INVDATASET_INDIVUSERS)                                                                                                                                                   
                                                                                                                               IDVU-HOTWTR                         IDVU-SPACEHEAT      
AL_IDVU-HOTWTR                                                                                                                           1
AT_IDVU-HOTWTR                                                                                                                           1
BA_IDVU-HOTWTR                                                                                                                           1
BE_IDVU-HOTWTR                                                                                                                           1
BG_IDVU-HOTWTR                                                                                                                           1
CH_IDVU-HOTWTR                                                                                                                           1
CZ_IDVU-HOTWTR                                                                                                                           1
DE_IDVU-HOTWTR                                                                                                                           1
DK_IDVU-HOTWTR                                                                                                                           1
EE_IDVU-HOTWTR                                                                                                                           1
ES_IDVU-HOTWTR                                                                                                                           1
FI_IDVU-HOTWTR                                                                                                                           1
FR_IDVU-HOTWTR                                                                                                                           1
GR_IDVU-HOTWTR                                                                                                                           1
HR_IDVU-HOTWTR                                                                                                                           1
HU_IDVU-HOTWTR                                                                                                                           1
IE_IDVU-HOTWTR                                                                                                                           1
IT_IDVU-HOTWTR                                                                                                                           1
LT_IDVU-HOTWTR                                                                                                                           1
LU_IDVU-HOTWTR                                                                                                                           1
LV_IDVU-HOTWTR                                                                                                                           1
ME_IDVU-HOTWTR                                                                                                                           1
MK_IDVU-HOTWTR                                                                                                                           1
NL_IDVU-HOTWTR                                                                                                                           1
NO_IDVU-HOTWTR                                                                                                                           1
PL_IDVU-HOTWTR                                                                                                                           1
PT_IDVU-HOTWTR                                                                                                                           1
RO_IDVU-HOTWTR                                                                                                                           1
RS_IDVU-HOTWTR                                                                                                                           1
SE_IDVU-HOTWTR                                                                                                                           1
SI_IDVU-HOTWTR                                                                                                                           1
SK_IDVU-HOTWTR                                                                                                                           1
UK_IDVU-HOTWTR                                                                                                                           1                                                                                                                                                                                                
                                                                                                                                                                                                      
AL_IDVU-SPACEHEAT                                                                                                                                                               1 
AT_IDVU-SPACEHEAT                                                                                                                                                               1
BA_IDVU-SPACEHEAT                                                                                                                                                               1
BE_IDVU-SPACEHEAT                                                                                                                                                               1
BG_IDVU-SPACEHEAT                                                                                                                                                               1
CH_IDVU-SPACEHEAT                                                                                                                                                               1
CZ_IDVU-SPACEHEAT                                                                                                                                                               1
DE_IDVU-SPACEHEAT                                                                                                                                                               1
DK_IDVU-SPACEHEAT                                                                                                                                                               1
EE_IDVU-SPACEHEAT                                                                                                                                                               1
ES_IDVU-SPACEHEAT                                                                                                                                                               1
FI_IDVU-SPACEHEAT                                                                                                                                                               1
FR_IDVU-SPACEHEAT                                                                                                                                                               1
GR_IDVU-SPACEHEAT                                                                                                                                                               1
HR_IDVU-SPACEHEAT                                                                                                                                                               1
HU_IDVU-SPACEHEAT                                                                                                                                                               1
IE_IDVU-SPACEHEAT                                                                                                                                                               1
IT_IDVU-SPACEHEAT                                                                                                                                                               1
LT_IDVU-SPACEHEAT                                                                                                                                                               1
LU_IDVU-SPACEHEAT                                                                                                                                                               1
LV_IDVU-SPACEHEAT                                                                                                                                                               1
ME_IDVU-SPACEHEAT                                                                                                                                                               1
MK_IDVU-SPACEHEAT                                                                                                                                                               1
NL_IDVU-SPACEHEAT                                                                                                                                                               1
NO_IDVU-SPACEHEAT                                                                                                                                                               1
PL_IDVU-SPACEHEAT                                                                                                                                                               1
PT_IDVU-SPACEHEAT                                                                                                                                                               1
RO_IDVU-SPACEHEAT                                                                                                                                                               1
RS_IDVU-SPACEHEAT                                                                                                                                                               1
SE_IDVU-SPACEHEAT                                                                                                                                                               1
SI_IDVU-SPACEHEAT                                                                                                                                                               1
SK_IDVU-SPACEHEAT                                                                                                                                                               1
UK_IDVU-SPACEHEAT                                                                                                                                                               1                                                                                                                                                                                                                                                                                                                                                                                       
                   
$label NO_INDIVUSERS_INDIVUSERS                                                                                                                                                                       
;                                                                                                                                                                                                     
                                                                                                                                                                                                      
                                                                                                                                                                                                      
                                                                                                                                                                                                      
$ontext                                                                                                                                                                                               
To avoid manual entry in each area the following catagories of areas are defined.                                                                                                                     
Note that each area can belong to one group only                                                                                                                                                      
1 - Areas with space heating                                                                                                                                                                          
2 - Areas with water heating                                                                                                                                                                          
                                                                                                                                                                                                      
$offtext                                                                                                                                                                                              
                                                                                                                                                                                                      
                                                                                                                                                                                                      
                                                                                                                                                                                                      
                                                                                                                                                                                                      
SET ALLOWEDINV_INDIVUSERS(AAA,GGG) "Area, technology where technolgy may be invested based on AGKN and implicit constraints "                                                                         
/                                                                                                                                                                                                     
*GROUP 1 - Areas with space heating                                                                                                                                                                   
DK_IDVU-SPACEHEAT.(                                                                                                                                                                                  
                                                                                                                                                                                                      
GNR_HP_ELEC_AIR-AIR_COP-490_SS-3-KW_Y-2020                                                                                                                                                            
GNR_HP_ELEC_AIR-AIR_COP-340_SS-4-KW_Y-2030                                                                                                                                                            
GNR_HP_ELEC_AIR-AIR_COP-350_SS-4-KW_Y-2040                                                                                                                                                            
GNR_HP_ELEC_AIR-AIR_COP-360_SS-4-KW_Y-2050                                                                                                                                                            
                                                                                                                                                                                                      
                                                                                                                                                                                                      
)                                                                                                                                                                                                     
                                                                                                                                                                                                      
*GROUP 2 -  Areas with water heating                                                                                                                                                                  
DK_IDVU-HOTWTR.(                                                                                                                                                                                     
                                                                                                                                                                                                      
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2020                                                                                                                                                                 
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2030                                                                                                                                                                 
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2040                                                                                                                                                                 
GNR_BO_ELEC_E-100_SS-3-KW-FEED_Y-2050                                                                                                                                                                 
GNR_BO_NGAS_E-95_SS-10-KW_Y-2020                                                                                                                                                                      
GNR_BO_NGAS_E-96_SS-10-KW_Y-2030                                                                                                                                                                      
GNR_BO_NGAS_E-96_SS-10-KW_Y-2040                                                                                                                                                                      
GNR_BO_NGAS_E-97_SS-10-KW_Y-2050                                                                                                                                                                      
GNR_BO_WOODPEL_E-78_SS-10-KW-FEED_Y-2020                                                                                                                                                              
GNR_BO_WOODPEL_E-80_SS-8-KW-FEED_Y-2030                                                                                                                                                               
GNR_BO_WOODPEL_E-80_SS-8-KW-FEED_Y-2040                                                                                                                                                               
GNR_BO_WOODPEL_E-85_SS-8-KW-FEED_Y-2050                                                                                                                                                               
GNR_HP_ELEC_AIR-WTR_COP-335_SS-4-KW_Y-2020                                                                                                                                                            
GNR_HP_ELEC_AIR-WTR_COP-345_SS-4-KW_Y-2030                                                                                                                                                            
GNR_HP_ELEC_AIR-WTR_COP-345_SS-4-KW_Y-2040                                                                                                                                                            
GNR_HP_ELEC_AIR-WTR_COP-365_SS-4-KW_Y-2050                                                                                                                                                            
GNR_HP_ELEC_GROUND-WTR_COP-370_SS-10-KW_Y-2020                                                                                                                                                        
GNR_HP_ELEC_GROUND-WTR_COP-380_SS-10-KW_Y-2030                                                                                                                                                        
GNR_HP_ELEC_GROUND-WTR_COP-388_SS-10-KW_Y-2040                                                                                                                                                        
GNR_HP_ELEC_GROUND-WTR_COP-400_SS-10-KW_Y-2050                                                                                                                                                        
GNR_HS_HEAT_WTR-TANK_SS_E-95_Y-2010                                                                                                                                                                   
*GNR_SH_SUN_SS-4-KW_Y-2020                                                                                                                                                                             
*GNR_SH_SUN_SS-4-KW_Y-2030                                                                                                                                                                             
*GNR_SH_SUN_SS-4-KW_Y-2040                                                                                                                                                                             
*GNR_SH_SUN_SS-4-KW_Y-2050                                                                                                                                                                             
                                                                                                                                                                                                      
                                                                                                                                                                                                      
)                                                                                                                                                                                                     
                                                                                                                                                                                                      
                                                                                                                                                                                                      
/;                                                                                                                                                                                                    
                                                                                                                                                                                                      
ALLOWEDINV_INDIVUSERS(AAA,G)$((INVDATA_INDIVUSERS(AAA,'IDVU-HOTWTR')=1)  and ALLOWEDINV_INDIVUSERS('DK_IDVU-HOTWTR',G))        = yes;                                                                
ALLOWEDINV_INDIVUSERS(AAA,G)$((INVDATA_INDIVUSERS(AAA,'IDVU-SPACEHEAT')=1)  and ALLOWEDINV_INDIVUSERS('DK_IDVU-SPACEHEAT',G))  = yes;                                                                
                                                                                                                                                                                                      
$label NO_INDIVUSERS_AGKN                                                                                                                                                                             
                                                                                                                                                                                                      
AGKN(AAA,G)=YES$(ALLOWEDINV_INDIVUSERS(AAA,G) OR AGKN(AAA,G)                                                                                                                                          
$ifi %GROUP_DEMAND_SHIFT%==yes OR INDIV_AGKN_GROUP(G,AAA)                                                                                                                                             
);                                                                                                                                                                                                    
