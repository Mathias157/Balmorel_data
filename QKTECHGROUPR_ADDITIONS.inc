* Right-hand side additions to QKTECHGROUPR, included from
* base/addons/_hooks/qktechgroupr.inc (after "=L= TECHGROUPKPOT(IR,TECH_GROUP)").

* GREAT switch HPN (--limited_individual_heatpump yes): the regional HEATPUMP
* caps in TECHGROUPKPOT.inc are meant for individual-user heat pumps only. The
* HEATPUMP tech group also covers district heating and industry heat pumps (and
* drives seasonal COPs, so it can't be split), so their capacity is added back
* here - equivalent to excluding non-individual-user areas from the LHS sum.
$ifi not %limited_individual_heatpump% == yes $goto no_limited_individual_heatpump
  + (
    SUM((IA,G)$(IAGKFX(IY411,IA,G) AND (GDATA(G,'GDTECHGROUP') EQ HEATPUMP) AND RRRAAA(IR,IA)
                AND NOT INDIVUSERS_AAA(IA)),
    GKFX(IY411,IA,G)
$ifi %DECOM%==yes   -VDECOM_EXO_ACCUM(IY411,IA,G)$IGDECOMEXOPOT(IY411,IA,G)
    )
    +SUM(IAGK_HASORPOT(IY411,IA,G)$(SUM(Y$(YVALUE(Y) LE YVALUE(IY411)),IAGKNY(Y,IA,G)) AND (GDATA(G,'GDTECHGROUP') EQ HEATPUMP) AND RRRAAA(IR,IA)
                AND NOT INDIVUSERS_AAA(IA)),
    VGKNACCUMNET(IY411,IA,G))
    )$SAMEAS(TECH_GROUP,'HEATPUMP')
$label no_limited_individual_heatpump
