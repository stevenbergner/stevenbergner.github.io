---
layout: slide
author: Steven Bergner
title: Colours & D3
date: October 1, 2018
theme: beige
transition: slide
---
{::options parse_block_html="true" /}

<section>
# {{page.title}}

{{page.author}}

<small>{% include protect-email-raw.include email=site.email %}</small>

<small>*{{page.date}}*</small>

</section>

<section>
<section>
# Choosing a colour palette

* **Continuous** data: use colour **gradient** (sequential or diverging)
* **Categorical** data: **distinctive** colors

* Excellent source: LC Rost's [Friendly Guide to Colors](https://blog.datawrapper.de/colorguide/)
</section>
<section>
# Color picking tools

* Classic: <http://colorbrewer2.org/>
* [Colour picker for data](http://tristen.ca/hcl-picker/#/hlc/6/1.05/CAF270/453B52) helps to understand colour space
* [Multi-hued colour scales](https://www.vis4.net/blog/2013/09/mastering-multi-hued-color-scales/) ([design tool](http://gka.github.io/palettes/#diverging%7Cc0=darkred,deeppink,lightyellow%7Cc1=lightyellow,lightgreen,teal%7Csteps=13%7Cbez0=1%7Cbez1=1%7CcoL0=1%7CcoL1=1))
* [Viz Palette](https://projects.susielu.com/viz-palette?colors=%255B%2522#1DABE6%22,%22#1C366A%22,%22#C3CED0%22,%22#E43034%22,%22#FC4E51%22,%22#AF060F%22%5D&backgroundColor=%22white%22&fontColor=%22black%22) to ensure your colours work under deficiencies
* [Generate palette from an image](https://www.degraeve.com/color-palette/) (e.g. from photos of [tropical fish](https://www.flickr.com/search/?text=tropical%20fish&styles=depthoffield))
* Colour compositions, e.g. [Adobe Color CC](https://color.adobe.com/explore/?filter=most-popular&time=month) [Google Material Design](https://material.io/design/color/#tools-for-picking-colors)
</section>
</section>

<section>
# Evolution of D3
* Reusable knowledge of open standards: HTML, SVG, CSS
* Prior incarnations: [prefuse](http://prefuse.org/), [flare](https://github.com/prefuse/Flare)
* Alternatives (historic): [processing](http://processing.org/), [protovis](http://vis.stanford.edu/protovis/)
</section>

<section>
# Sources

* Ian Johnson's [Hitchhiker guide to D3](https://medium.com/@enjalot/the-hitchhikers-guide-to-d3-js-a8552174733a)
* Elijah Meeks' [What charts do](https://medium.com/@Elijah_Meeks/what-charts-do-48ed96f70a74)
</section>

<section>
# Hitchhiker's guide to D3

* [Mapping out the landscape](https://cdn-images-1.medium.com/max/1760/1*C17GW5l4S_W99_52lQMpBQ.png)
* Communicate Complex Concepts
  - [New York Times article](https://www.google.com/search?q=new+york+times+d3+interactives&oq=new+york+times+d3+interactives&aqs=chrome..69i57j69i64.6825j0j1&sourceid=chrome&ie=UTF-8)
  - [r2d3](http://www.r2d3.us/visual-intro-to-machine-learning-part-1/)
  - [distill.pub](http://distill.pub/)
  - [datasketch\|es](http://www.datasketch.es/)
  - [polygraph](https://polygraph.cool/)
  - [ncase](http://ncase.me/)
* Created using web standards - Shareable on the Web
* [BlockBuilder’s search](http://blockbuilder.org/search)
* Community

</section>

<section>
# D3 API
* [Reference](https://github.com/d3/d3/blob/master/API.md)
* [Getting started guide](https://medium.com/@enjalot/the-hitchhikers-guide-to-d3-js-a8552174733a#efae)
  - d3-scale maps data to marker attributes
  - d3-shape convenience functions
  - [d3-selection](https://github.com/d3/d3-selection#d3-selection), e.g. set attributes to chosen elements
  - d3-collection group similar things together
  - d3-hierarchy, e.g. to make treemaps
  - d3-zoom can show detail in context
  - d3-force for graph layouts
</section>

<style>
.reveal h1 { font-size: 2.5em; }
.reveal li { font-size: .8em; }
.reveal .slides section { text-align:left; }
</style>
