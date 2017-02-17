---
layout: post
title:  "Ant classification using structured deformable shapes"
date:   2003-12-18
author: Steven Bergner
categories: research
---
By matching structural body shape models of several ant species to a macroscopic color image morphological features of the specimen are detected. This enables a proof of concept implementation for semantic content based image retrieval for the <a href="http://insects.oeb.harvard.edu/mcz/">MCZ Type Specimen Database</a> @ <a href="http://www.mcz.harvard.edu/Departments/Entomology/">Harvard Entomology</a>.
![alt text][sdm-framework]
The <a href="{{ site.baseurl }}/assets/img/sdm-framework.jpg">hierarchical recognition model</a> contains:
<ul>
<li> a compound deformable model where occurrence of structural components influences the distribution for search for further shapes (e.g. a neck should be near the head and vice versa),</li>
<li> a finite element model of deformable shape components, for which the involved physical parameters are learned from training data,</li>
<li> a multi-scale feature extraction including color edge and corner detection,</li>
<li> a parametric Gaussian color space model for ant skin classification.</li>
</ul>
All details are published in <a href="{{ site.baseurl }}/assets/pub/thesis_bergner03.pdf">my thesis</a> (<a href="{{ site.baseurl }}/mybib.html#dsmthesis">bibtex</a>) and a summary is provided in the <a href="{{ site.baseurl }}/assets/pub/bergner-deformable-models-icip04.pdf">ICIP04 paper</a> (<a href="{{ site.baseurl }}/mybib.html#dsmicip">bibtex</a>).

[sdm-framework]: {{ site.baseurl }}/assets/img/sdm-framework.jpg "Structural Deformable Model Framework"
