* Fullyear runs: three blocks of 6 h steps, shifted so together they hit every even hour of the day once:
* Monday 00-18 (T001-T019), Tuesday 02-20 (T027-T045) and Sat 16:00 - Sun 10:00 (T137-T155), i.e. 2 weekdays : 1 weekend day.
* One fixed set of 4 hours per day misrepresented solar (scaled peaks up to 1.29). CHRONOHOUR.inc treats the gaps
* after T019 and T045 as jumps between blocks (6 h steps, SSIZE = 168/72). See docs/adr/0048 and 0061 in the GREAT repo.
SET T(TTT)  'Time periods within a season in the simulation'
/
T001 , T007 , T013 , T019 , T027 , T033 , T039 , T045 , T137 , T143 , T149 , T155
/;
