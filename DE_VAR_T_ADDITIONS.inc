* Corrections to DE_VAR_T, included from base/addons/_hooks/de_var_tadditions.inc
* right after DE_VAR_T is loaded (before IDE_SUMST, so annual demand is kept).

* Slovakia, S50 T087-T095 (pre-rerun audit A15): the frozen pre-rebase SK
* profile in weatheryear_ref/DE_VAR_T.inc (RESE, and PII and OTHER, which
* reuse it) jumps to 5.3x its mean at T088 (4.7x at T087, 2.8x at T094), while
* CZ, HU, AT, PL and SI never exceed 1.51x. It lifts SK's 2030 peak from about
* 4.3 to 14 GW, in rolling runs only (S50 is not in S_inv, and T_full skips
* T087-T095). No weather year has an SK profile, so it hits every folder.
* Replaced by the mean of the same hours in S49 and S51. Applied only while the
* spike is present, so a real SK profile from a future weather year is kept.
SET DE_VAR_T_SK_SPIKE(TTT) "Time steps of the SK S50 demand spike" / T087*T095 /;
DE_VAR_T('SK',DEUSER,'S50',DE_VAR_T_SK_SPIKE)$(DE_VAR_T('SK','RESE','S50','T088') GT 3*DE_VAR_T('SK','RESE','S49','T088'))
  = (DE_VAR_T('SK',DEUSER,'S49',DE_VAR_T_SK_SPIKE) + DE_VAR_T('SK',DEUSER,'S51',DE_VAR_T_SK_SPIKE))/2;
