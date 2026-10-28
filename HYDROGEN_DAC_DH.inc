PARAMETER DAC_DH(GGG) 'Heat demand needed to produce biomethane through DAC (Mwth/MWth biomethane)';
* GREAT: PyPSA technology-data v0.15.0 'direct air capture' (DEA 403.a), PyPSA-Eur netting: 0.198 t/MWh_CH4 x (1.6 heat-input - 0.2 compression-heat-output) MWh_th/t (GREAT docs/adr/0093).
DAC_DH(G)$(GDATA(G,'GDTYPE') EQ HYDROGEN_GH2TOBIOMETH)=0.2772;                                       
