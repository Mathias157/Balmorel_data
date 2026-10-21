* Fullyear runs: every 6th hour of Monday-Tuesday (T001-T043) and of one block across the weekend
* (Sat 12:00 - Sun 06:00, T133-T151), i.e. 2 weekdays : 1 weekend day. CHRONOHOUR.inc treats the gap
* after T043 as a jump between blocks (6 h steps, SSIZE = 168/72). See docs/adr/0048 in the GREAT repo.
SET T(TTT)  'Time periods within a season in the simulation'
/
T001 , T007 , T013 , T019 , T025 , T031 , T037 , T043 , T133 , T139 , T145 , T151
/;
