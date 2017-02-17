---
layout: post
title:  "Lattice refinement for experimental design"
date:   2017-02-16
author: Steven Bergner
breadcrumb: index
categories: research
collab:
- <a href="http://miplab.epfl.ch/index.php/people/vandeville">Dimitri Van De Ville</a>
- <a href="http://www.ee.cuhk.edu.hk/~tblu">Thierry Blu</a>
- <a href="https://cs.univie.ac.at/vda/team/worker/infpers/Torsten_M%C3%B6ller">Torsten M&ouml;ller</a>
- <a href="http://people.stat.sfu.ca/~dbingham/">Derek Bingham</a>
---
In experimental design for computer simulations,
points have to be chosen that determine the
factor levels for the input variables for a certain number of experimental runs.

With such applications in mind and seeing further use for grid-based data processing in general, we propose novel sub-sampling schemes for lattices that allow for a small factor in the relative decrease of sample points between refined and coarse lattices that is independent of the dimension $d$ of the experimental region (i.e., the number of pre-screened, relevant input variables of the simulation code).

Our initial results were presented at [SAMPTA 2009]({{ site.baseurl }}/assets/pub/bergner-sampta09.pdf "workshop publication") with an extended discussion in Chapter 3 of my [PhD thesis][phdlibrary] ([PDF][phdpdf]).

![Three different solutions for 2-scale refinement in 2D][rotgrid2d-img]

Each column shows a different lattice with several levels of refinement.
The *top row* shows the refined lattice as small grey dots and the coarse sub-lattice is shown as thick dots.
The Voronoi cells, or so-called nearest neighbour cells, for the two nested lattices are also shown.
The *bottom row* shows the same lattices as in the top with additional levels of refinement and coarsening.

The special property of the nested lattice sequences we construct is that each lattice is a scaled and rotated version of the other lattices in the sequence. We show how to obtain low distance scaling factors, such as $2^{1/d}$ for any dimension $d$ resulting in changes of expected runsize by a factor as low as $2$ at each step in the sequence of nested experimental designs.

Currently, an extended discussion of this work with <a href="https://arxiv.org/abs/1508.02654">more recent applications</a> is under preparation in collaboration with Derek Bingham.

[rotgrid2d-img]: {{ site.baseurl }}/assets/img/rotgrid-levels-d2-beta2.png "Three different solutions for 2-scale refinement in 2D"
[phdpdf]: http://summit.sfu.ca/system/files/iritems1/12089/etd7005_SBergner.pdf "PhD thesis PDF file"
[phdlibrary]: http://summit.sfu.ca/item/12089 "Making choices in multi-dimensional parameter spaces"
