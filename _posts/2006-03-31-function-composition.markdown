---
layout: post
title:  "Spectral analysis of function composition"
date:   2006-03-31
categories: research
---
Before rendering, data values $f(x)$ at given spatial positions $x$ have to be assigned optical properties and visibility. In mathematical terms this corresponds to function composition $g(f(x))$. We describe the composition as a linear operator and conduct a spectral analysis to estimate a suitable sampling frequency in $x$ to reconstruct the composed signal. We put the theoretical insight to practical effect by implementing a raycaster with an adaptive sampling scheme based on our new estimate.
The work is described in a <a href="{{ site.baseurl }}/assets/pub/bergner2006gofx.pdf">IEEE TVCG paper</a> (<a href="{{ site.baseurl }}/mybib.html#gofx">bibtex</a>) and has been presented at IEEE Visualization 2006.
See also Chapter 6 of my [PhD thesis][phdlibrary] ([PDF][phdpdf]) for slightly updated notation.

![alt text][gofx]
We study function composition as a fundamental data processing step.
Assuming band-limiting frequencies $\nu_f$ and $\nu_g$ of the two functions $f$ and $g$, respectively,
a less conservative, coarser sampling rate is derived that still
enables accurate reconstruction of the composed function $f(f(x))$.

[gofx]: {{ site.baseurl }}/assets/img/gofx-example.png "Fourier domain analysis of function composition"
[phdpdf]: http://summit.sfu.ca/system/files/iritems1/12089/etd7005_SBergner.pdf "PhD thesis PDF file"
[phdlibrary]: http://summit.sfu.ca/item/12089 "Making choices in multi-dimensional parameter spaces"
