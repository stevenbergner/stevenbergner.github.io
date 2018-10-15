---
layout: slide
author: Steven Bergner
title: Paraview tutorial
date: October 15th, 2018
theme: beige
transition: fade-in
---
{::options parse_block_html="true" /}
{% include_relative slide-theme-customization.snippet %}

<section>
# {{page.title}}

{{page.author}}

<small>{% include protect-email-raw.include email=site.email %}</small>

<small>*{{page.date}}*</small>

</section>

<section>
# Sources
* Many tutorials with example data
  - [Kitware](https://www.paraview.org/Wiki/The_ParaView_Tutorial)
  - [DKRZ](https://www.dkrz.de/up/services/analysis/visualization/sw/paraview/tutorial/paraview-tutorial-doc)
  - R. Ponzini [HPC/OpenFOAM post-processing in Paraview](http://www.training.prace-ri.eu/training_material/%3ftx_pracetmo_pi1%5buid%5d=392/) ([data](https://hpc-forge.cineca.it/files/OpenFOAM/public/))
  - [BU tech](http://www.bu.edu/tech/support/research/training-consulting/online-tutorials/paraview/)
</section>

<section>
# Data for today in the lab
* Download data to `/tmp/<username>` on your lab machine and start `paraview`:
```
mkdir -p /tmp/$LOGNAME
cd !$
wget http://vault.sfu.ca/index.php/s/xMj3gafODzHiQOt/download -O pvtut-data.tgz
tar xzf pvtut-data.tgz
cd pvtut-data
/usr/shared/CMPT/big-data/ParaView-5.5.2-Qt5-MPI-Linux-64bit/bin/paraview
```
{: .small }
</section>

<section>
# Workflow to make a figure
* Create a data source (load data)
* Inspect available variables and ranges
* Adjust view and display settings
* Adjust visual representation and coloring
* Adjust text and legend
</section>

<section>
<div class="container">
<div class="col">
# Sources
Add data to 3D scene
* as VTK source objects
* load files using readers
</div>
<div class="col" />
![](img/pv-sources.png)
</div>
</section>


<section data-background="img/pv-filters.png" data-background-size="contain">
<div class="container">
<div class="col" style="background:rgba(255, 255, 255, 0.7);text-align:center;">
# Filters
</div>
<div class="col" />
</div>
</section>

<section data-background="img/pv-customized-filters.png" data-background-size="contain">
<div class="container">
<div class="col" style="background:rgba(255, 255, 255, 0.7);text-align:center;">
# Customized Filters
</div>
<div class="col" />
</div>
</section>

<section>
# Work with filters
Perform basic filtering on the provided data
* Slice
* Iso-surface
* Extract surface to apply smoothing
* Clipping
</section>

<section>
# Advanced: Motorbike
* Smaller dataset (obtained via clipping)
* Contour plot of iso-Q
* Extract the isosurface
* Smooth
* Save the surface for future visualization
* Color by velocity or pressure or both and compare
* Build a filter that will do all the work in a single click
* Add text and colorbar
* Save meaningful visualizations
</section>
