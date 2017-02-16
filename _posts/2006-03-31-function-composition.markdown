---
layout: post
title:  "Spectral analysis of function composition"
date:   2006-03-31
breadcrumb: index
categories: research
collab:
- <a href="http://www.visus.uni-stuttgart.de/~weiskopf/">Daniel Weiskopf</a>
- <a href="https://cs.univie.ac.at/vda/team/worker/infpers/Torsten_M%C3%B6ller">Torsten M&ouml;ller</a>
- <a href="http://www.math.sfu.ca/~muraki/">Dave Muraki</a>
---
Before rendering, data values $f(x)$ at given spatial positions $x$ have to be assigned optical properties and visibility. In mathematical terms this corresponds to function composition $g(f(x))$. We describe the composition as a linear operator and conduct a spectral analysis to estimate a suitable sampling frequency in $x$ to reconstruct the composed signal. We put the theoretical insight to practical effect by implementing a raycaster with an adaptive sampling scheme based on our new estimate.

This work is described in a [IEEE TVCG paper]({{ site.baseurl }}/assets/pub/bergner2006gofx.pdf) ([bibtex]({{ site.baseurl }}/mybib.html#gofx)) and has been presented at IEEE Visualization 2006.
See also Chapter 4 of my [PhD thesis][phdlibrary] ([PDF][phdpdf]) for slightly updated notation.

![alt text][gofx]
We study function composition as a fundamental data processing step.
Assuming band-limiting frequencies $\nu_f$ and $\nu_g$ of the two functions $f$ and $g$, respectively,
a less conservative, coarser sampling rate is derived that still
enables accurate reconstruction of the composed function $g(f(x))$.


[gofx]: {{ site.baseurl }}/assets/img/gofx-example.png "Fourier domain analysis of function composition"
[phdpdf]: http://summit.sfu.ca/system/files/iritems1/12089/etd7005_SBergner.pdf "PhD thesis PDF file"
[phdlibrary]: http://summit.sfu.ca/item/12089 "Making choices in multi-dimensional parameter spaces"
