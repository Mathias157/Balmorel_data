PARAMETER DAC_DE(GGG) 'Power demand needed to produce biomethane through DAC (Mwe/MWth biomethane)';
* GREAT: PyPSA technology-data v0.15.0 'direct air capture' (DEA 403.a), PyPSA-Eur netting: 0.198 t/MWh_CH4 x (0.4 + 0.15 compression) MWh_el/t (GREAT docs/adr/0093).
DAC_DE(G)$(GDATA(G,'GDTYPE') EQ HYDROGEN_GH2TOBIOMETH)=0.1089;                                      
