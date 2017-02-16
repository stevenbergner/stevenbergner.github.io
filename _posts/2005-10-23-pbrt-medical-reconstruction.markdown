---
layout: post
title:  "Physically-based rendering for 3D medical reconstruction"
date:   2005-10-23
breadcrumb: index
categories: research
collab:
- <a href="http://www.vchri.ca/researchers/anna-m-celler">Anna Celler</a>
- <a href="https://cs.univie.ac.at/vda/team/worker/infpers/Torsten_M%C3%B6ller">Torsten M&ouml;ller</a>
- <a href="http://pages.cpsc.ucalgary.ca/~ualim/">Usman Alim</a>
---
I per-used [PBRT](http://www.pbrt.org/), a computer graphics framework for global light transport simulations, to reconstruct the shape of the distribution of a radiating tracer inside the patient's body from projections recorded by a gamma camera for SPECT. This work illustrates an interesting overlap in research questions in graphics and medical reconstruction that goes beyond rendering for display purposes.
It can be read about in our [MIC 2005 paper][mic05pdf].

| ![][pbrt1]{: .center-image } | ![][pbrt2]{: .center-image } |

In this scene, path tracing is used to simulate densities of photons that arrive at points on a volumetric grid. In the simulation, the light transport is inverted from how radiation from tracers inside the patient's body is detected by outside cameras in the SPECT imaging.

The left picture illustrates the (inverted) incoming radiation from different camera angles by inserting quadratic screens around the volume in the center. In the right image, the screens are removed and the density of photon paths simulated under Compton scattering is shown in the light emitting volume.

[pbrt1]: {{ site.baseurl }}/assets/img/phrec-backproj.jpg "Back-projections of photon densities recorded from different angles"
[pbrt2]: {{ site.baseurl }}/assets/img/phrec-backproj-shield.jpg "Reconstruction of volumetric photon density"
[mic05pdf]: {{ site.baseurl }}/assets/pub/bergner-mic05.pdf "Using PBRT for medical reconstruction"
