---
layout: slide
author: Steven Bergner
title: Geographic Information Systems
date: November 5th, 2018
theme: beige
transition: fade-in
---
{::options parse_block_html="true" /}
{% include_relative slide-theme-customization.snippet %}

<section>
# {{page.title}}

Cmpt 767 Visualization
{: .small }

{{page.author}}

<small>{% include protect-email-raw.include email=site.email %}</small>

<small>*{{page.date}}*</small>

</section>

<section>
# Overview
* Geographic information systems
* Typical GIS tasks
* GIS tools
</section>

<section>
# Definition
* **GIS**
  - desktop system to construct maps for display and analysis
  - using layers of different types (raster and vector format)
* **Geospatial**
  - any application involving geolocation data, not restricted to map display
</section>

<section>
# Map projections
* See [illustrations](http://kjordahl.github.io/SciPy2013/#7) by K. Jordahl
* lon,lat -> x,y
  - Names: unprojected coordinates, Plate Carrée
  - Grid cells are perfect quares
  - distorted shapes, sizes not proportional, area not preserved
* Mercator projection, also [cylindrical projection](https://www.mathworks.com/help/map/the-three-main-families-of-map-projections.html)
  - increases area the farther away from the equator you are
  - directions are locally true
  - shape is perserved locally, conformal
* Lambert projection, on cone rather than cylinder
  - two lines of longitude are chosen for true scale
* Area preserving projection
* True projection shape: ellipsoid
{: .small }
</section>

<section id="qgis-setup">
# Big data lab software
* [QGIS](https://www.qgis.org/en/site/about/index.html) is installed
<!-- * python tools can be installed via anaconda -->
<!-- * prepared conda environment: -->
<!-- ``` -->
<!-- source activate /usr/shared/CMPT/big-data/condaenv/py36 -->
<!-- ``` -->
</section>

<section>
# GIS Tasks
* Maps
* Handle raster and vector data formats
* Data integration from multiple sources
* Application domains
  - Geospatial analysis
  - Display maps on the web
  - Integrate with geospatial DBs
  - GIS desktop apps
* Techniques
  - Map projections *(lon,lat) --> (x,y)*
  - Layer types, composition
  - Geometry operations, creation, validation
{: .small }
</section>

<section>
# GIS Application Examples

* Maps
  * Open Street Maps (OSM) [View online](https://www.openstreetmap.org), [shapefiles](http://download.geofabrik.de/)
  * [Wikimapia](http://wikimapia.org/#lang=en&lat=49.264000&lon=-122.936900&z=12&m=w)
* Tracking
  - [Animals](https://www.movebank.org/panel_embedded_movebank_webapp)
  - [Marine vessels](https://www.vesselfinder.com/) based on [AIS data](http://www.aishub.net/)
  - [Uber data](https://data.cityofnewyork.us/Transportation/uber-Data/3jeu-mn7j) - see [Deck.gl showcase](http://deck.gl/#/examples/overview)
</section>

<section>
# Stats Canada Census
* [Census 2016 Vis](https://www12.statcan.gc.ca/census-recensement/census-vis-recensement-eng.cfm)
  * [Migration](https://www12.statcan.gc.ca/census-recensement/2016/dp-pd/dv-vd/imm/index-eng.cfm)
  * [Infographics](https://www150.statcan.gc.ca/n1/pub/11-627-m/11-627-m2017030-eng.htm)
</section>

<section>
# GIS Python Tutorials
* SciPy2013: [slides](http://kjordahl.github.io/SciPy2013), [github](https://github.com/kjordahl/SciPy2013), [video](https://www.youtube.com/watch?v=1fzQKMp_tdE)
* SciPy2018: [geopandas tutorial repo](https://github.com/geopandas/scipy2018-geospatial-data), [video](https://www.youtube.com/watch?v=kJXUUO5M4ok)
* [Geospatial Python Tutorial](https://github.com/SocialDataSci/Geospatial_Data_with_Python)
  [(py36 fork)](https://github.com/git-steb/Geospatial_Data_with_Python)
* Matplotlib Basemap
  * See [Examples](https://matplotlib.org/basemap/users/examples.html), or the [reference](https://basemaptutorial.readthedocs.io/en/latest/plotting_data.html)
</section>

<section>
# QGIS and ArcGIS
* [QGIS tutorial for Canadian Census data](http://www.davidmckie.com/Tutorial%20for%20mapping%20Census%202016%20data%20in%20Qgis%20by%20census%20tracts_updated.pdf) [D. McKie]
* [ArcGIS](http://desktop.arcgis.com/en/) is a commercial desktop product, available to SFU students
</section>

<section>
# SFU Library

* [GIS & maps](https://www.lib.sfu.ca/find/other-materials/data-gis/gis)
* [Mapping Census Data](https://www.lib.sfu.ca/find/other-materials/data-gis/gis/mapping-census-data)
* [Geospatial data for Ecological Restauration](https://www.lib.sfu.ca/find/other-materials/data-gis/gis/ecological-restoration)
* [SFU purchased data](https://www.lib.sfu.ca/find/other-materials/data-gis/gis/spatial-data#sfu-purchaseddata-sfu-login-or-librarian-mediated-access)
</section>

<section>
<section>
# QGIS tutorial

* [Download tutorial data](http://cs-bahamas.cmpt.sfu.ca:4000/)
</section>

<section>
# Background

* [David McKie's blog](http://www.davidmckie.com/increases-in-visible-minorities-most-evident-in-ottawa-suburbia-census-shows/)
* [StatsCan on visible minorities](https://www12.statcan.gc.ca/census-recensement/2016/ref/guides/006/98-500-x2016006-eng.cfm)
* [Census topic: ethnocultural diversity](https://www12.statcan.gc.ca/census-recensement/2016/rt-td/imm-eng.cfm)
* [Data tables](https://www12.statcan.gc.ca/census-recensement/2016/dp-pd/dt-td/Rp-eng.cfm?LANG=E&APATH=3&DETAIL=0&DIM=0&FL=A&FREE=0&GC=0&GID=0&GK=0&GRP=1&PID=112451&PRID=10&PTYPE=109445&S=0&SHOWALL=0&SUB=0&Temporal=2017&THEME=120&VID=0&VNAMEE=&VNAMEF=)
</section>

<section>
# Census tracts
*Geographic areas located in Canada’s largest census metropolitan areas of
more than 100,000 people*

### Boundary files

* Definition of lat/lon region boudaries
* Get 2016 *Census tract* data from [Stats Canada](https://www12.statcan.gc.ca/census-recensement/2011/geo/bound-limit/bound-limit-2016-eng.cfm) in ArcGIS .shp format
</section>

<section>
# First Steps in QGIS
* 'Add Vector Layer' from top icon on in left toolbar, open *.shp* file
* 'Open Attribute Table' in context menu of layer name
  * [CTUID](http://www.statcan.gc.ca/pub/92-160-g/2016002/tbl/tbl_4.12-eng.htm) is UID for census tract within metropolitan area
* 'Add delimited text layer' (comma icon) to load *.csv* file
  - Choose 'No geometry' (attribute only)
{: .small }
</section>

</section>

<section>
<section>
# References
* [mapnificent.net](https://www.mapnificent.net/vancouver/#12/49.2485/-123.1088/900/49.2485/-123.1088) by [Stefan Wehrmeyer](https://stefanwehrmeyer.com/projects/)
* [NY Times Map of every building in the US](https://www.nytimes.com/interactive/2018/10/12/us/map-of-every-building-in-the-united-states.html?smid=tw-share) based on [Microsoft US Building Footprints](https://github.com/Microsoft/USBuildingFootprints/)
* Kelsey Jordahl's [blog](https://twitter.com/@kajord)
* Fred Vallance-Jones and [David McKie](http://www.davidmckie.com/): "The Data Journalist", Oxford Press 2017
</section>

</section>
