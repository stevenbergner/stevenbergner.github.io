---
layout: post
title: Making choices in multi-dimensional parameter spaces
date: 2011-12-18
author: Steven Bergner
---
# PhD thesis

Have a look at [my PhD thesis at SFU library][phdlibrary] ([PDF][phdpdf]) or check out the [slides of the seminar][phdpresent] to see what it is about.

## Abstract

Visualization techniques are key to leveraging human experience, knowledge, and intuition when establishing a connection between computational models and real world systems. At this interface my dissertation enables effective choices of parameter configurations for different levels of user involvement.

Based on a characterization of several domains of computer experimentation that include a model of biological aggregations, image segmentation methods, and rendering algorithms, I derive a set of requirements to propose Paraglide - a framework for user-driven analysis of parameter effects. One outcome of the workflow I suggest is a partitioning of the continuous space of model configurations into distinct regions of homogenous system behaviour.

To facilitate progressive exploration of a parameter region, I develop a space-filling sampling method by constructing point lattices that contain rotated and scaled versions of themselves. All levels of resolution share a single type of Voronoi polytope, whose volume grows independently of the dimensionality by a chosen integer factor as low as 2.

To optimize rendering time while ensuring image quality when viewing data in a 3-dimensional volume, I perform a Fourier domain analysis of the effect of composing two functions. Based on this, I relax a previous lower bound for a sufficient sampling frequency and apply it to adaptively choose the numerical integration step size in raycasting.

By assigning optical properties to data using a spectral light model, it becomes possible to improve physical realism and to create colour effects that scale the level of distinguishable detail in a visualization.

To help modellers to cope with the freedom in a large design space of synthetic lights and materials, I devise a method that generates a palette of presets that globally optimize user-specified criteria and regularization. This is augmented with two alternative user interfaces to unobtrusively choose a desired mixture.

[phdpdf]: https://summit.sfu.ca/_flysystem/fedora/sfu_migrate/12089/etd7005_SBergner.pdf "PhD thesis PDF file"
[phdpresent]: {{ site.baseurl }}/assets/pub/bergner-phd-presentation.pdf "PhD seminar presentation"
[phdlibrary]: http://summit.sfu.ca/item/12089 "Making choices in multi-dimensional parameter spaces"
