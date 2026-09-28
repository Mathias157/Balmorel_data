# Weather-year reference data

Frozen copies of the `base/data` files that the weather-year overlays in
`scripts/Balmorel/weatheryeardata/` build on. They were taken from `base/data`
commit `7594ded` ("Standardised scenario switches"), before the 2012 Design
weather year was flattened into `base/data`.

The overlays written by `scripts/preprocessing/clean_weather_year_inputs.py`
always `$include` these files, never the live `base/data` ones. A weather year
is therefore applied to the same starting point the Design weather year was
flattened from, and not on top of it. On top of it, hydro FLH would be scaled
twice and the individual-user heat added twice. See GREAT's
`docs/adr/0034-design-weather-year-rebase-and-archive.md` and the
"Weather-year reference data" entry in `CONTEXT.md`.

Never edit these files. Nested includes (e.g. `EV_DUMB_DE_VAR_T.inc` inside
`DE_VAR_T.inc`) still resolve to the live files, because GAMS resolves
`$include` paths against the working directory. That is intended: those
inputs don't depend on the weather.
