---
title: Cmpt 767 - Homework 1
breadcrumb: index.html
breadcrumb_name: Course Page
---
The task description of this homework starts [further below](#homework-1).

# Visualization basics

In this assignment you will create visualizations
using tools that automate some of the construction process and use many
of the proper visual encoding techniques by default.

## Tools

Many desktop tools now also have Online/Cloud versions. You can choose whichever version works best in your environment. In all cases, you should be able to obtain free versions, sometimes with limitation to academic use.

* One of the tools for this class will be the
[Tableau](http://www.tableausoftware.com/) software
package. Tableau public also allows publishing of interactive dashboards, if your dataset is public.
* [Microsoft Power BI](https://powerbi.microsoft.com/en-us/). Note, if you use this tool you'll find that your means of publishing (and sharing) reports on the web are limited. In that case, export your dashboard as a report (pbix file) and include it in your submission.
* [Google Data Studio](https://datastudio.google.com). Google DS lets you create sharable links for your dashboards or interactive reports.
* [Lyra](http://idl.cs.washington.edu/projects/lyra/) is research software with dashboarding capabilities. You are welcome to use this instead, but we will not provide any support/help.

## Examples

Here are a few examples from Tableau Public (Click to open the Tableau Public site):

-   [Airbnb: San Francisco](https://public.tableau.com/views/AirbnbSanFranciscoAnalysis/Airbnb?:embed=y&:loadOrderID=0&:display_count=yes&:showTabs=y)

-   [US Data Science Programs](https://public.tableau.com/views/U_S_DataSciencePrograms/DataSciencePrograms?:embed=y&:display_count=yes)

-   [Does poverty have an impact on school performance](https://public.tableau.com/views/PovertyandSchoolPerformance/PovertyandSchoolPerformance?:embed=y&:loadOrderID=0&:display_count=yes)

## Getting started

### Install Tableau

-   [Tableau for Students](http://www.tableausoftware.com/academic/students)

-   [Drivers](http://www.tableausoftware.com/support/drivers) in case you have data sources that are not already supported.

-   [Create a tableau public account](https://public.tableau.com/s/)

Tableau content that is published to Tableau Public on the web can be
viewed in your web browser regardless of your operating system. However,
to author and publish views and workbooks, you use Tableau Desktop
Public and Professional Editions.

### Background reading

-   [Preparing Excel files for analysis in Tableau](http://kb.tableausoftware.com/articles/knowledgebase/preparing-excel-files-analysis)
-   If there are problems with Excel imports, export the Excel file as a csv file and import this file as a text file.
-   Quick start guide: [How to connect to data?](http://downloads.tableau.com/quickstart/main-guides/en-us/desktop\_getstarted9.2.pdf)
-   [Dashboard design](https://public.tableau.com/s/blog/2013/10/dashboard-layout-and-design)
-   Tutorial Data: [download CSV](Global_Landslide_Catalog_Export.csv)

# Homework 1

The first part of your assignment is to develop a *single* interactive
Tableau dashboard with several views, that would allow manipulation and
exploration of the Canada Census dataset in various ways. A view is a
single graphical representation of the data (i.e. a chart) and a
dashboard connects multiple views in a meaningful way. Any dashboards
after the first will not be counted towards your grade.

To make the experience of navigating through data more effective, you
will need to use techniques mentioned in the lecture (e.g. drill-down, cross-filtering). Your solution should also
provide a coherent overview of your personal findings. Here are some
tips to help you with your data analysis. Look for logical connections
between several data fields and possible patterns within each. Think of
the questions that may be answered and include those as examples in your write-up.

The second part of your assignment includes a short **write-up** (1-2
pages) that describes the reasoning process that led to your final
visualizations. This write-up should discuss alternative ideas you had,
insights you gained from the data, and why you went with your final
design choices. Try to incorporate the things you learned from the
design principles class. This write-up will be a major part of the grade
for this assignment so try to explain your ideas clearly. Please also
include screenshots or sketches where necessary to make your point. You
can also include a short reflection on your experiences with Tableau or whichever tool you chose to use.
For example, any difficulties you had with making exactly the
view you wanted or the ease of prototyping.

### **Dataset: City of Urbana arrests since 1988**

This is a big dataset including sensitive information like age or race.

Data: [[Official
website]](https://data.urbanaillinois.us/Police/Urbana-Police-Arrests-Since-1988/afbd-8beq)
or from our server as a [[csv
file]](urbana_crimes.csv.gz).

## Submission

To publish with Tableau, you will have to sign up for [a free Tableau Public
account](https://public.tableau.com/s/) and when you are
finished with your dashboard in Tableau Desktop, publish it to the web
by following: Server -\> Tableau Public -\> Save to Tableau Public\...

Please also submit your assignment as a zip file containing both your
(Tableau) dashboard and a short write-up essay (as pdf). For this, you
will have to save your visualization as a \"Packaged Workbook\" (File
-\> Export Packaged Workbook). This will save the data with the workbook
so that both visualizations and data are packed up in one file.
The write-up should
include a link to your public dashboard or interactive report on the web.
In Tableau there is a share button for each dashboard, use this link.
*Please note: If you only submit to
one of two place (e.g. Tableau public) the assignment will not be counted as
submitted!*

The report (including the link to the public dashboard) and
worksheet should be uploaded to CourSys. Use the following naming scheme
for your submission: \"HW1.zip\". Late Submissions are possible, yet
they will be penalized.

## Grading

We will evaluate your Tableau visualization based on the quality of
communicating the fundamental aspects of the given dataset. Does it give
the viewer a good understanding of the different characteristics of the
data and exploratory insights? Here, we are looking for both
effectiveness and creativity. We do realize that people have differing
levels of design ability and experience. Therefore, we are also looking
for a good effort, not necessarily some conference paper-worthy new
idea. The purpose of this assignment is to provide you with experience
in the analysis of data like this and the design of visualizations to
present the data.

We will grade your submission and presentation with the following
scheme:

-   15 % producing an interesting solution / creativity
-   25 % proper use of visual encodings / interactions
-   20 % implementation / realization
-   40 % explanations / reasoning why this is a good visualization
