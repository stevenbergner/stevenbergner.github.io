---
layout: post
title:  "Spectral analysis of function composition"
date:   2006-03-31
author: Steven Bergner
breadcrumb: index
categories: research
collab:
- <a href="http://www.visus.uni-stuttgart.de/~weiskopf/">Daniel Weiskopf</a>
- <a href="https://cs.univie.ac.at/vda/team/worker/infpers/Torsten_M%C3%B6ller">Torsten M&ouml;ller</a>
- <a href="http://www.math.sfu.ca/~muraki/">Dave Muraki</a>
---
Before rendering, data values $f(x)$ at given spatial positions $x$ have to be assigned optical properties and visibility. In mathematical terms this corresponds to function composition $g(f(x))$. We describe the composition as a linear operator and conduct a spectral analysis to estimate a suitable sampling frequency in $x$ to reconstruct the composed signal. We put the theoretical insight to practical effect by implementing a raycaster with an adaptive sampling scheme based on our new estimate.

This work is described in a [IEEE TVCG paper][gofxpaper] ([bibtex]({{ site.baseurl }}/mybib.html#gofx)) and has been presented at IEEE Visualization 2006.
See also Chapter 4 of my [PhD thesis][phdlibrary] ([PDF][phdpdf]) for slightly updated notation.

![alt text][gofx]
We study function composition as a fundamental data processing step.
Assuming bandlimiting frequencies $\nu_f$ and $\nu_g$ of the two functions $f$ and $g$, respectively,
a less conservative, coarser sampling rate is derived that still
enables accurate reconstruction of the composed function $g(f(x))$ refered to as $h$ in the following.

## Hint for reading the paper

The simplified explanation provided below treats the problem for one-dimensional functions $f, g:\RR\to\RR$ and avoids the use of polar coordinates to represent combinations of frequencies $k,\,l$.

The [paper][gofxpaper]'s main result is that $\nu_h = \nu_g\max_x\|f'(x)\|$ (**Eq. 13**). In other words, the quasi-bandlimiting frequency $\nu_h$ of the composed function $h$ is proportional to the extremal slope of $f$ times the bandlimiting frequency $\nu_g$ of $g$.

The relevance of having an estimate for the bandlimit $\nu_h$ of the composed function is that [Shannon's sampling theorem](https://en.wikipedia.org/wiki/Whittaker%E2%80%93Shannon_interpolation_formula#Definition) implies a step size $T\sim 1/\nu_h$ for a uniform sampling of $h$ that enables its perfect reconstruction.

To follow the derivation of Eq. 13, first note that Eqs. 6 & 7 imply that if $P(k, l)\approx 0$ for all $k>\nu_h$, the resulting frequency spectrum $H$ of the function $h$ is going to have a (quasi) bandlimit $\nu_h$. Inspecting the form of
$P(k,l)=\int_\RR e^{ilf(x)-kx}dx$ (**Eq. 5**) in Section 3.2, we recognize it as an integral over an oscillating integrand with unit magnitude and phase $u(x)=lf(x)-kx$.

[Stationary phase approximation](https://en.wikipedia.org/wiki/Stationary_phase_approximation) is a standard analytic method that enables an approximation of the integral $P(k,l)$ by only considering contributions of its integrand where the phase of oscillation $u$ "slows down to a halt", i.e. where $du/dx=0$, refering to such points as $x_s$. Since Eq. 5 integrates over $x$, the parameters $k$ and $l$ of $u$ can be considered constants in the integral and stationary phase will occur wherever $k/l=f'(x_s)$. Now, the result in Eq. 13 can be established if the slope $f'$ of $f$ is bounded and noting that the largest frequency $l$ of relevance to non-zero portions of the spectrum $H$ in Eq. 6 is $\nu_g$, the bandlimit of $g$.

The paper follows a different path of explanation to satisfy further technical conditions of the method and also to obtain a further statement about the "quasi"-ness of the bandlimit $\nu_h$, i.e. showing that $H$ decays exponentially beyond this limit.

## 2026 note: composition, interchange, and provenance

I am reopening this result as a focused follow-up note, not replacing the 2006
paper. The core object remains the composed observable $h=g\circ f$, but the
current emphasis is different: under which stated conditions may a composed
quantity be rewritten, sampled, archived, and re-entered without losing the
conditions that made the rewrite valid?

In the original derivation, the visible move is spectral: separate the
contribution of the transfer function from the scalar field and estimate the
frequencies that matter for reconstruction. The new addendum should make the
admissibility conditions more explicit: the relevant function spaces, the
measure-theoretic interchanges behind the representation, the operator view of
composition, and the regime in which stationary phase is a controlled
approximation rather than a silent identity.

The same discipline applies to publication. A future release should first be a
citable archival object, for example a versioned release with a DOI and
DataCite-style metadata. A content hash and timestamp proof can then serve as a
provenance receipt: a way to witness that a specific file existed in a specific
form. Content-addressed storage or a timestamping protocol may be useful here.
Tokenization, if used at all, should not replace citation. It should be a
lightweight receipt or sponsorship layer pointing to the archived DOI and hash,
not a speculative collectible.

That distinction matters mathematically as well as economically. The work is
not a new claim to own function composition. It is a renewed mathematical
reading of a published result: composition as a lawful transition between
representations, where proof obligations, approximation regime, and publication
receipt are all part of the object being communicated.

[gofx]: {{ site.baseurl }}/assets/img/gofx-example.png "Fourier domain analysis of function composition"
[phdpdf]: http://summit.sfu.ca/system/files/iritems1/12089/etd7005_SBergner.pdf "PhD thesis PDF file"
[phdlibrary]: http://summit.sfu.ca/item/12089 "Making choices in multi-dimensional parameter spaces"
[gofxpaper]: {{ site.baseurl }}/assets/pub/bergner2006gofx.pdf "IEEE TVCG publication PDF"
