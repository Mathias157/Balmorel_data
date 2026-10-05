* Deliberately empty. INDIVUSERS_DH.inc/INDIVUSERS_DH_VAR_T.inc assign
* straight into DH(...)/DH_VAR_T(...) for individual-user IDVU-HOTWTR/
* IDVU-SPACEHEAT areas - clean_weather_year_inputs.py's DH_INC_CONTENT
* already pulls base's real data for those in directly via DH.inc, so this
* file only needs to exist (satisfying the indivusers addon's own
* indivusers_dhadditions.inc $if EXIST check) as a no-op that keeps that
* addon from applying the same data a second time. See docs/adr/0022.
