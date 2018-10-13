---
layout: default
title: Cmpt 767 - Visualization Project Topics
description: Fall Semester 2018
breadcrumb: index
breadcrumb_name: Course Page
---

It’s great if you come up with your own ideas! However, here are some
suggestions, in case you are looking for inspiration or would like to calibrate
the scope of your project. While most of these are free-form projects, you can
also do paper re-implementations or re-evaluations.

# Paper redos

The main goal of these is to reimplement the ideas of the paper. For
other current Vis publications, see the [IEEE Conf. on Visualization](http://ieeevis.org/year/2018/info/awards/best-paper-awards).
Consider to use the [SFU Library Bookmarklet](https://www.lib.sfu.ca/find/research-tools/campus-access-bookmarklet) if
you want to access non-free publications from home.

  - [HOLA:](http://ieeexplore.ieee.org/document/7192690) Human-like Orthogonal
    Network Layout; Steve Kieffer, Tim Dwyer, Kim Marriott, Michael Wybrow;
    IEEE Transactions on Visualization and Computer Graphics (Volume: 22,
    Issue: 1, 2016); [Code](https://github.com/skieffer/hola)
  - [Learning Perceptual Kernels for visualization
    design](http://hci.stanford.edu/publications/2014/perceptualkernels/perceptualkernels-infovis2014.pdf)
    Demiralp C., Bernstein MS, Heer J.; IEEE Trans Vis Comput Graph.  2014
    Dec;20(12):1933-42. [Code](https://github.com/uwdata/perceptual-kernels)
  - [Where's Waldo? How perceptual, cognitive, and emotional brain processes cooperate during learning to categorize and find desired objects in a cluttered scene](http://dx.doi.org/10.3389/fnint.2014.00043)
    Hung-Cheng Chang, Stephen Grossberg and Yongqiang Cao; Front. Integr. Neurosci., 17 June 2014;
  - [LineUp:](http://www.caleydo.org/publications/2013_infovis_lineup) Visual
    Analysis of Multi-Attribute Rankings; Samuel Gratzl, Alexander Lex,
    Nils Gehlenborg, Hanspeter Pfister, Marc Streit; IEEE Transactions
    on Visualization and Computer Graphics (InfoVis '13), 19(12), pp.
    2277–2286, \<doi:10.1109/TVCG.2013.173\>, 2013.
  - [Cluster and Calendar based Visualization of Time Series Data](https://www.cs.ubc.ca/~tmm/courses/533-07/readings/vanwijk99cluster.pdf)
    J. van Wijk, Edward R. van Selow; IEEE Symposium on Information Visualization (INFOVIS’99), 1999.
  - Error Bars Considered Harmful: Exploring Alternate Encodings for
    Mean and Error Michael Correll, Michael Gleicher; IEEE Transactions
    on Visualization and Computer Graphics, 2014.

-----

# Free-form projects

## Visualize Machine Learning algorithms

One of the difficulties with machine learning is to really understand how an
algorithm/algorithm family works. The goal here would be to pick a particular
algorithm/algorithm family and help the user to better understand it by
visualizing their behaviour. One way (but a promising way) is to expose their
parameters and create lots of different results of the algorithms by varying
these parameters. The summary of the results gives an overview of what this
"black box" is capable of. Pick your favourite algorithm/algorithm family (SVM,
clustering, Deep Learning, Neural networks, etc.) and develop such a tool.

Interesting aspects:

  - **Neural Networks / Deep Learning:** While there is a lot of hype around
    them, it is not well understood how to pick particular parameters that make
    them work well. E.g. how many layers should the network have, how many
    internal nodes, what activation function work best, etc. The idea would be
    to create an environment that lets users explore the impact of such
    parameters in a structured way. As starting points, check out [Tensorboard](https://www.tensorflow.org/guide/summaries_and_tensorboard)
    and [Zhen-Yu Tang's blog](https://tangzhenyu.github.io/deep_learning/2015/03/02/visulize-cnn.html).
  - **Dimensionality reduction (DR) algorithms:** There are many different DR
    algorithms, such as Principal Component Analysis (PCA), different versions
    of Multi-dimensional Scaling (MDS) algorithms, Linear Discriminant Analysis
    (LDA), t-SNE, Isomap, or Laplacian Eigenmaps.  They all have in common that
    when you feed them high-dimensional data, they reduce that to a
    lower-dimensional embedding, often 2D which then can be shown in a 2D
    scatterplot. For users it is often hard to understand the differences and
    select among this variety of algorithms. The idea would be to create an
    environment that lets users explore and compare different DR algorithms.
  - **Clustering algorithms:** Just as in dimension reduction, there are many
    different clustering algorithms, such as k-means, DBSCAN, hierarchical
    clustering, Gaussian mixture models, as well as different versions of
    sub-space clustering methods. The goal of these algorithms is to organize
    data items into groups, so that similar items end up in the same group
    (called a cluster). The result of a clustering algorithm is commonly shown
    in a color-coded 2D scatterplot (usually projected from higher dimensions,
    see above), and different colors indicate different clusters. For users it
    is often hard to understand the differences and select among this variety
    of algorithms, and to set meaningful parameters (most prominently k, the
    number of clusters, in k-means). This is specifically true as there often
    is no one-and-only correct answer for a clustering problem (ill-defined),
    and users need to explore different possibilities first. The idea, hence,
    would be to create an environment that supports users to systematically
    explore and compare different clustering algorithms.

## Project - Visualisation of large Confusion Matrices for Image Classification

In the last years Deep Networks, a special kind of artificial neural
network with many layers, have revolutionised many fields such as
Natural Language Processing or Computer Vision.

For image classification the Deep Networks are able to distinguish 1000s
of different classes, unfortunately it’s not always clear for which type
of class (e.g. dogs) the network works better and for which it doesn’t.
In classic machine learning there’s the concept of confusion matrices
which are a way to organise classification and mis-classification
results in a simple matrix. While standard visualizations of these
matrices are still usable up to about 12 classes, they unfortunately
won’t scale up to matrices of size 1000x1000 as encountered in modern
Computer Vision datasets.

Your job is to create new visualisations that scale to very large
confusion matrices and enable an computer vision expert to understand
the classification accuracy of his current algorithm, i.e, a
convolutional neural network.

-----

# Open Data

There has been a deluge of open data by various government and
governmental organization over the last few years. While this is
admirable, what good is all this data doing if the common citizen is not
being able to understand, explore, nor learn from this data. Hence, the
goal is to develop a tool (ideally) web based that helps people to
explore such data. One of the challenges will be to gear this tool
toward a broad set of people, hence you cannot assume a great visual
literacy (a problem the New York times has been struggling with and
perhaps is providing some ideas for). Further, it is unrealistic to
provide a universal tool where all types of data can be explored with
and all questions can be answered with. Hence, it'll be important to
narrow your focus on specific aspect of civic life. There are quite a
number of open data sources that you can choose from:

  - [Open Data Canada](https://open.canada.ca/en/open-data)
  - [EuroStat](http://epp.eurostat.ec.europa.eu/portal/page/portal/eurostat/home/) -- data from the statistical office of the European Union
  - [data.gov](http://www.data.gov/) -- data from the US government
  - [Plenty](http://blog.visual.ly/data-sources/) of other sources around the web
  - [United Nations Data](http://data.un.org/)
  - [OECD Statistics Center](http://www.oecd.org/statistics)
  - [NationMaster](http://www.nationmaster.com/) and [StateMaster](http://www.statemaster.com/) statistics repositories
  - [NIST (National Institute for Standards and Technology) Scientific and Technical Databases](http://www.nist.gov/data)
  - [Statistical Science Data Sets](http://www.statsci.org/datasets.html) Large index of data sets from fully processed to raw

### Other

  - [Baseball Statistics](http://baseball1.com/statistics/)
  - The Lahman baseball database, 1871-present.
  - [Google Trends](http://google.com/trends)- Track the average
    worldwide traffic of any search term. Once you get the results,
    scroll to the bottom of the page and look for "Export this page as a
    CSV file". You must be logged into Google for the feature to work

## Agriculture, Food and Nutrition

  - [World wine statistics](http://www.wineinstitute.org/communications/statistics/worldstats.htm) Information on worldwide wine production and consumption.
  - [USDA PLANTS Database](http://plants.usda.gov/) -- The PLANTS Database
    provides standardized information about the vascular plants, mosses,
    liverworts, hornworts, and lichens of the U.S. and its territories.  It
    includes names, plant symbols, checklists, distributional data, species
    abstracts, characteristics, images, plant links, references, crop
    information, and automated tools.

## Demographics

  - [Frequently occurring first and last names](https://www.census.gov/topics/population/genealogy/data.html) U.S. Census
    Bureau genealogical data on names.
  - [Popular baby names](http://www.ssa.gov/OACT/babynames/?sex=male\&yob=2003)
    Social Security Administration data on distributions of given names.
  - [Human Mortality Database](http://www.mortality.org/) -- The Human
    Mortality Database (HMD) was created to provide detailed mortality
    and population data to researchers, students, journalists, policy
    analysts, and others interested in the history of human longevity.

### National Surveys of 8th Graders

A nationally representative sample of eighth-graders were first surveyed
in the spring of 1988. A sample of these respondents were then
resurveyed through four follow-ups in 1990, 1992, 1994, and 2000. On the
questionnaire, students reported on a range of topics including: school,
work, and home experiences; educational resources and support; the role
in education of their parents and peers; neighborhood characteristics;
educational and occupational aspirations; and other student perceptions.
The .xls file contains 2000 records of students' responses to a variety
of questions and at different points in time. The codebook explains the
question and answer codes.

  - [Website description of the survey](http://nces.ed.gov/surveys/nels88/)
  - [Explanation of the data (pdf)](http://hci.stanford.edu/cs448b/data/nels/NELSdatacodebook.pdf)
  - [The data (xls)](http://hci.stanford.edu/cs448b/data/nels/NELS2000org.xls)

## Politics and Government

### Florida 2000 Ballot Data

This data set is Florida election data from the [CMU Statistical Data Repository](http://lib.stat.cmu.edu/datasets/)
(Note: when downloading these files, be sure to use the correct "save-file" operation for your browser. IE tends to add extra characters that confuse the programs.)

  - [Background reading by Marti Hearst, UCB (ppt)](http://hci.stanford.edu/cs448b/data/florida-voting/fl2000-background.ppt)
  - [Original Data Set with commentary](http://hci.stanford.edu/cs448b/data/florida-voting/fl2000.txt)
  - [Data in CSV format](http://hci.stanford.edu/cs448b/data/florida-voting/fl2000.csv)

### U.S. House of Representatives Roll Call Data

This contains roll call data from the 108th House of Representatives:
data about 1218 bills introduced in the House and how each of its 439
members voted on it. The data covers the years 2003 and 2004. The
individual columns are a mix of information about the bills and about
the legislators, so there's quite a bit of redundancy in the file for
the sake of easier processing in Tableau.

  - [Information file](http://hci.stanford.edu/cs448b/data/108thHouse/108thHouseReadme.txt)
  - [Zip file with csv formatted data](http://hci.stanford.edu/cs448b/data/108thHouse/108thHouse.csv.zip)

### Government Spending Data

Have you ever wanted to find more information on government spending?  Have you
ever wondered where federal contracting dollars and grant awards go? Or perhaps
you would just like to know, as a North-american citizen, what our neighbour's government is really doing
with their money.

  - [usaspending.gov](http://usaspending.gov/)

-----

# Vis challenges

For a number of years, the Vis, InfoVis, and VAST conferences have created a
visualization contest. For each contest a problem scenario together with the
relevant data sets have been provided to the research community and a price has
been awarded to the best visualization. Some of the problems have been quite
challenging. However, for the most part, these are great problems to work on.

While we are not expecting you to create winning entries to these visualization
challenges, these are often well thought out problems that are fun and
solvable. See whether any are of interest to you.

### 2018 WestGrid [Visualize This\! Challenge](https://westgrid.github.io/visualizeThis/journal/welcome-to-challenge.html)

Two contributed datasets are part of two separate competitions:

  - a scientific visualization challenge based on
    a [molecular dynamics simulation dataset](https://westgrid.github.io/visualizeThis/menu/scientific.html)
    and
  - a humanities visualization challenge based on
    the [Orlando British Women’s Writing Dataset](https://westgrid.github.io/visualizeThis/menu/humanities.html)

To use this as a project idea, you do not need to submit your solution
to the competition nor do you have to follow the given analysis
objectives. However, feel free
to[register](https://www.eventbrite.ca/e/3rd-annual-visualize-this-challenge-registration-48899166724)and
submit by Nov 30th.

### IEEE SciVis Contest (Spatial data)

  - [SciVis Contest 2017](https://www.dkrz.de/SciVis)
  - [SciVis Contest 2016](http://sciviscontest.ieeevis.org/2016/)
  - [SciVis Contest 2015](http://sciviscontest.ieeevis.org/2015/)
  - [SciVis Contest 2014](http://sciviscontest.ieeevis.org/2014/)
  - [SciVis Contest 2013](http://sciviscontest.ieeevis.org/2013/)
  - [SciVis Contest 2012](http://sciviscontest.ieeevis.org/2012/)
  - [SciVis Contest 2011](http://sciviscontest.ieeevis.org/2011/)
  - [SciVis Contest 2010](http://sciviscontest.ieeevis.org/2010/)
  - [SciVis Contest 2009](http://sciviscontest.ieeevis.org/2009/)
  - [SciVis Contest 2008](http://vis.computer.org/VisWeek2008/vis/contests.html)
  - [SciVis Contest 2006](http://vis.computer.org/Vis2006/cfp/contest.html)
  - [SciVis Contest 2005](http://vis.computer.org/Vis2005/cfp/contest.html)
  - [SciVis Contest 2004](http://vis.computer.org/vis2004contest/)

### IEEE InfoVis Contest (Spatially unconstrained data)

  - [InfoVis Contest 2008](http://vis.computer.org/VisWeek2008/infovis/cfpcontests.html)
  - [InfoVis Contest 2007](http://conferences.computer.org/infovis/infovis2007/contest.html)
  - [InfoVis Contest 2006](http://conferences.computer.org/infovis/infovis2006/contestc.html)
  - [InfoVis Contest 2005](http://ivpr.cs.uml.edu/infovis05/)
  - [InfoVis Contest 2004](http://www.cs.umd.edu/hcil/iv04contest/)
  - [InfoVis Contest 2003](http://www.cs.umd.edu/hcil/iv03contest/)

### VAST Challenges (Visual Analytics)

  - [VAST Challenge 2018](http://www.vacommunity.org/VAST+Challenge+2018)
  - [VAST Challenge 2017](http://www.vacommunity.org/VAST+Challenge+2017)
  - [VAST Challenge 2016](http://vacommunity.org/VAST+Challenge+2016)
  - [VAST Challenge 2015](http://ieeevis.org/year/2015/info/call-participation/vast-challenge)
  - [VAST Challenge 2014](http://ieeevis.org/year/2014/info/call-participation/vast-challenge)
  - [VAST Contest 2013](http://vacommunity.org/VAST+Challenge+2013%3A+Mini-Challenge+3)
  - [VAST Challenge 2012](http://www.vacommunity.org/VAST+Challenge+2012)
  - [VAST Challenge 2011](http://hcil.cs.umd.edu/localphp/hcil/vast11)
  - [VAST Challenge 2010](http://www.cs.umd.edu/hcil/VASTchallenge2010/)
  - [VAST Challenge 2009](http://www.cs.umd.edu/hcil/VASTchallenge09/)
  - [VAST Challenge 2008](http://www.cs.umd.edu/hcil/VASTchallenge08/)
  - [VAST 2007 Contest](http://www.cs.umd.edu/hcil/VASTcontest07/)
  - [VAST 2006 Contest](http://www.cs.umd.edu/hcil/VASTcontest06/)

### BioVis Contests (Biological Data)

  - [BioVis Data Contest 2018](http://biovis.net/2018/dream/)
  - [BioVis Data Contest 2017](http://biovis.net/2017/designContestvis/)
  - [BioVis Data Contest 2016](http://biovis.net/2016/designContestvis/)
  - [BioVis Design Contest 2016](http://biovis.net/2016/designContestvis/)
  - [BioVis Data Contest 2015](http://www.biovis.net/year/2015/info/overview)
  - [BioVis Design Contest 2015](http://www.biovis.net/year/2015/design-contest)
  - [BioVis Data Contest 2014](http://www.biovis.net/year/2014/info/datacontest)
  - [BioVis re-Design Contest 2014](http://www.biovis.net/year/2014/info/redesigncontest)
  - [BioVis Data Contest 2013](http://biovis.net/year/2013/info/contest)
  - [BioVis re-Design Challenge 2013](http://biovis.net/year/2013/info/redesign-contest)

<script>
// hack because neither disabling toc-levels nor no_toc work to disable lower-level headings from toc
$( document ).ready(function() {
    //$("nav .tag-h2").remove()
    $("nav .tag-h3").remove()
});
</script>
