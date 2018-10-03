---
layout: slide
author: Steven Bergner
title: EDA / High-Dimensional & Continuous Data
date: October 3rd, 2018
theme: beige
transition: slide
---
{::options parse_block_html="true" /}

<section>
# {{page.title}}

{{page.author}}

<small>{% include protect-email-raw.include email=site.email %}</small>

<small>*{{page.date}}*</small>

</section>

<section>
# Overview
* Exploratory Data Analysis (EDA)
* Multi/high-dimensional data
* Data acquisition and representation
* Interpolation of spatial data
</section>

<section>
# Exploratory Data Analysis
*"Far better an approximate answer to the right question, which is often vague, than an exact answer to the wrong question, which can always be made precise." -- John Tukey*

**Iterative cycle:**
{: .element: class="fragment" }
1. **Generate questions** about your data
1. **Search for answers** by visualising, transforming, and modelling your data
1. Use what you learn to **refine** your questions and/or generate new questions
{: .element: class="fragment" }

[**Source:** Hadley Wickham's [book chapter on EDA](http://r4ds.had.co.nz/exploratory-data-analysis.html) (2017)]

</section>
{: .small }

<section>
# Aspects of EDA
* **Variation**: tendency of the values of a variable to change from measurement to measurement
  - Study: distribution, typical values, unusual values, missing
* **Covariation**: tendency for values of two or more variables to vary together in a related way
  - Compare: A categorical and a continuous variable
</section>

<section data-transition="fade-in">
# One vs Two variables
![](img/EDA-old-faithful-1.png){: title="[Wickham 2017, Ch. 7]" height="400px" }

Data: 272 eruptions of the Old Faithful Geyser in Yellowstone National Park
{: .tiny }
</section>

<section data-transition="fade-in">
# One vs Two variables
![](img/EDA-old-faithful-2.png){: title="[Wickham 2017, Ch. 7]" height="400px" }

Data: 272 eruptions of the Old Faithful Geyser in Yellowstone National Park
{: .tiny }
</section>

<section>
# Boxplots
![](img/EDA-boxplot.png){: title="[Wickham 2017, Ch. 7]" }
</section>

<section>
# Boxplot comparison
![](img/EDA-boxplot-unnamed-chunk-27-1.png){: title="[Wickham 2017, Ch. 7]" height="500px" text-align="center" }
</section>

<section data-transition="fade-in">
# Two categorical variables
![](img/EDA-2categorical.png){: title="[Wickham 2017, Ch. 7]" height="500px" text-align="center" }
</section>

<section data-transition="fade-in slide-out">
# Two categorical variables
![](img/EDA-2categorical-grid.png){: title="[Wickham 2017, Ch. 7]" height="500px" text-align="center" }
</section>

<section data-transition="fade-in">
# Two continuous variables
![](img/EDA-2continuous-scatter.png){: title="[Wickham 2017, Ch. 7]" height="500px" text-align="center" }
</section>

<section data-transition="fade-in">
# Two continuous variables
![](img/EDA-2continuous-scatter-alpha.png){: title="[Wickham 2017, Ch. 7]" height="500px" text-align="center" }
</section>

<section data-transition="fade-in slide-out">
# Two continuous variables
<div class="container">
<div class="col">
![](img/EDA-2continuous-binned.png){: title="[Wickham 2017, Ch. 7]" height="500px" { text-align="center" }
</div>
<div class="col">
![](img/EDA-2continuous-binned-hex.png){: title="[Wickham 2017, Ch. 7]" height="500px" { text-align="center" }
</div>
</div>
</section>

<section>
# EDA in Python
* Dipanjan Sarkar's [practical ML in Python](https://github.com/dipanjanS/practical-machine-learning-with-python)
* Visit: [Workbook on Google collab](https://colab.research.google.com/drive/1y2M3uUcg-HHh8Blcj3XADMuv1EV-bFt3) with [blog post](https://towardsdatascience.com/the-art-of-effective-visualization-of-multi-dimensional-data-6c7202990c57)
</section>

<section>
# High-dimensional data
* PCA: [Quantopian lecture](https://www.quantopian.com/lectures/principal-component-analysis)
* t-SNE - [use effectively](https://distill.pub/2016/misread-tsne/)
</section>

<style>
.reveal h1 { font-size: 2.5em; }
.reveal .slides section { text-align:left; }
.reveal .slides .small { font-size: .8em; }
.reveal .slides .tiny { font-size: .5em; }
.container{
    display: flex;
}
.col{
    flex: 1;
}
</style>
