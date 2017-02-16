---
layout: post
title: Rendering with a spectral model of light and reflectance
date: 2008-05-01
collab:
- <a href="http://www.cs.sfu.ca/~mark">Mark S. Drew</a>
- <a href="https://research.tableau.com/user/melanie-tory">Melanie Tory</a>
- <a href="https://cs.univie.ac.at/vda/team/worker/infpers/Torsten_M%C3%B6ller">Torsten M&ouml;ller</a>
- <a href="https://www.uea.ac.uk/computing/people/profile/g-finlayson">Graham Finlayson</a>
---

| ![][tt1]{: .center-image } | ![][tt2]{: .center-image } |

<ul>
<li>One can influence the appearance of a scene by changing the illuminating light spectrum. Establishing this as a new form of interaction using image based illumination is the main motivation for this work.
</li>
<li>To further facilitate interaction we devise a <a href="{{ site.baseurl }}/assets/img/lightdial.png">n-D slider widget</a> that allows to smoothly progress through a multi-dimensional parameter space by a single mouse dragging operation.
These first two parts of the approach are discussed in our <a href="http://www.cs.sfu.ca/~torsten/Publications/Papers/tvcg05-2.pdf">IEEE TVCG paper</a> (<a href="{{ site.baseurl }}/mybib.html#pracsvr">bibtex</a>).
</li>
<li>Complementary lights and reflectances allow for effects such as metamerism and objective color constancy under changing lighting. A <a href="https://web.archive.org/web/20131011095622/http://www.cs.sfu.ca/~sbergner/personal/pub/colpaper.pdf">paper on the spectral design method (preprint)</a> has recently been accepted for publication at <a href="http://tog.acm.org/">acm Transactions on Graphics</a>. The related <a href="http://www.cs.sfu.ca/gruvi/Projects/Spectral_Engine/specgen.html">Matlab and Java code</a> is publicly available.
</li>
</ul>

[tt1]: {{ site.baseurl }}/assets/img/spectral-tt1-pal.jpg "designing spectral materials for different lights"
[tt2]: {{ site.baseurl }}/assets/img/spectral-tt2-pal.jpg "designing spectral materials for different lights"

