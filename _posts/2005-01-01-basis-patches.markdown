---
layout: post
title: Learning kernels for spatio-temporal-chromatic image data
date: 2005-05-01
collab:
- <a href="http://www.cs.sfu.ca/~mark">Mark S. Drew</a>
---

We look at patches (space-time cubes) of color image sequences and
conduct independent (ICA) and principle component analysis (ICA) to obtain
different basis functions. While the PCA basis functions optimally
represent the data in a least squares sense, ICA basis functions are
more suitable for entropy-based variable length encoding. Applied to
image compression this advantage became particularly apparent for low
bit rates.  The work is described in our <a href="http://www.cs.sfu.ca/~mark/ftp/Icip05/icip05.pdf">ICIP 05
paper</a> (<a href="{{ site.baseurl }}/mybib.html#stcbase">bibtex</a>). An extended version has been published at Signal Processing: Image Communication <a href="http://dx.doi.org/10.1016/j.image.2008.05.006">[doi]</a>.

![][icabasis]{: .center-image }

The picture shows different kernels with time progressing from left to right. The kernel on top can detect vertically moving edges, below that we find a detector for non-moving diagonal edges, then a horizontal color edge, color transition from blue to green, etc. See our publication for more, higher-resolution examples.

These basis functions have been generated for a set of natural images.
While motivated from an image encoding perspective, we point out that using these basis patches for feature detection is very similar in spirit to employing convolutional neural networks that have been pre-trained for a certain class of images (e.g, compare Fig. 3 in [AlexNet 2012](http://papers.nips.cc/paper/4824-imagenet-classification-with-deep-convolutional-neural-networks.pdf) with Fig. 4 in <a href="http://www.cs.sfu.ca/~mark/ftp/Icip05/icip05.pdf">our earlier work</a>).

[icabasis]: {{ site.baseurl }}/assets/img/ica-basis.jpg "basis functions obtained using ICA on patches of natural images"

